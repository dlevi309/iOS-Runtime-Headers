/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol OS_dispatch_queue;
@class NSObject, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningAgent : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TILanguageModelOfflineLearningTask* _currentLearningTask;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                          //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) TILanguageModelOfflineLearningTask * currentLearningTask;              //@synthesize currentLearningTask=_currentLearningTask - In the implementation block
+(void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2 ;
+(id)contactRecordsForRecipients:(id)arg1 ;
+(id)sharedLearningAgent;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)continueLearningTaskWithStrategy:(id)arg1 ;
-(void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2 ;
-(void)performTaskInBackground:(/*^block*/id)arg1 ;
-(void)handleRemovalOfLearnedModels;
-(TILanguageModelOfflineLearningTask *)currentLearningTask;
-(void)setCurrentLearningTask:(TILanguageModelOfflineLearningTask *)arg1 ;
@end

