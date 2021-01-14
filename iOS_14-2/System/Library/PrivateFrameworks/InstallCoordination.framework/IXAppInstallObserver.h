/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/IXAppInstallObserverProtocol.h>

@protocol IXAppInstallObserverDelegate, OS_dispatch_queue;
@class NSXPCListener, NSObject, NSString;

@interface IXAppInstallObserver : NSObject <NSXPCListenerDelegate, IXAppInstallObserverProtocol> {

	id<IXAppInstallObserverDelegate> _delegate;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<IXAppInstallObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IXAppInstallObserverDelegate>)delegate;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1 ;
-(id)_oncePerBootUniqueIdentifierForServiceName:(id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1 ;
-(id)initTransientForClients:(id)arg1 delegate:(id)arg2 ;
-(NSXPCListener *)listener;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setListener:(NSXPCListener *)arg1 ;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)_internalInit;
-(oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 forClients:(id)arg2 delegate:(id)arg3 ;
-(oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1 ;
-(void)dealloc;
@end

