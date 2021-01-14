/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <Fitness/Fitness-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol FIFitnessAppsStateObserverDelegate;
@class NSString;

@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {

	id<FIFitnessAppsStateObserverDelegate> _delegate;
	long long _fitnessAppsState;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationStateDidChange:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)areFitnessAppsRestricted;
-(void)_cacheInitialFitnessAppsRestrictedState;
-(id)_fitnessAppBundleIdentifiers;
-(void)_cacheCurrentFitnessAppsRestrictedStateWithProxies:(id)arg1 initialLoad:(BOOL)arg2 ;
@end

