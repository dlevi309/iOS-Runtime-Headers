/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFMessageTransportDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, HMFTimer, NSBackgroundActivityScheduler, NSDictionary, NSSet, HMFMessageTransport, NSObject, NSString;

@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFMessageTransportDelegate> {

	hmf_unfair_data_lock_s _lock;
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
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)index;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isIndexed;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)sendMessage:(id)arg1 ;
-(HMFMessageTransport *)transport;
-(id)init;
-(id)initWithTransport:(id)arg1 ;
-(void)dispatchMessage:(id)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(NSSet *)filterClasses;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setShouldAutomaticallyIndex:(BOOL)arg1 ;
-(id)handlersForMessage:(id)arg1 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(void)setFilterClasses:(NSSet *)arg1 ;
-(BOOL)shouldAutomaticallyIndex;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)dealloc;
@end

