/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class CLInUseAssertion, NSCountedSet, NSMutableSet, BKSApplicationStateMonitor;

@interface SFLocationManager : NSObject {

	CLInUseAssertion* _assertion;
	NSCountedSet* _clients;
	NSMutableSet* _foregroundApplications;
	BKSApplicationStateMonitor* _stateMonitor;

}
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(id)sharedLocationManager;
-(id)init;
-(void)_handleApplicationStateChange:(id)arg1 ;
-(void)_setApplication:(id)arg1 isForeground:(BOOL)arg2 ;
-(void)_updateAssertion;
-(void)_updateApplicationsToMonitor;
-(void)addClientForApplication:(id)arg1 ;
-(void)removeClientForApplication:(id)arg1 ;
@end

