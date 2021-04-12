/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

