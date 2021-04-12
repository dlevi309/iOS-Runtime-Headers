/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;
@interface CATOperationQueue : NSOperationQueue {

	id<CATOperationQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATOperationQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)currentQueue;
+(id)mainQueue;
+(id)backgroundQueue;
-(id)description;
-(void)addOperation:(id)arg1 ;
-(id<CATOperationQueueDelegate>)delegate;
-(void)setDelegate:(id<CATOperationQueueDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)setUnderlyingQueue:(id)arg1 ;
-(void)startObserving:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
-(void)delegateWillAddOperation:(id)arg1 ;
-(void)delegateOperationDidFinish:(id)arg1 ;
@end

