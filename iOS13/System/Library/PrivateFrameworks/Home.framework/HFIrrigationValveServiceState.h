/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFServiceState.h>

@interface HFIrrigationValveServiceState : HFServiceState {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
+(unsigned long long)_typeForSystemActiveState:(BOOL)arg1 usageState:(long long)arg2 ;
-(unsigned long long)type;
-(long long)priority;
-(BOOL)isTransitioning;
-(long long)primaryState;
-(id)initWithBatchReadResponse:(id)arg1 ;
-(id)stateTypeIdentifier;
@end

