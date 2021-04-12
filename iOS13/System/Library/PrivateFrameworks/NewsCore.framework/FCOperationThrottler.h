/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottler
@property (assign) BOOL suspended; 
@required
-(void)setSuspended:(BOOL)arg1;
-(BOOL)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
@end

