module DateEntering = {
  type apunte = {
    date: Js.Date.t,
    comment: string,
    ammount: float,
  };
};
module Gasto = {
  type t =
    | Supervivencia(string, DateEntering.apunte)
    | OcioVicio(string, DateEntering.apunte)
    | Cultura(string, DateEntering.apunte)
    | Extras(string, DateEntering.apunte)
    | Fijo(string, DateEntering.apunte);
};
module Ingreso = {
  type t = DateEntering.apunte;
};
