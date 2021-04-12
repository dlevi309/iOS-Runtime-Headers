/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TITypingSessionMonitoringProtocol <TIKeyboardInteractionProtocol>
@property (assign,nonatomic,__weak) id<TITypingSessionDelegate> delegate; 
@required
-(id<TITypingSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)keyboardDidSuspend;

@end

