/**
 * Module for some accountable
 */
module AccMovement = {
  /**
   * A handler is the person or entity that makes the movement: your employer, you...
   */
  type handler =
    | Person(string)
    | Entity(string);

  /**
   * Main type
   */
  type t = {
    date: Js.Date.t,
    comment: string,
    ammount: float,
    who: handler,
  };
};

/**
 * Some expense. It is a cathegory with a description and a acountable movement
 */
module Expense = {
  type t =
    | Survival(string, AccMovement.t)
    | LeisureVice(string, AccMovement.t)
    | Culture(string, AccMovement.t)
    | Extra(string, AccMovement.t)
    | Fixed(string, AccMovement.t);
};

module Income = {
  type t = {
    _type: string,
    movement: AccMovement.t,
  };
};
