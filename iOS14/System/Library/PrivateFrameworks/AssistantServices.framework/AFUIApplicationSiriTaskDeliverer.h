/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSString, BKSApplicationStateMonitor, BKSProcessAssertion, AFWatchdogTimer, NSObject, AFSiriTaskmaster;

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {

	NSString* _appBundleIdentifier;
	BKSApplicationStateMonitor* _appStateMonitor;
	BKSProcessAssertion* _bKSAssertionForBgLaunch;
	AFWatchdogTimer* _assertionTimer;
	NSObject*<OS_dispatch_group> _bKSAssertionSetupGroup;
	NSObject*<OS_dispatch_queue> _queue;
	AFSiriTaskmaster* _taskmaster;

}

@property (assign,nonatomic,__weak) AFSiriTaskmaster * taskmaster;              //@synthesize taskmaster=_taskmaster - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)siriTaskDidFinish;
-(AFSiriTaskmaster *)taskmaster;
-(void)_invalidateAssertionTimer;
-(void)_invalidateBackboardServices;
-(void)_processAssertionWasInvalidatedForRequest:(id)arg1 ;
-(void)_startAppStateMonitoringForRequest:(id)arg1 ;
-(void)_processAssertionWasAcquired:(BOOL)arg1 ;
-(void)_handleSuccessfulAppLaunchToBackground:(BOOL)arg1 forRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processAssertionWasInvalidatedForRequest:(id)arg1 ;
-(id)initWithAppBundleIdentifier:(id)arg1 ;
-(void)setTaskmaster:(AFSiriTaskmaster *)arg1 ;
-(void)dealloc;
@end

