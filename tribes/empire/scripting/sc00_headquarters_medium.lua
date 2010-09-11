-- =======================================================================
--                Starting conditions for Headquarters Medium               
-- =======================================================================

use("aux", "infrastructure")

set_textdomain("tribe", "empire")

return {
   name = _ "Headquarters medium",
   func = function(p) 

   p:allow_workers("all")

   local sf = wl.Map().player_slots[plr.number].starting_field
   prefilled_buildings(p, { "headquarters", sf.x, sf.y, 
      wares = {
         helm = 4,
         wood_lance = 5,
         axe = 6,
         bakingtray = 2,
         basket = 1,
         bread = 8,
         cloth = 5,
         coal = 12,
         fire_tongs = 2,
         fish = 6,
         fishing_rod = 2,
         flour = 4,
         gold = 4,
         grape = 4,
         hammer = 12,
         hunting_spear = 2,
         iron = 12,
         ironore = 5,
         kitchen_tools = 4,
         marble = 25,
         marblecolumn = 6,
         meal = 4,
         meat = 6,
         pick = 14,
         ration = 12,
         saw = 3,
         scythe = 5,
         shovel = 6,
         stone = 40,
         trunk = 30,
         water = 12,
         wheat = 4,
         wine = 8,
         wood = 45,
         wool = 2,
      },
      workers = {
         armoursmith = 1,
         brewer = 1,
         builder = 10,
         burner = 1,
         carrier = 40,
         geologist = 4,
         lumberjack = 3,
         miner = 4,
         stonemason = 2,
         toolsmith = 2,
         weaponsmith = 1,
         donkey = 5,
      },
      soldiers = {
         [{0,0,0,0}] = 45,
      }
   })
end
}

