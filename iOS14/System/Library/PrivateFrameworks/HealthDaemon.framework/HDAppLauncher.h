/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDProcessStateManager, FBSOpenApplicationService, NSObject, HDAssertionManager, NSMutableDictionary, NSMutableSet, NSString;

@interface HDAppLauncher : NSObject <HDProcessStateObserver, HDAssertionObserver> {

	HDProcessStateManager* _processStateManager;
	FBSOpenApplicationService* _openApplicationService;
	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	NSMutableDictionary* _registeredAssertionsByIdentifier;
	NSMutableSet* _monitoredProcessBundleIdentifiers;
	NSMutableSet* _launchingProcessBundleIdentifiers;
	double _launchCountResetThreshold;
	double _baseLaunchDelay;
	long long _maxLaunchCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_launchCountResetThresholdForDelay:(double)arg1 maxLaunchCount:(long long)arg2 base:(double)arg3 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)processTerminated:(id)arg1 ;
-(id)takeKeepAliveAssertionForApplicationBundleIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 payloadOptions:(id)arg3 ;
-(id)initWithProcessStateManager:(id)arg1 openApplicationService:(id)arg2 ;
-(id)_queue_assertionsForClientBundleIdentifier:(id)arg1 ;
-(void)_queue_launchClientIfNeeded:(id)arg1 ;
-(BOOL)_queue_clientRequiresLaunch:(id)arg1 assertions:(id)arg2 ;
-(void)_queue_scheduleLaunchForClient:(id)arg1 ;
-(void)unitTest_setBaseLaunchDelay:(double)arg1 launchCountResetThreshold:(double)arg2 maxLaunchCount:(long long)arg3 ;
-(BOOL)unitTest_hasAssertionForBundleIdentifier:(id)arg1 ;
@end

