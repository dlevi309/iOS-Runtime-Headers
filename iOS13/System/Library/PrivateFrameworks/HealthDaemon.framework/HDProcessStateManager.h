/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSMutableDictionary, NSHashTable, BKSApplicationStateMonitor, NSObject, NSString;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {

	HDDaemon* _daemon;
	NSMutableDictionary* _processObserversByBundleID;
	NSHashTable* _foregroundClientProcessObservers;
	BKSApplicationStateMonitor* _applicationMonitor;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSMutableDictionary* _processInfoByBundleID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleVersionStringForProcessIdentifier:(int)arg1 ;
+(BOOL)applicationIsForeground:(id)arg1 ;
+(int)processIdentifierForApplicationIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)diagnosticDescription;
-(id)initWithDaemon:(id)arg1 ;
-(BOOL)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(unsigned)applicationStateForBundleIdentifier:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)registerForegroundClientProcessObserver:(id)arg1 ;
-(id)bundleVersionStringForProcessIdentifier:(int)arg1 ;
-(void)unregisterForegroundClientProcessObserver:(id)arg1 ;
-(BOOL)_lock_registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_lock_unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)applicationIsForeground:(id)arg1 ;
-(int)processIdentifierForApplicationIdentifier:(id)arg1 ;
-(void)_lock_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(void)_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(void)_lock_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1 ;
-(void)_lock_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned)arg3 previousApplicationState:(unsigned)arg4 ;
-(BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg1 ;
-(BOOL)isApplicationStateForegroundForBundleIdentifier:(id)arg1 ;
@end

