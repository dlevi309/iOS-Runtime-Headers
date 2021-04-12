/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSDictionary, NSArray;

@interface HDDemoDataFoodDatabase : NSObject {

	NSDictionary* _dietaryNutrientDailyValues;
	NSDictionary* _canonicalDietaryUnits;
	NSArray* _beverages;
	NSArray* _breakfastFoods;
	NSArray* _lunchFoods;
	NSArray* _snackFoods;
	NSArray* _dinnerFoods;

}

@property (nonatomic,copy) NSDictionary * dietaryNutrientDailyValues;              //@synthesize dietaryNutrientDailyValues=_dietaryNutrientDailyValues - In the implementation block
@property (nonatomic,copy) NSDictionary * canonicalDietaryUnits;                   //@synthesize canonicalDietaryUnits=_canonicalDietaryUnits - In the implementation block
@property (nonatomic,copy) NSArray * beverages;                                    //@synthesize beverages=_beverages - In the implementation block
@property (nonatomic,copy) NSArray * breakfastFoods;                               //@synthesize breakfastFoods=_breakfastFoods - In the implementation block
@property (nonatomic,copy) NSArray * lunchFoods;                                   //@synthesize lunchFoods=_lunchFoods - In the implementation block
@property (nonatomic,copy) NSArray * snackFoods;                                   //@synthesize snackFoods=_snackFoods - In the implementation block
@property (nonatomic,copy) NSArray * dinnerFoods;                                  //@synthesize dinnerFoods=_dinnerFoods - In the implementation block
-(id)init;
-(id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)arg1 ;
-(id)randomFoodForType:(long long)arg1 ;
-(id)coffee;
-(id)oceanSprayCranberryJuice;
-(id)tropicanaOrangeJuice;
-(id)odwallaCMonster;
-(id)milk;
-(id)quakerInstantOatmealRegularWithMilk;
-(id)quakerInstantOatmealAppleCinnamonWithMilk;
-(id)quakerInstantOatmealMapleWithMilk;
-(id)lifeCerealWithMilk;
-(id)totalCerealWithMilk;
-(id)jimmyDeanBreakfastCroissant;
-(id)traderJoesBreakfastBurrito;
-(id)mcDonaldsBigMac;
-(id)mcDonaldsMcDouble;
-(id)mcDonaldsMcChickenSandwich;
-(id)mcDonaldsCaesarSaladWithGrilledChicken;
-(id)mcDonaldsGreekSaladWithCrispyChicken;
-(id)traderJoesButterChickenWithBasmataRice;
-(id)traderJoesChickenAndGreenChileTomales;
-(id)subwayFootLongBlackForestHamSandwich;
-(id)subwayFootLongVeggieDelightSandwich;
-(id)subwayVeggieDelightSalad;
-(id)bumbleBarWithAlmond;
-(id)hersheyBarWithAlmonds;
-(id)clifBarChocoFudgeAndAlmond;
-(id)apple;
-(id)crackersGlutenFreeMultigrain;
-(id)crackersTriscuits;
-(id)keeblerAnimalCrackers;
-(id)oikosYogurt;
-(id)redLobsterTilapiaWithRoastedVegetables;
-(id)livemainLobsterWithCornAndPotatoes;
-(id)oliveGardenGarlicRosemaryChicken;
-(id)oliveGardenBakedTilapiaWithShrimp;
-(id)oliveGardenCitrusChickenSorrento;
-(id)oliveGardenHerbGrilledSalmon;
-(id)oliveGardenChickenScampi;
-(id)oliveGardenChickenAndShrimpCarbonara;
-(id)randomFoodObjectFromArray:(id)arg1 ;
-(double)dailyValueForDietaryNutrientIdentifier:(id)arg1 ;
-(id)oliveGardenRosemaryChicken;
-(NSDictionary *)dietaryNutrientDailyValues;
-(void)setDietaryNutrientDailyValues:(NSDictionary *)arg1 ;
-(NSDictionary *)canonicalDietaryUnits;
-(void)setCanonicalDietaryUnits:(NSDictionary *)arg1 ;
-(NSArray *)beverages;
-(void)setBeverages:(NSArray *)arg1 ;
-(NSArray *)breakfastFoods;
-(void)setBreakfastFoods:(NSArray *)arg1 ;
-(NSArray *)lunchFoods;
-(void)setLunchFoods:(NSArray *)arg1 ;
-(NSArray *)snackFoods;
-(void)setSnackFoods:(NSArray *)arg1 ;
-(NSArray *)dinnerFoods;
-(void)setDinnerFoods:(NSArray *)arg1 ;
@end

