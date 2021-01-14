/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDProtectedDataReconciliationHookResponder.h>
#import <libobjc.A.dylib/EFContentProtectionObserver.h>
#import <libobjc.A.dylib/EDResumable.h>

@protocol EDClientStateReporting, OS_dispatch_queue, EFScheduler;
@class NSString, BKSProcessAssertion, EDPersistenceHookRegistry, NSObject;

@interface EDClientResumer : NSObject <EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EDResumable> {

	NSString* _bundleID;
	BKSProcessAssertion* _assertion;
	id<EDClientStateReporting> _clientState;
	EDPersistenceHookRegistry* _hookRegistry;
	NSObject*<OS_dispatch_queue> _queue;
	id<EFScheduler> _scheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)signpostLog;
-(unsigned long long)signpostID;
-(void)invalidate;
-(void)persistenceDidReconcileProtectedData;
-(void)dealloc;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(void)resumeForUpdates;
-(id)initWithClientBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 clientState:(id)arg3 ;
@end

