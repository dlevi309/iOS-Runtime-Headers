/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class CATOperation, NSArray, CATOperationQueue;

@interface CRKSequentialOperation : CATOperation {

	CATOperation* _failedOperation;
	unsigned long long _frontOfQueue;
	NSArray* _operations;
	CATOperationQueue* _queue;

}

@property (assign,nonatomic) unsigned long long frontOfQueue;              //@synthesize frontOfQueue=_frontOfQueue - In the implementation block
@property (nonatomic,readonly) NSArray * operations;                       //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CATOperation * failedOperation;               //@synthesize failedOperation=_failedOperation - In the implementation block
+(id)sequentialOperationWithOperations:(id)arg1 ;
-(NSArray *)operations;
-(id)init;
-(BOOL)isAsynchronous;
-(void)main;
-(CATOperationQueue *)queue;
-(void)cancel;
-(id)initWithSequentialOperations:(id)arg1 queue:(id)arg2 ;
-(void)enqueueFront;
-(unsigned long long)frontOfQueue;
-(void)setFrontOfQueue:(unsigned long long)arg1 ;
-(void)frontOperationDidFinish:(id)arg1 ;
-(void)setFailedOperation:(CATOperation *)arg1 ;
-(CATOperation *)failedOperation;
@end

