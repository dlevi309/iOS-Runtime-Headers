/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy) NSSet * installedBundleIDs;                                         //@synthesize installedBundleIDs=_installedBundleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * installedBundleIDsByCategoryIdentifier;              //@synthesize installedBundleIDsByCategoryIdentifier=_installedBundleIDsByCategoryIdentifier - In the implementation block
@property (nonatomic,copy) STUIUser * me;                                                      //@synthesize me=_me - In the implementation block
@property (nonatomic,copy) NSArray * children;                                                 //@synthesize children=_children - In the implementation block
+(id)keyPathsForValuesAffectingScreenTimeEnabled;
+(id)keyPathsForValuesAffectingCanSetUpFamily;
+(id)keyPathsForValuesAffectingCanStartScreenTime;
+(id)keyPathsForValuesAffectingCanStopScreenTime;
+(id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+(id)keyPathsForValuesAffectingIsSharingUsageData;
+(id)keyPathsForValuesAffectingWebUsageEnabled;
+(id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+(id)keyPathsForValuesAffectingCanSignIn;
+(id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+(id)keyPathsForValuesAffectingCanViewAskForTimeRequests;
+(id)keyPathsForValuesAffectingForceParentalControls;
+(id)keyPathsForValuesAffectingCanToggleWebsiteData;
-(id)init;
-(STUIUser *)me;
-(void)setMe:(STUIUser *)arg1 ;
-(NSArray *)devices;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)canSetUpFamily;
-(BOOL)canSignIn;
-(BOOL)shouldShowCompatibilityAlerts;
-(BOOL)isCloudSyncEnabled;
-(NSDictionary *)installedBundleIDsByCategoryIdentifier;
-(BOOL)isScreenTimeEnabled;
-(NSSet *)installedBundleIDs;
-(void)setInstalledBundleIDs:(NSSet *)arg1 ;
-(BOOL)canViewAskForTimeRequests;
-(BOOL)canToggleCloudSyncData;
-(BOOL)canStopScreenTime;
-(BOOL)canStopScreenTimeWithoutPasscode;
-(BOOL)canStartScreenTime;
-(BOOL)forceParentalControls;
-(BOOL)canToggleWebsiteData;
-(BOOL)isWebUsageEnabled;
-(BOOL)isRemotelyManagedUserWithPasscode;
-(BOOL)canStopSharingScreenTime;
-(BOOL)isSharingUsageData;
-(void)setCanStopScreenTimeWithoutPasscode:(BOOL)arg1 ;
-(void)setIsCloudSyncEnabled:(BOOL)arg1 ;
-(void)setInstalledBundleIDsByCategoryIdentifier:(NSDictionary *)arg1 ;
@end

