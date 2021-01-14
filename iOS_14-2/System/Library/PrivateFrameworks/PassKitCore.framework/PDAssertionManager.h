/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unregisterObserver:(id)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2 ;
-(id)_processNameWithPID:(int)arg1 ;
-(BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2 ;
-(id)_coordinatorsBundleIdentifier;
-(void)_removeAllAssertionCoordinators;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2 ;
-(void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2 ;
-(void)_removeAssertionCoordinator:(id)arg1 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

