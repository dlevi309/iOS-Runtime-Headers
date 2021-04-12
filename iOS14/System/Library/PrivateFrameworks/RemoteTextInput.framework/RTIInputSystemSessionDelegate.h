/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/


@protocol RTIInputSystemSessionDelegate <NSObject>
@optional
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
-(void)inputSession:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;
-(void)inputSessionDidDie:(id)arg1;
-(void)inputSessionDidBegin:(id)arg1;
-(void)inputSessionDidEnd:(id)arg1;

@end

