/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4 ;
-(id)writeValue:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(BOOL)arg2 active:(BOOL)arg3 hasFaucetAsParentService:(BOOL)arg4 ;
-(id)_faucetValveSubtypeToIconIdentifierMap;
@end

