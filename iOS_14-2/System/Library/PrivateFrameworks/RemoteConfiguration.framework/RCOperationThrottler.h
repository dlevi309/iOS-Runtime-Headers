/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottler
@property (assign) BOOL suspended; 
@required
-(void)tickleWithCompletion:(/*^block*/id)arg1;
-(void)tickle;
-(void)setSuspended:(BOOL)arg1;
-(BOOL)suspended;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface RCOperationThrottler : NSObject <RCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

