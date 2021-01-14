/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMITaskService.h>

@class NSOperationQueue, HMFUnfairLock;

@interface HMITaskServiceServer : HMITaskService {

	int _nextTaskID;
	NSOperationQueue* _operationQueue;
	HMFUnfairLock* _lock;

}

@property (readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign) int nextTaskID;                                   //@synthesize nextTaskID=_nextTaskID - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                 //@synthesize lock=_lock - In the implementation block
+(id)logCategory;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(int)nextTaskID;
-(HMFUnfairLock *)lock;
-(int)submitTaskWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)cancelTask:(int)arg1 ;
-(void)setNextTaskID:(int)arg1 ;
-(id)buildUpdatePersonsModelTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(id)buildRemovePersonsModelTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(id)buildHomePersonClusteringTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(id)buildTuriTrialUpdateTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(int)getNextTaskID;
-(id)buildFaceMisclassificationTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(id)buildPersonsModelsSummaryTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(id)buildSubmitFeedbackTaskFromOptions:(id)arg1 error:(id*)arg2 ;
-(int)submitTask:(id)arg1 completionHander:(/*^block*/id)arg2 ;
@end

