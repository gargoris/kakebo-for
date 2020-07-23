module DateEntering = {
  type aAccountable = {
    date: Js.Date.t,
    comment: string,
    ammount: float,
  };
};
module Gasto = {
  type t =
    | Supervivencia(string, DateEntering.aAccountable)
    | OcioVicio(string, DateEntering.aAccountable)
    | Cultura(string, DateEntering.aAccountable)
    | Extras(string, DateEntering.aAccountable)
    | Fijo(string, DateEntering.aAccountable);
};
module Ingreso = {
  type t = DateEntering.aAccountable;
};
