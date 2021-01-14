/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATOperation;

@interface CRKWaitForProgressOperation : CATOperation {

	CATOperationQueue* _operationQueue;
	CATOperation* _operation;
	long long _expectedTotalUnitCount;
	long long _expctedCompletedUnitCount;

}

@property (nonatomic,readonly) CATOperationQueue * operationQueue;               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) CATOperation * operation;                         //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) long long expectedTotalUnitCount;                 //@synthesize expectedTotalUnitCount=_expectedTotalUnitCount - In the implementation block
@property (nonatomic,readonly) long long expctedCompletedUnitCount;              //@synthesize expctedCompletedUnitCount=_expctedCompletedUnitCount - In the implementation block
-(CATOperationQueue *)operationQueue;
-(CATOperation *)operation;
-(BOOL)isAsynchronous;
-(void)main;
-(void)cancel;
-(id)initWithOperationQueue:(id)arg1 operation:(id)arg2 expectedCompletedUnitCount:(long long)arg3 expectedTotalUnitCount:(long long)arg4 ;
-(void)observedOperationDidProgress:(id)arg1 ;
-(void)observedOperationDidFail:(id)arg1 ;
-(long long)expectedTotalUnitCount;
-(long long)expctedCompletedUnitCount;
@end

