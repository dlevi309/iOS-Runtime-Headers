/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, HDApplicationStateMonitorProvider;
@class NSMutableDictionary, NSHashTable, BKSApplicationStateMonitor, NSObject, NSString;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {

	NSMutableDictionary* _processObserversByBundleID;
	NSHashTable* _foregroundClientProcessObservers;
	BKSApplicationStateMonitor* _applicationMonitor;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSMutableDictionary* _processInfoByBundleID;
	id<HDApplicationStateMonitorProvider> _applicationStateMonitorProvider;

}

@property (nonatomic,__weak,readonly) id<HDApplicationStateMonitorProvider> applicationStateMonitorProvider;              //@synthesize applicationStateMonitorProvider=_applicationStateMonitorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)applicationStateForBundleIdentifier:(id)arg1 ;
-(id)initWithApplicationStateMonitorProvider:(id)arg1 ;
-(id)init;
-(BOOL)_lock_registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_lock_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned)arg3 previousApplicationState:(unsigned)arg4 ;
-(int)processIdentifierForApplicationIdentifier:(id)arg1 ;
-(BOOL)applicationIsForeground:(id)arg1 ;
-(BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)arg1 ;
-(id<HDApplicationStateMonitorProvider>)applicationStateMonitorProvider;
-(void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)diagnosticDescription;
-(void)_lock_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(BOOL)isApplicationStateForegroundForBundleIdentifier:(id)arg1 ;
-(BOOL)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_lock_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1 ;
-(void)_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg1 ;
-(void)unregisterForegroundClientProcessObserver:(id)arg1 ;
-(void)registerForegroundClientProcessObserver:(id)arg1 ;
-(void)dealloc;
-(void)_lock_unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

