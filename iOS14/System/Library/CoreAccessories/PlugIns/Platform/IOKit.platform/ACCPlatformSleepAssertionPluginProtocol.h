/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol ACCPlatformSleepAssertionPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(void)removeEASleepAssertion;
-(void)removeApplePencilSleepAssertion;
-(void)createApplePencilSleepAssertion;
-(void)destroySleepAssertionForUUID:(id)arg1;
-(void)createSleepAssertionForUUID:(id)arg1;
-(void)createEASleepAssertion;

@end

