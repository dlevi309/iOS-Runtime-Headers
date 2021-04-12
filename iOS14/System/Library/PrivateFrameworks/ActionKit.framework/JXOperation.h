/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finish;
-(id)init;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)cancel;
-(BOOL)isConcurrent;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)dealloc;
-(void)willFinish;
-(void)startAndWaitUntilFinished;
@end

