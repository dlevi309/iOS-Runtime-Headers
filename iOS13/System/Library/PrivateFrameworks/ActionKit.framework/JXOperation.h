/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface JXOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (assign) BOOL isExecuting;                                     //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                      //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)finish;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)willFinish;
-(void)startAndWaitUntilFinished;
@end

