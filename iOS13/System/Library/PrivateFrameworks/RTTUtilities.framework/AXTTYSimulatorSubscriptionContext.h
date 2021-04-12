/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

@class NSUUID;

@interface AXTTYSimulatorSubscriptionContext : CTXPCServiceSubscriptionContext {

	NSUUID* _testUuid;

}

@property (nonatomic,retain) NSUUID * testUuid;              //@synthesize testUuid=_testUuid - In the implementation block
-(id)init;
-(id)uuid;
-(void)setTestUuid:(NSUUID *)arg1 ;
-(NSUUID *)testUuid;
@end

