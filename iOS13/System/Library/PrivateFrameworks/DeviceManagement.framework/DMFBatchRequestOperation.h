/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATRemoteTaskOperation, NSArray;

@interface DMFBatchRequestOperation : CATOperation {

	CATOperationQueue* _queue;
	CATRemoteTaskOperation* _activityTransactionOperation;
	NSArray* _subOperations;

}

@property (nonatomic,retain) CATOperationQueue * queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CATRemoteTaskOperation * activityTransactionOperation;              //@synthesize activityTransactionOperation=_activityTransactionOperation - In the implementation block
@property (nonatomic,copy) NSArray * subOperations;                                              //@synthesize subOperations=_subOperations - In the implementation block
-(void)setQueue:(CATOperationQueue *)arg1 ;
-(CATOperationQueue *)queue;
-(void)setName:(id)arg1 ;
-(void)main;
-(BOOL)isAsynchronous;
-(CATRemoteTaskOperation *)activityTransactionOperation;
-(NSArray *)subOperations;
-(void)activityTransactionOperationDidStart:(id)arg1 ;
-(void)activityTransactionOperationDidFinish:(id)arg1 ;
-(id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2 ;
-(void)setActivityTransactionOperation:(CATRemoteTaskOperation *)arg1 ;
-(void)setSubOperations:(NSArray *)arg1 ;
@end

