/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPressSequenceRecognizerDelegate <NSObject>
@optional
-(void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
-(void)pressSequenceRecognizerDidFail:(id)arg1;

@required
-(void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;

@end

