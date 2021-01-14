/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDAssertionManager, HDPowerAssertion, NSString;

@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	HDPowerAssertion* _powerAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2 ;
@end

