/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEAppPushPluginDriver <NEPluginDriver>
@required
-(void)setProviderConfiguration:(id)arg1;
-(void)startConnectionWithProviderConfig:(id)arg1;
-(void)stopWithReason:(int)arg1;
-(void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2;
-(void)sendTimerEvent;

@end

