/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSNumber;

@interface HFPowerStateTargetValueTuple : NSObject {

	NSString* _characteristicType;
	NSNumber* _onTargetValue;
	NSNumber* _offTargetValue;

}

@property (nonatomic,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) NSNumber * onTargetValue;                   //@synthesize onTargetValue=_onTargetValue - In the implementation block
@property (nonatomic,readonly) NSNumber * offTargetValue;                  //@synthesize offTargetValue=_offTargetValue - In the implementation block
+(id)fanStateTargetValueTuple;
-(id)init;
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 onTargetValue:(id)arg2 offTargetValue:(id)arg3 ;
-(NSNumber *)onTargetValue;
-(NSNumber *)offTargetValue;
-(id)targetValueForPrimaryState:(long long)arg1 ;
-(long long)primaryStateForTargetValue:(id)arg1 ;
@end

