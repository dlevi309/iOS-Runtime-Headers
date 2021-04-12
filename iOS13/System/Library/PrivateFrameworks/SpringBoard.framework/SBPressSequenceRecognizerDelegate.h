/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPressSequenceRecognizerDelegate <NSObject>
@optional
-(void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
-(void)pressSequenceRecognizerDidFail:(id)arg1;

@required
-(void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;

@end

