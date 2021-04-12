/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/


@protocol RTIInputSystemSessionDelegate <NSObject>
@optional
-(void)inputSessionDidBegin:(id)arg1;
-(void)inputSessionDidEnd:(id)arg1;
-(void)inputSessionDidDie:(id)arg1;
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
-(void)inputSession:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;

@end

