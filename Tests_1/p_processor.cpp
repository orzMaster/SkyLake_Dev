#include "p_processor.h"
#include "player.h"
#include "passivitytemplate.h"

void WINAPI passivity_processor_init(){
	p_funcs[INCREASE_MAX_HP] = p_incrase_max_hp;
	p_funcs[INCREASE_MAX_MP] = p_incrase_max_mp;
	p_funcs[INCREASE_POWER] = p_incrase_power;
	p_funcs[INCREASE_ENDURANCE] = p_incrase_endurance;
	p_funcs[INCREASE_MOVEMENT_SPEED] = p_incrase_movement_speed;
	p_funcs[INCREASE_CRIT_FACTOR] = p_incrase_crit_factor;
	p_funcs[INCREASE_DAMAGE_BY] = p_incrase_damage;
	p_funcs[INCREASE_IMPACT_FACTOR] = p_incrase_impact_factor;
	p_funcs[INCREASE_BALANCE_FACOTR] = p_incrase_balance_factor;
	p_funcs[INCREASE_WEAKENING_APPLY_RATE] = p_incrase_weakening_rate;
	p_funcs[INCREASE_PERIODIC_APPLY_RATE] = p_incrase_poison_rate;
	p_funcs[INCREASE_STUN_APPLY_RATE] = p_incrase_stun_rate;
	p_funcs[INCREASE_WEAKENING_RESISTANCE] = p_incrase_weakening_resist;
	p_funcs[INCREASE_PERIODIC_RESISTANCE] = p_incrase_poison_resist;
	p_funcs[INCREASE_STUN_RESISTANCE] = p_incrase_stun_resist;
	p_funcs[INCREASE_CRIT_POWER] = p_incrase_crit_power;
	p_funcs[SKILLS_PRODUCES_LESS_AGGRO] = p_skill_less_aggro;
	p_funcs[INCREASE_MP_REPLENISHMENT] = p_incrase_mp_hit_regen;
	p_funcs[INCREASE_ATTACK_SPEED] = p_incrase_attack_speed;
	p_funcs[REOVERS_HP_EVERY_5_SECONDS] = p_incrase_five_hp_regen;
	p_funcs[REOVERS_MP_EVERY_5_SECONDS] = p_incrase_five_mp_regen;
	p_funcs[INCREASE_GATHERING_SKILL] = p_incrase_gather_skill;
	p_funcs[INCREASE_PLANT_HARVEST_SPEED] = p_incrase_harvest_skill;
	p_funcs[INCREASE_GATHERING_SPEED_ARUN] = p_incrase_gather_skill;
	p_funcs[INCREASE_ATTACK_SPEED_DECREASE_SKILL_COOLDOWN] = p_incrase_attack_speed_decrease_cooldown;
	p_funcs[INCREASE_KNOCKDOWN_RESISTANCE_WHILE_SKILL] = p_incrase_knockdown_resistance_while_skill;
	p_funcs[REFLECT_DAMAGE_TO_ATTACKER] = p_incrase_damage_reflect;
	p_funcs[INCREASE_CRAFTING_SPEED] = p_incrase_crafting_speed;
	p_funcs[CHANCE_REPLENISH_MP_COMBAT_ENTER] = p_incrase_chance_regen_mp_combat_start;
	p_funcs[DECREASE_DURATION_OF_STUN] = p_decrese_stun_duration;
	p_funcs[INCREASE_PVP_DAMAGE] = p_incrase_pvp_damage;
	p_funcs[DECREASE_PVP_DAMAGE] = p_incrase_pvp_defense;
	p_funcs[DECREASE_DAMAGE_TAKEN] = p_decrese_damage;

	return;
}

void WINAPI  passivity_proces(p_ptr p, passivity_template *t){
	if (!t ||t->type >= P_TYPE_MAX) return;
	if (p_funcs[t->type])p_funcs[t->type](p, t);
	return;
}




bool WINAPI p_incrase_max_mp(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_max_hp(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_power(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_endurance(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_movement_speed(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_crit_factor(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_damage(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_impact_factor(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_balance_factor(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_weakening_rate(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_poison_rate(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_stun_rate(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_weakening_resist(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_poison_resist(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI  p_incrase_stun_resist(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_crit_power(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_skill_less_aggro(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_mp_hit_regen(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_attack_speed(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_five_hp_regen(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_five_mp_regen(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_gather_skill(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_attack_speed_decrease_cooldown(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_knockdown_resistance_while_skill(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_damage_reflect(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_crafting_speed(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_chance_regen_mp_combat_start(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_decrese_stun_duration(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_pvp_damage(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_pvp_defense(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_decrese_damage(p_ptr, passivity_template *)
{
	return false;
}

bool WINAPI p_incrase_harvest_skill(p_ptr, passivity_template *)
{
	return false;
}
