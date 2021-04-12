/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFPowerStateControlItem.h>

@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem {

	unsigned long long _valveControlMode;

}

@property (nonatomic,readonly) unsigned long long valveControlMode;              //@synthesize valveControlMode=_valveControlMode - In the implementation block
+(id)na_identity;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 valveControlMode:(unsigned long long)arg2 displayResults:(id)arg3 ;
-(id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(unsigned long long)valveControlMode;
@end

