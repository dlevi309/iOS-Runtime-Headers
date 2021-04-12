/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATOperation, NSTimer;

@interface CRKTimeoutHarnessOperation : CATOperation {

	CATOperationQueue* _operationQueue;
	CATOperation* _operation;
	double _timeout;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,readonly) CATOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) CATOperation * operation;                        //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                            //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(CATOperationQueue *)operationQueue;
-(CATOperation *)operation;
-(BOOL)isAsynchronous;
-(double)timeout;
-(void)main;
-(NSTimer *)timeoutTimer;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(void)cancel;
-(void)dependentOperationDidFinish:(id)arg1 ;
-(void)timeoutDidFire:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 operation:(id)arg2 timout:(double)arg3 ;
@end

