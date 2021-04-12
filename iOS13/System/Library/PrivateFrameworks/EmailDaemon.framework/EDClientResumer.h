/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDProtectedDataReconciliationHookResponder.h>
#import <libobjc.A.dylib/EFContentProtectionObserver.h>
#import <libobjc.A.dylib/EDResumable.h>

@protocol EDForegroundReporting, OS_dispatch_queue, EFScheduler;
@class NSString, BKSProcessAssertion, EDPersistenceHookRegistry, NSObject;

@interface EDClientResumer : NSObject <EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EDResumable> {

	NSString* _bundleID;
	BKSProcessAssertion* _assertion;
	id<EDForegroundReporting> _foregroundReporter;
	EDPersistenceHookRegistry* _hookRegistry;
	NSObject*<OS_dispatch_queue> _queue;
	id<EFScheduler> _scheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)dealloc;
-(void)invalidate;
-(void)persistenceDidReconcileProtectedData;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(void)resumeForUpdates;
-(id)initWithClientBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 foregroundReporter:(id)arg3 ;
@end

