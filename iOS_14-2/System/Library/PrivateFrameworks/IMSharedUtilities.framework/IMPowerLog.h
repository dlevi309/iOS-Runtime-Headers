/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMPowerLog : NSObject
+(id)sharedInstance;
-(void)logMessageSentWithGUID:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 conversationType:(unsigned long long)arg4 messageType:(unsigned long long)arg5 sendDuration:(id)arg6 errorCode:(id)arg7 ;
-(void)logMessageSendFailureWithError:(id)arg1 ;
-(void)logMessageReceivedWithGUID:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 conversationType:(unsigned long long)arg4 messageType:(unsigned long long)arg5 ;
@end

