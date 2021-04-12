/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class RTRoutineManager;

@interface PUILocationSystemServicesListController : PUILocationServicesListController {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
+(int)systemServicesLocationUsage;
+(id)wirelessBundles;
+(id)locationBasedAlertBundles;
+(id)homeKitBundles;
+(id)routingAndTrafficBundles;
-(id)init;
-(void)dealloc;
-(id)specifiers;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(id)_locationBasedAlertBundles;
-(id)_homeKitBundles;
-(id)_routingAndTrafficBundles;
-(void)updateCoreRoutineSigLocationSpecifier;
-(void)_setCoalescedBundlesAuthorized:(id)arg1 bundles:(id)arg2 ;
-(void)_performLocationBasedAlertsConsistencyCheck;
-(void)_performHomeKitConsistencyCheck;
-(void)_performRoutingAndTrafficConsistencyCheck;
-(void)_performWirelessConsistencyCheck;
-(BOOL)hasUltraWideBand;
-(BOOL)_areCoalescedBundlesAuthorized:(id)arg1 ;
-(void)_performConsistencyCheckForBundles:(id)arg1 name:(id)arg2 ;
-(id)_productImprovementByBundlePath;
-(void)_setLocationBasedAlertsAuthorized:(id)arg1 ;
-(id)_areLocationBasedAlertsAuthorized;
-(void)_setHomeKitAuthorized:(id)arg1 ;
-(id)_isHomeKitAuthorized;
-(void)_setWirelessAuthorized:(id)arg1 ;
-(id)_isWirelessAuthorized;
-(void)_setRoutingAndTrafficAuthorized:(id)arg1 ;
-(id)_isRoutingAndTrafficAuthorized;
-(id)coreRoutineEnabledStatus:(id)arg1 ;
-(void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_readAddressCorrectionAuthorizationStatus:(id)arg1 ;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)_showAddressCorrectionPage;
@end

