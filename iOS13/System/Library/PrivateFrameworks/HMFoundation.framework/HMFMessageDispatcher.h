/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFMessageTransportDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, HMFTimer, NSBackgroundActivityScheduler, NSDictionary, NSSet, HMFMessageTransport, NSString;

@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFMessageTransportDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableOrderedSet* _handlers;
	HMFTimer* _indexWatchdog;
	NSBackgroundActivityScheduler* _indexScheduler;
	NSDictionary* _destinationHandlerIndexes;
	NSDictionary* _nameHandlerIndexes;
	BOOL _indexed;
	BOOL _shouldAutomaticallyIndex;
	NSSet* _filterClasses;
	HMFMessageTransport* _transport;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (getter=isIndexed,readonly) BOOL indexed;                          //@synthesize indexed=_indexed - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyIndex;                  //@synthesize shouldAutomaticallyIndex=_shouldAutomaticallyIndex - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (copy) NSSet * filterClasses;                                      //@synthesize filterClasses=_filterClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)index;
-(void)sendMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageTransport *)transport;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isIndexed;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(id)handlersForMessage:(id)arg1 ;
-(void)dispatchMessage:(id)arg1 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(id)initWithTransport:(id)arg1 ;
-(NSSet *)filterClasses;
-(void)setFilterClasses:(NSSet *)arg1 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)deregisterReceiver:(id)arg1 ;
-(BOOL)shouldAutomaticallyIndex;
-(void)setShouldAutomaticallyIndex:(BOOL)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
@end

