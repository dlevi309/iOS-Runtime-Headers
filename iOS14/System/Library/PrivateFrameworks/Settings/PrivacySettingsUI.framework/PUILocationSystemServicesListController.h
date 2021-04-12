/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class RTRoutineManager, PSSpecifier, NSString;

@interface PUILocationSystemServicesListController : PUILocationServicesListController {

	RTRoutineManager* _routineManager;
	PSSpecifier* _productImprovementGroup;
	NSString* _currentCoreRoutineStatus;
	NSString* _coreRoutineAppKey;
	NSString* _specifierIDBeforeCoreRoutine;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;                    //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * productImprovementGroup;                //@synthesize productImprovementGroup=_productImprovementGroup - In the implementation block
@property (nonatomic,retain) NSString * currentCoreRoutineStatus;                  //@synthesize currentCoreRoutineStatus=_currentCoreRoutineStatus - In the implementation block
@property (nonatomic,retain) NSString * coreRoutineAppKey;                         //@synthesize coreRoutineAppKey=_coreRoutineAppKey - In the implementation block
@property (nonatomic,retain) NSString * specifierIDBeforeCoreRoutine;              //@synthesize specifierIDBeforeCoreRoutine=_specifierIDBeforeCoreRoutine - In the implementation block
+(int)systemServicesLocationUsage;
+(id)wirelessBundles;
+(id)locationBasedAlertBundles;
+(id)homeKitBundles;
+(id)routingAndTrafficBundles;
+(id)systemCustomizationBundles;
-(id)specifiers;
-(id)init;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)dealloc;
-(id)_locationBasedAlertBundles;
-(id)_homeKitBundles;
-(id)_routingAndTrafficBundles;
-(void)updateCoreRoutineSigLocationSpecifier;
-(void)updateCoreRoutineEnabledStatusAndInsertSpecifier:(BOOL)arg1 ;
-(void)setCurrentCoreRoutineStatus:(NSString *)arg1 ;
-(void)insertCoreRoutineSpecifier;
-(NSString *)coreRoutineAppKey;
-(NSString *)specifierIDBeforeCoreRoutine;
-(id)coreRoutineEnabledStatus:(id)arg1 ;
-(void)_setCoalescedBundlesAuthorized:(id)arg1 bundles:(id)arg2 ;
-(void)_performLocationBasedAlertsConsistencyCheck;
-(void)_performHomeKitConsistencyCheck;
-(void)_performRoutingAndTrafficConsistencyCheck;
-(void)_performSystemCustomizationConsistencyCheck;
-(void)_performWirelessConsistencyCheck;
-(BOOL)hasUltraWideBand;
-(BOOL)_areCoalescedBundlesAuthorized:(id)arg1 ;
-(void)_performConsistencyCheckForBundles:(id)arg1 name:(id)arg2 ;
-(PSSpecifier *)productImprovementGroup;
-(void)setCoreRoutineAppKey:(NSString *)arg1 ;
-(void)setSpecifierIDBeforeCoreRoutine:(NSString *)arg1 ;
-(id)_productImprovementByBundlePath;
-(void)_setLocationBasedAlertsAuthorized:(id)arg1 ;
-(id)_areLocationBasedAlertsAuthorized;
-(void)_setHomeKitAuthorized:(id)arg1 ;
-(id)_isHomeKitAuthorized;
-(void)_setWirelessAuthorized:(id)arg1 ;
-(id)_isWirelessAuthorized;
-(void)_setRoutingAndTrafficAuthorized:(id)arg1 ;
-(id)_isRoutingAndTrafficAuthorized;
-(void)_setSystemCutomizationAuthorized:(id)arg1 ;
-(id)_isSystemCustomizationAuthorized;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)updateImproveMapsSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_readAddressCorrectionAuthorizationStatus:(id)arg1 ;
-(void)_showAddressCorrectionPage;
-(void)setProductImprovementGroup:(PSSpecifier *)arg1 ;
-(NSString *)currentCoreRoutineStatus;
@end

