/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class NSDictionary, NSMutableArray, NSArray, NSMutableDictionary, NSDate, ACAccountStore, ACAccount, NSOperationQueue, FMFSession, FMFDevice, NSNumber, NSString;

@interface PUILocationServicesListController : PSListController <FMFSessionDelegate> {

	NSDictionary* _locationEntitiesDetails;
	NSMutableArray* _coalescedLocationBasedAlertsSystemServices;
	NSMutableArray* _coalescedHomeKitSystemServices;
	NSMutableArray* _coalescedRoutingAndTrafficSystemServices;
	NSMutableArray* _coalescedWirelessSystemServices;
	NSArray* _ignoredLocationEntities;
	BOOL _deferredRefreshDueToConfirm;
	BOOL _locationNotificationsEnabled;
	NSMutableDictionary* _coalesceAppKeys;
	NSDate* _twentyFourHoursAgo;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	NSOperationQueue* _locationSharingOperationQueue;
	FMFSession* _locationSharingSession;
	FMFDevice* _locationSharingDevice;
	NSNumber* _locationSharingEnabled;
	NSNumber* _isLocationServicesEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isLocationRestricted;
+(BOOL)isCoreRoutineAuthorized;
+(void)setCoreRoutineAuthorized:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)accountStore;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)connectionError:(id)arg1 ;
-(void)didUpdateHidingStatus:(BOOL)arg1 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(id)primaryAccount;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)updateRecentlyUsedDate;
-(void)updateForApplicationDidBecomeActive:(id)arg1 ;
-(void)profileNotification:(id)arg1 ;
-(void)refreshLinkStatusInParent;
-(void)stopLocationStatusUpdates;
-(int)locationUsageForEntity:(id)arg1 ;
-(void)setUsage:(int)arg1 forCell:(id)arg2 ;
-(void)setAuthLevel:(unsigned long long)arg1 forCell:(id)arg2 ;
-(int)locationUsageBasedOnDetails:(id)arg1 ;
-(void)_cancelConfirmDisableForSpecifier:(id)arg1 ;
-(void)_setLocationServicesEnabled:(BOOL)arg1 ;
-(id)locationDetailSpecifiers;
-(void)updateLocationSharingSpecifiersWithReload:(BOOL)arg1 ;
-(void)updateFindMyFriendsStateBasedOnRestriction;
-(BOOL)_isFindMyDeviceSpecifier:(id)arg1 ;
-(void)disableAfterLoginConfirmation:(id)arg1 ;
-(void)_setEntityAuthorized:(BOOL)arg1 specifier:(id)arg2 ;
-(void)setEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(void)updateSpecifiersForImposedSettingsWithReload:(BOOL)arg1 ;
-(void)updateMutableStateBasedOnRestriction;
-(void)updateMutableStateForLocationSharing;
-(id)isLocationServicesEnabled:(id)arg1 ;
-(BOOL)_isBundleBlacklisted:(id)arg1 ;
-(id)hiddenBundleIdentifiers;
-(id)localizedDisplayNameForBundleID:(id)arg1 ;
-(id)researchAppStudySpecifiers;
-(void)startLocationStatusUpdates;
-(id)appSpecifierForBundle:(id)arg1 authorized:(BOOL)arg2 ;
-(void)navigateToResearchAuthorizationTab;
-(BOOL)_shouldEnableLocationSharingSpecifier;
-(void)_locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)isLocationSharingEnabled;
-(id)locationSharingDevice;
-(id)locationSharingSpecifiers;
-(BOOL)isLocationSharingModificationAllowed;
-(void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_pushCoreRoutineViewController;
-(void)_handleAuthenticationForSpecifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)locationSharingOperationQueue;
-(id)locationSharingSession;
-(unsigned long long)locationSharingTimeout;
-(void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)mainThreadConnectionError:(id)arg1 ;
-(void)mainThreadDidUpdateHidingStatus:(BOOL)arg1 ;
-(void)updateLocationUsage;
-(id)isEntityAuthorized:(id)arg1 ;
-(void)setSOSEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(void)showLocationPrivacyPage;
-(void)showSensorKitPrivacyPage;
@end

