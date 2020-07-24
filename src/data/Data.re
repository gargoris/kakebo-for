/**
 * Module for some accountable
 */
module AccMovement = {
  type t = {
    date: Js.Date.t,
    comment: string,
    ammount: float,
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

module Incoming = {
  type t = {
    _type: string,
    movement: AccMovement.t,
  };
};
