/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableDictionary, UIImage, NSSManager, NSString;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {

	BOOL _hasFetchedProfilesInfo;
	BOOL _hasFailedFetchingProfilesInfo;
	int _provisioningProfileInstalledToken;
	int _provisioningProfileRemovedToken;
	NSMutableDictionary* _dataDictionary;
	UIImage* _profileListIcon;
	NSSManager* _nssManager;

}

@property (nonatomic,retain) NSMutableDictionary * dataDictionary;               //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,retain) UIImage * profileListIcon;                          //@synthesize profileListIcon=_profileListIcon - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                            //@synthesize nssManager=_nssManager - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedProfilesInfo;                        //@synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo - In the implementation block
@property (assign,nonatomic) BOOL hasFailedFetchingProfilesInfo;                 //@synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo - In the implementation block
@property (assign,nonatomic) int provisioningProfileInstalledToken;              //@synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileRemovedToken;                //@synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_cellHeight;
+(id)specifiersForBlockedApps:(id)arg1 ;
-(void)setProvisioningProfileInstalledToken:(int)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)provisioningProfileInstalledToken;
-(void)_showProgressIndicator;
-(void)setProvisioningProfileRemovedToken:(int)arg1 ;
-(int)provisioningProfileRemovedToken;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSMutableDictionary *)dataDictionary;
-(void)setDataDictionary:(NSMutableDictionary *)arg1 ;
-(void)setNssManager:(NSSManager *)arg1 ;
-(NSSManager *)nssManager;
-(void)fetchRemoteProfileList;
-(void)_profileListChanged:(id)arg1 ;
-(void)_installedApplicationsChanged:(id)arg1 ;
-(void)_appSignerApplicationsChanged:(id)arg1 ;
-(long long)_profilesCount;
-(UIImage *)profileListIcon;
-(id)_specifiersForDataDictionary;
-(void)_fetchPhoneProfileList;
-(int)_resolveIndexPathForSection:(id)arg1 ;
-(BOOL)_isSectionPopulated:(int)arg1 ;
-(id)_dataForIndexPath:(id)arg1 ;
-(void)_handleProfileCellSelectionAtIndexPath:(id)arg1 ;
-(BOOL)_showProfileDetailPageForUserEnrollmentProfile:(id)arg1 ;
-(void)_hideProgressIndicatorAndShowBackButton:(BOOL)arg1 ;
-(void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2 ;
-(void)_blockedAppsChanged:(id)arg1 ;
-(BOOL)_isUIProfileInstallationRestricted;
-(void)setProfileListIcon:(UIImage *)arg1 ;
-(BOOL)hasFetchedProfilesInfo;
-(void)setHasFetchedProfilesInfo:(BOOL)arg1 ;
-(BOOL)hasFailedFetchingProfilesInfo;
-(void)setHasFailedFetchingProfilesInfo:(BOOL)arg1 ;
@end

