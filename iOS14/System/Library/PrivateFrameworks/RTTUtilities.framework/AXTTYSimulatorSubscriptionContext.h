/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

@class NSUUID;

@interface AXTTYSimulatorSubscriptionContext : CTXPCServiceSubscriptionContext {

	NSUUID* _testUuid;

}

@property (nonatomic,retain) NSUUID * testUuid;              //@synthesize testUuid=_testUuid - In the implementation block
-(id)uuid;
-(id)init;
-(NSUUID *)testUuid;
-(void)setTestUuid:(NSUUID *)arg1 ;
@end

