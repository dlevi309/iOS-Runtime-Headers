/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>

@protocol SRRelatedSettingsProvider;
@class NSDictionary, NSMutableArray, NSArray, NSMutableDictionary, NSDate, ACAccountStore, ACAccount, NSNumber, NSOperationQueue, FMFSession, FMFDevice, NSString;

@interface PUILocationServicesListController : PSListController <FMFSessionDelegate> {

	NSDictionary* _locationEntitiesDetails;
	NSMutableArray* _coalescedLocationBasedAlertsSystemServices;
	NSMutableArray* _coalescedHomeKitSystemServices;
	NSMutableArray* _coalescedRoutingAndTrafficSystemServices;
	NSMutableArray* _coalescedWirelessSystemServices;
	NSMutableArray* _coalescedSystemCutomizationSystemServices;
	NSArray* _ignoredLocationEntities;
	BOOL _deferredRefreshDueToConfirm;
	BOOL _locationNotificationsEnabled;
	NSMutableDictionary* _coalesceAppKeys;
	NSDate* _twentyFourHoursAgo;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	NSNumber* _isLocationServicesEnabled;
	id<SRRelatedSettingsProvider> _sensorKitSpecifiersProvider;
	NSOperationQueue* _locationSharingOperationQueue;
	FMFSession* _locationSharingSession;
	FMFDevice* _locationSharingDevice;
	NSNumber* _locationSharingEnabled;

}

@property (nonatomic,retain) NSOperationQueue * locationSharingOperationQueue;              //@synthesize locationSharingOperationQueue=_locationSharingOperationQueue - In the implementation block
@property (nonatomic,retain) FMFSession * locationSharingSession;                           //@synthesize locationSharingSession=_locationSharingSession - In the implementation block
@property (nonatomic,retain) FMFDevice * locationSharingDevice;                             //@synthesize locationSharingDevice=_locationSharingDevice - In the implementation block
@property (nonatomic,retain) NSNumber * locationSharingEnabled;                             //@synthesize locationSharingEnabled=_locationSharingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isLocationRestricted;
+(BOOL)isCoreRoutineAuthorized;
+(void)setCoreRoutineAuthorized:(BOOL)arg1 ;
-(void)willBecomeActive;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)accountStore;
-(void)profileNotification:(id)arg1 ;
-(void)connectionError:(id)arg1 ;
-(void)didUpdateHidingStatus:(BOOL)arg1 ;
-(id)primaryAccount;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)valueForSpecifier:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(int)locationUsageForEntity:(id)arg1 ;
-(void)setEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(id)isEntityAuthorized:(id)arg1 ;
-(id)locationDetailSpecifiersWithDetailsMatching:(/*^block*/id)arg1 ;
-(void)updateSpecifiersForImposedSettingsWithReload:(BOOL)arg1 ;
-(void)updateRecentlyUsedDate;
-(void)updateForApplicationDidBecomeActive:(id)arg1 ;
-(void)refreshLinkStatusInParent;
-(void)stopLocationStatusUpdates;
-(void)setUsage:(int)arg1 forCell:(id)arg2 ;
-(void)setAuthLevel:(unsigned long long)arg1 forCell:(id)arg2 ;
-(int)locationUsageBasedOnDetails:(id)arg1 ;
-(void)_cancelConfirmDisableForSpecifier:(id)arg1 ;
-(void)_setLocationServicesEnabled:(BOOL)arg1 ;
-(id)locationDetailSpecifiersForAppsAndBundles;
-(void)updateLocationSharingSpecifiersWithReload:(BOOL)arg1 ;
-(void)updateFindMyFriendsStateBasedOnRestriction;
-(BOOL)_isFindMyDeviceSpecifier:(id)arg1 ;
-(void)disableAfterLoginConfirmation:(id)arg1 ;
-(void)_setEntityAuthorized:(BOOL)arg1 specifier:(id)arg2 ;
-(void)updateMutableStateBasedOnRestriction;
-(void)updateMutableStateForLocationSharing;
-(id)isLocationServicesEnabled:(id)arg1 ;
-(id)loadSensorKitSpecifiersProvider;
-(BOOL)_isBundleBlacklisted:(id)arg1 ;
-(id)hiddenBundleIdentifiers;
-(id)localizedDisplayNameForBundleID:(id)arg1 ;
-(void)startLocationStatusUpdates;
-(BOOL)_shouldEnableLocationSharingSpecifier;
-(void)_locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)isLocationSharingEnabled;
-(FMFDevice *)locationSharingDevice;
-(id)locationSharingSpecifiers;
-(BOOL)isLocationSharingModificationAllowed;
-(void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)updateLocationSharing;
-(void)_pushCoreRoutineViewController;
-(void)_handleAuthenticationForSpecifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(NSOperationQueue *)locationSharingOperationQueue;
-(FMFSession *)locationSharingSession;
-(void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)mainThreadConnectionError:(id)arg1 ;
-(void)mainThreadDidUpdateHidingStatus:(BOOL)arg1 ;
-(void)updateLocationUsage;
-(void)setSOSEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(void)showLocationPrivacyPage;
-(void)setLocationSharingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setLocationSharingSession:(FMFSession *)arg1 ;
-(void)setLocationSharingDevice:(FMFDevice *)arg1 ;
-(NSNumber *)locationSharingEnabled;
-(void)setLocationSharingEnabled:(NSNumber *)arg1 ;
@end
