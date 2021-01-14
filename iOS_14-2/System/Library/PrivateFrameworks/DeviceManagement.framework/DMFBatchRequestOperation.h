/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAsynchronous;
-(CATRemoteTaskOperation *)activityTransactionOperation;
-(NSArray *)subOperations;
-(void)activityTransactionOperationDidStart:(id)arg1 ;
-(void)activityTransactionOperationDidFinish:(id)arg1 ;
-(id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2 ;
-(void)setActivityTransactionOperation:(CATRemoteTaskOperation *)arg1 ;
-(void)setSubOperations:(NSArray *)arg1 ;
-(void)main;
-(CATOperationQueue *)queue;
-(void)setName:(id)arg1 ;
-(void)setQueue:(CATOperationQueue *)arg1 ;
@end

