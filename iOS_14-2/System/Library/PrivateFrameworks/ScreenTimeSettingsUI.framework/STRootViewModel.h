/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSSet, NSDictionary, STUIUser, NSArray;

@interface STRootViewModel : NSObject {

	BOOL _canStopScreenTimeWithoutPasscode;
	BOOL _isCloudSyncEnabled;
	NSSet* _installedBundleIDs;
	NSDictionary* _installedBundleIDsByCategoryIdentifier;
	STUIUser* _me;
	NSArray* _children;
	NSArray* _devices;

}

@property (assign,nonatomic) BOOL canStopScreenTimeWithoutPasscode;                            //@synthesize canStopScreenTimeWithoutPasscode=_canStopScreenTimeWithoutPasscode - In the implementation block
@property (nonatomic,copy) NSArray * devices;                                                  //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) BOOL isCloudSyncEnabled;                                          //@synthesize isCloudSyncEnabled=_isCloudSyncEnabled - In the implementation block
@property (getter=isScreenTimeEnabled,nonatomic,readonly) BOOL screenTimeEnabled; 
@property (nonatomic,readonly) BOOL canStartScreenTime; 
@property (nonatomic,readonly) BOOL canStopScreenTime; 
@property (nonatomic,readonly) BOOL canStopSharingScreenTime; 
@property (nonatomic,readonly) BOOL isSharingUsageData; 
@property (getter=isWebUsageEnabled,nonatomic,readonly) BOOL webUsageEnabled; 
@property (nonatomic,readonly) BOOL isRemotelyManagedUserWithPasscode; 
@property (nonatomic,readonly) BOOL canSignIn; 
@property (nonatomic,readonly) BOOL canToggleCloudSyncData; 
@property (nonatomic,readonly) BOOL canSetUpFamily; 
@property (nonatomic,readonly) BOOL canViewAskForTimeRequests; 
@property (nonatomic,readonly) BOOL forceParentalControls; 
@property (nonatomic,readonly) BOOL canToggleWebsiteData; 
@property (nonatomic,readonly) BOOL shouldShowCompatibilityAlerts; 
@property (readonly) BOOL hasWatchOSDevices; 
@property (readonly) BOOL hasWatchOSDevicesOnly; 
@property (nonatomic,copy) NSSet * installedBundleIDs;                                         //@synthesize installedBundleIDs=_installedBundleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * installedBundleIDsByCategoryIdentifier;              //@synthesize installedBundleIDsByCategoryIdentifier=_installedBundleIDsByCategoryIdentifier - In the implementation block
@property (nonatomic,copy) STUIUser * me;                                                      //@synthesize me=_me - In the implementation block
@property (nonatomic,copy) NSArray * children;                                                 //@synthesize children=_children - In the implementation block
+(id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+(id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+(id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+(id)keyPathsForValuesAffectingCanViewAskForTimeRequests;
+(id)keyPathsForValuesAffectingCanSignIn;
+(id)keyPathsForValuesAffectingCanToggleWebsiteData;
+(id)keyPathsForValuesAffectingForceParentalControls;
+(id)keyPathsForValuesAffectingWebUsageEnabled;
+(id)keyPathsForValuesAffectingHasWatchOSDevicesOnly;
+(id)keyPathsForValuesAffectingScreenTimeEnabled;
+(id)keyPathsForValuesAffectingCanStopScreenTime;
+(id)keyPathsForValuesAffectingCanStartScreenTime;
+(id)keyPathsForValuesAffectingCanSetUpFamily;
+(id)keyPathsForValuesAffectingIsSharingUsageData;
+(id)keyPathsForValuesAffectingHasWatchOSDevices;
-(STUIUser *)me;
-(BOOL)isScreenTimeEnabled;
-(NSArray *)children;
-(BOOL)isWebUsageEnabled;
-(void)setInstalledBundleIDsByCategoryIdentifier:(NSDictionary *)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isCloudSyncEnabled;
-(id)init;
-(BOOL)canSignIn;
-(void)setMe:(STUIUser *)arg1 ;
-(BOOL)canSetUpFamily;
-(BOOL)hasWatchOSDevices;
-(BOOL)isSharingUsageData;
-(BOOL)hasWatchOSDevicesOnly;
-(BOOL)canViewAskForTimeRequests;
-(void)setInstalledBundleIDs:(NSSet *)arg1 ;
-(BOOL)canStopScreenTimeWithoutPasscode;
-(NSDictionary *)installedBundleIDsByCategoryIdentifier;
-(BOOL)shouldShowCompatibilityAlerts;
-(NSSet *)installedBundleIDs;
-(void)setIsCloudSyncEnabled:(BOOL)arg1 ;
-(BOOL)canToggleCloudSyncData;
-(BOOL)canStartScreenTime;
-(BOOL)canStopSharingScreenTime;
-(BOOL)canStopScreenTime;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setCanStopScreenTimeWithoutPasscode:(BOOL)arg1 ;
-(BOOL)forceParentalControls;
-(BOOL)canToggleWebsiteData;
-(BOOL)isRemotelyManagedUserWithPasscode;
@end

