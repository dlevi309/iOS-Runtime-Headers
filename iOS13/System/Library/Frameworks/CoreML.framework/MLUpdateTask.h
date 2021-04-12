/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLTask.h>
#import <libobjc.A.dylib/MLTaskStateTransitionDelegate.h>

@protocol MLUpdatable, MLBatchProvider, OS_dispatch_queue;
@class MLModel, MLUpdateProgressHandlers, NSObject, NSURL, NSString;

@interface MLUpdateTask : MLTask <MLTaskStateTransitionDelegate> {

	BOOL _updateHasStarted;
	MLModel*<MLUpdatable> _updatableModel;
	id<MLBatchProvider> _trainingData;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSURL* _updatableModelURL;

}

@property (nonatomic,readonly) MLModel*<MLUpdatable> updatableModel;                     //@synthesize updatableModel=_updatableModel - In the implementation block
@property (nonatomic,readonly) id<MLBatchProvider> trainingData;                         //@synthesize trainingData=_trainingData - In the implementation block
@property (nonatomic,readonly) MLUpdateProgressHandlers * progressHandlers;              //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (assign,nonatomic) BOOL updateHasStarted;                                      //@synthesize updateHasStarted=_updateHasStarted - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> updateQueue;                 //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,readonly) NSURL * updatableModelURL;                                //@synthesize updatableModelURL=_updatableModelURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)updateModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 writeToURL:(id)arg4 error:(id*)arg5 ;
+(id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
+(id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id*)arg5 ;
-(NSString *)description;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)onResumptionWithTaskContext:(id)arg1 ;
-(void)onSuspensionWithTaskContext:(id)arg1 ;
-(void)onCancellation;
-(void)onCompletionWithTaskContext:(id)arg1 ;
-(void)onFailureWithTaskContext:(id)arg1 ;
-(id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id*)arg5 ;
-(void)resumeWithParameters:(id)arg1 ;
-(void)_invokeProgressHandlerForContext:(id)arg1 ;
-(/*^block*/id)_progressHandlerBlock;
-(/*^block*/id)_completionHandlerBlock;
-(MLModel*<MLUpdatable>)updatableModel;
-(id<MLBatchProvider>)trainingData;
-(BOOL)updateHasStarted;
-(void)setUpdateHasStarted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(NSURL *)updatableModelURL;
@end

