/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)takeQuietModeAssertionForOwnerIdentifier:(id)arg1 ;
-(void)_observeDNDWorkoutDefault;
-(void)_queue_takeQuietModeAssertion;
-(void)_queue_releaseQuietModeAssertion;
-(void)_loadWorkoutDNDDefault;
-(void)unitTest_setDNDModeAssertionService:(id)arg1 ;
-(void)unitTest_setEnableDND:(BOOL)arg1 ;
@end

