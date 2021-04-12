/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;
@interface CATOperationQueue : NSOperationQueue {

	id<CATOperationQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATOperationQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)mainQueue;
+(id)currentQueue;
+(id)backgroundQueue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUnderlyingQueue:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
-(void)delegateOperationDidFinish:(id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)addOperation:(id)arg1 ;
-(id<CATOperationQueueDelegate>)delegate;
-(void)startObserving:(id)arg1 ;
-(void)setDelegate:(id<CATOperationQueueDelegate>)arg1 ;
-(id)description;
-(void)delegateWillAddOperation:(id)arg1 ;
@end

