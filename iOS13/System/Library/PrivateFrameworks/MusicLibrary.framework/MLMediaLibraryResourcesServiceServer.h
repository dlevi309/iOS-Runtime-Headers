/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>
#import <libobjc.A.dylib/MLMediaLibraryResourcesServiceXPCProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSXPCListener, NSMutableSet, NSString;

@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_semaphore> _accountChangeSemaphore;
	NSXPCListener* _xpcServiceListener;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;                            //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> accountChangeSemaphore;              //@synthesize accountChangeSemaphore=_accountChangeSemaphore - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcServiceListener;                                   //@synthesize xpcServiceListener=_xpcServiceListener - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                                             //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)libraryContainerPathWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAccountChangeObserver:(id)arg1 ;
-(void)_blockExecutionForOnGoingAccountChangeIfNeeded;
-(void)_unblockExecutionForFutureAccountChange;
-(NSObject*<OS_dispatch_semaphore>)accountChangeSemaphore;
-(void)setAccountChangeSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSXPCListener *)xpcServiceListener;
-(void)setXpcServiceListener:(NSXPCListener *)arg1 ;
@end

