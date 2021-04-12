/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/


@interface HREDerivedActionUtilities : NSObject
+(id)derivedActionsForActionableObjects:(id)arg1 fromActions:(id)arg2 ;
+(id)actionTypeForCharacteristic:(id)arg1 ;
+(id)actionTypesForProfile:(id)arg1 ;
+(id)actionTypeForActionClass:(Class)arg1 ;
+(id)actionTypeAlias;
+(id)serviceTypeAlias;
+(id)characteristicTypeAlias;
+(id)actionType:(id)arg1 ;
+(id)_derivedActionForActionableObject:(id)arg1 actionType:(id)arg2 actions:(id)arg3 ;
+(id)_filterActions:(id)arg1 withUnmatchedCharacteristicTypes:(id)arg2 ;
+(id)_filterActions:(id)arg1 withAccessoriesPassingTest:(/*^block*/id)arg2 ;
+(id)_serviceTypesExtrapolatingFromZones;
+(id)_serviceTypesExtrapolatingFromWholeHome;
+(id)_derivedActionForMediaProfiles:(id)arg1 withExistingValues:(id)arg2 ;
+(id)_derivedActionForCharacteristic:(id)arg1 withExistingValues:(id)arg2 ;
@end

