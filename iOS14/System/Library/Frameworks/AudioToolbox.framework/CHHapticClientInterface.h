/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@protocol CHHapticClientInterface
@required
-(void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2;
-(void)clientCompletedWithError:(id)arg1;
-(void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2;
-(void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2;

@end

