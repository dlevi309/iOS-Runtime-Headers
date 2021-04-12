/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAbstractRangeStatusItem.h>

@interface HFTemperatureStatusItem : HFAbstractRangeStatusItem
+(id)controllableServiceTypes;
+(id)sensorServiceTypes;
+(id)currentValueCharacteristicType;
+(id)targetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)maximumTargetValueCharacteristicType;
+(id)currentModeCharacteristicTypes;
+(id)targetModeCharacteristicTypes;
+(unsigned long long)abstractCurrentModeInResponse:(id)arg1 ;
+(unsigned long long)abstractTargetModeInResponse:(id)arg1 ;
+(id)customValueFormatter;
+(BOOL)isPercentRange;
+(/*^block*/id)displayValueComparator;
+(id)localizationKeyPrefix;
@end

