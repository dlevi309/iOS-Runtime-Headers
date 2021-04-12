/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFServiceState.h>

@interface HFFaucetValveServiceState : HFServiceState {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
+(id)optionalCharacteristicTypes;
+(unsigned long long)_typeForSystemActiveState:(BOOL)arg1 heaterCoolerActiveState:(id)arg2 usageState:(long long)arg3 currentHeaterCoolerState:(id)arg4 ;
-(unsigned long long)type;
-(long long)priority;
-(BOOL)isTransitioning;
-(long long)primaryState;
-(id)initWithBatchReadResponse:(id)arg1 ;
-(id)stateTypeIdentifier;
@end

