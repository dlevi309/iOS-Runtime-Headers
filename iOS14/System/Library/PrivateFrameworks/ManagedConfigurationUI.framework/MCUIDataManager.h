/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class MCProfileInfo, NSArray, LSApplicationWorkspace, NSObject, NSString;

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol> {

	BOOL _observing;
	int _appsChangedNotifyToken;
	int _provisioningProfileInstalledToken;
	int _provisioningProfileRemovedToken;
	MCProfileInfo* _mdmProfileInfo;
	NSArray* _configurationProfilesInfo;
	NSArray* _uninstalledProfilesInfo;
	NSArray* _freeDeveloperAppSigners;
	NSArray* _enterpriseAppSigners;
	NSArray* _blockedApplications;
	LSApplicationWorkspace* _appWorkspace;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;

}

@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;                 //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reloadQueue;              //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) BOOL observing;                                        //@synthesize observing=_observing - In the implementation block
@property (assign,nonatomic) int appsChangedNotifyToken;                            //@synthesize appsChangedNotifyToken=_appsChangedNotifyToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileInstalledToken;                 //@synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileRemovedToken;                   //@synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken - In the implementation block
@property (nonatomic,retain) MCProfileInfo * mdmProfileInfo;                        //@synthesize mdmProfileInfo=_mdmProfileInfo - In the implementation block
@property (nonatomic,retain) NSArray * configurationProfilesInfo;                   //@synthesize configurationProfilesInfo=_configurationProfilesInfo - In the implementation block
@property (nonatomic,retain) NSArray * uninstalledProfilesInfo;                     //@synthesize uninstalledProfilesInfo=_uninstalledProfilesInfo - In the implementation block
@property (nonatomic,retain) NSArray * freeDeveloperAppSigners;                     //@synthesize freeDeveloperAppSigners=_freeDeveloperAppSigners - In the implementation block
@property (nonatomic,retain) NSArray * enterpriseAppSigners;                        //@synthesize enterpriseAppSigners=_enterpriseAppSigners - In the implementation block
@property (nonatomic,retain) NSArray * blockedApplications;                         //@synthesize blockedApplications=_blockedApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)isProfileSectionRestricted;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMdmProfileInfo:(MCProfileInfo *)arg1 ;
-(void)setProvisioningProfileInstalledToken:(int)arg1 ;
-(void)setFreeDeveloperAppSigners:(NSArray *)arg1 ;
-(id)init;
-(int)provisioningProfileInstalledToken;
-(id)mdmProfile;
-(void)setObserving:(BOOL)arg1 ;
-(void)setConfigurationProfilesInfo:(NSArray *)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(NSArray *)uninstalledProfilesInfo;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)setBlockedApplications:(NSArray *)arg1 ;
-(unsigned long long)itemCount;
-(int)appsChangedNotifyToken;
-(void)setAppsChangedNotifyToken:(int)arg1 ;
-(void)appMovedToForeground:(id)arg1 ;
-(unsigned long long)appSignerCount;
-(void)reloadAllDataInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
-(void)setReloadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(NSArray *)freeDeveloperAppSigners;
-(void)setEnterpriseAppSigners:(NSArray *)arg1 ;
-(void)appMovedToBackground:(id)arg1 ;
-(void)setProvisioningProfileRemovedToken:(int)arg1 ;
-(void)profilesChanged:(id)arg1 ;
-(BOOL)observing;
-(unsigned long long)installedProfileCount;
-(void)setUninstalledProfilesInfo:(NSArray *)arg1 ;
-(int)provisioningProfileRemovedToken;
-(void)reloadProfilesInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)enterpriseAppSigners;
-(id)configurationProfiles;
-(void)reloadDataInBackgroundIncludingProfiles:(BOOL)arg1 appSigners:(BOOL)arg2 blockedApplications:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isProfileSectionEmpty;
-(void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)configurationProfilesInfo;
-(MCProfileInfo *)mdmProfileInfo;
-(NSArray *)blockedApplications;
-(void)allDeviceManagementOutMDMProfileInfo:(id*)arg1 outConfigurationProfilesInfo:(id*)arg2 outUninstalledProfilesInfo:(id*)arg3 outEnterpriseAppSigners:(id*)arg4 outFreeDevAppSigners:(id*)arg5 outBlockedApplications:(id*)arg6 ;
-(void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(BOOL)arg1 appSigners:(BOOL)arg2 blockedApplications:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
@end

