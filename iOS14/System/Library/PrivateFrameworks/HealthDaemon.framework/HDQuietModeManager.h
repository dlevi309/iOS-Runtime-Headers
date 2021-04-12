/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDAssertionManager, HDDNDModeAssertionService, NSString;

@interface HDQuietModeManager : NSObject <HDAssertionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	BOOL _enableDNDDuringWorkout;
	HDDNDModeAssertionService* _dndModeAssertionService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)takeQuietModeAssertionForOwnerIdentifier:(id)arg1 ;
-(void)_observeDNDWorkoutDefault;
-(void)_queue_takeQuietModeAssertion;
-(void)_queue_releaseQuietModeAssertion;
-(void)_loadWorkoutDNDDefault;
-(void)unitTest_setDNDModeAssertionService:(id)arg1 ;
-(void)unitTest_setEnableDND:(BOOL)arg1 ;
@end

