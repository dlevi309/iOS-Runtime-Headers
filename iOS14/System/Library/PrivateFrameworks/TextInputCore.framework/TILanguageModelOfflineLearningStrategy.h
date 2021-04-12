/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class TILanguageModelOfflineLearningTask;


@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property (readonly) TILanguageModelOfflineLearningTask * learningTask; 
@required
-(TILanguageModelOfflineLearningTask *)learningTask;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
-(id)filterMessages:(id)arg1;
-(void)didFinishLearning;

@end

