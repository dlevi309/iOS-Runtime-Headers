/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PDAssertionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSXPCListener, NSMutableDictionary, NSObject, BKSApplicationStateMonitor, NSString;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate> {

	NSHashTable* _observers;
	NSXPCListener* _coordinatorListener;
	NSMutableDictionary* _coordinators;
	NSObject*<OS_dispatch_queue> _managerSerialQueue;
	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeAllAssertionCoordinators;
-(void)_removeAssertionCoordinator:(id)arg1 ;
-(id)_processNameWithPID:(int)arg1 ;
-(void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2 ;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(id)_coordinatorsBundleIdentifier;
-(BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2 ;
-(void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2 ;
-(void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2 ;
@end

