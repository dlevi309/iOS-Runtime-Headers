/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TROperationQueue : NSOperationQueue {

	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _cancellationQ;

}

@property (getter=isCancelled) BOOL cancelled;                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQ;              //@synthesize cancellationQ=_cancellationQ - In the implementation block
-(id)init;
-(void)invalidate;
-(void)addOperation:(id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCancelled;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)setCancelled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)cancellationQ;
-(void)setCancellationQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

