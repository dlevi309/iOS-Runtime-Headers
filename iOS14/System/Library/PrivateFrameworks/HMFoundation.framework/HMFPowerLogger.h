/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
+(id)sharedPowerLogger;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 accessoryCategory:(id)arg3 ;
-(id)linkTypeDescription:(long long)arg1 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 accessoryCategory:(id)arg2 ;
-(void)reportIncomingIPEvent:(id)arg1 accessoryCategory:(id)arg2 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
@end

