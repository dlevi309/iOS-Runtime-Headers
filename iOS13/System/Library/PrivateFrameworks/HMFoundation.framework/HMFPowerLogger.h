/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
+(id)sharedPowerLogger;
-(id)linkTypeDescription:(long long)arg1 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
@end

