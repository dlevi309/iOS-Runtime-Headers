/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol VSRecognitionSessionDelegate <NSObject>
@optional
-(void)recognitionSessionDidBeginAction:(id)arg1;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1;
-(id)recognitionSession:(id)arg1 openURL:(id)arg2;
-(void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
-(void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;

@end

