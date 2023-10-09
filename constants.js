function add_cond(limit, color)
{
  return {cond: limit, color: color}; 
}
const LP_CONDS = [
 add_cond(80, "green"),
 add_cond(60, "green"),
 add_cond(40, "green"), 
 add_cond(20, "green")
];

const APP_HEADER_PREF = "Present Tense - "; 
const MUTATION_PROB = 5; 
const POINT_TO_DEDUCT = 5; 
 

const ARTICLE_STRS = ["je/j'", "tu", "il", "nous", "vous", "ils"];

