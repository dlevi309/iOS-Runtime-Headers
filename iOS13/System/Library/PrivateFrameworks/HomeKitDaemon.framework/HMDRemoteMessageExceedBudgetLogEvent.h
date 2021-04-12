/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDRemoteMessageExceedBudgetLogEvent : HMDLogEvent {

	HMFRate _budgetRate;

}

@property (nonatomic,readonly) HMFRate budgetRate;              //@synthesize budgetRate=_budgetRate - In the implementation block
+(id)identifier;
+(id)eventWithBudgetRate:(HMFRate)arg1 ;
-(id)initWithBudgetRate:(HMFRate)arg1 ;
-(HMFRate)budgetRate;
@end

