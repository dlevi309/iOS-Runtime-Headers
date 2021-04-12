/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCancelled:(BOOL)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)invalidate;
-(BOOL)isCancelled;
-(NSObject*<OS_dispatch_queue>)cancellationQ;
-(void)setCancellationQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

