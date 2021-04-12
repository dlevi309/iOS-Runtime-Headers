/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class CKDServerConfiguration, CKDFlowControlManager, CKDPCSManager, CKDZoneGatekeeper, NSString, CKContainerID, CKDApplicationID;


@protocol CKDContextInfoProvider <NSObject>
@property (nonatomic,readonly) long long contextType; 
@property (nonatomic,readonly) CKDServerConfiguration * config; 
@property (nonatomic,readonly) CKDFlowControlManager * flowControlManager; 
@property (nonatomic,readonly) CKDPCSManager * pcsManager; 
@property (nonatomic,readonly) CKDZoneGatekeeper * foregroundZoneGatekeeper; 
@property (nonatomic,readonly) CKDZoneGatekeeper * backgroundZoneGatekeeper; 
@property (copy,readonly) NSString * containerScopedUserID; 
@property (nonatomic,readonly) CKContainerID * containerID; 
@property (nonatomic,readonly) CKDApplicationID * applicationID; 
@property (nonatomic,readonly) NSString * applicationBundleID; 
@property (nonatomic,readonly) NSString * associatedApplicationBundleID; 
@property (nonatomic,readonly) NSString * personaID; 
@property (nonatomic,readonly) NSString * hardwareID; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSString * regionCode; 
@property (nonatomic,readonly) NSString * applicationVersion; 
@property (nonatomic,readonly) NSString * applicationFrameworkCachesDirectory; 
@property (nonatomic,readonly) NSString * applicationPackageStagingDirectory; 
@property (nonatomic,readonly) BOOL bypassPCSEncryption; 
@property (nonatomic,readonly) BOOL canAccessProtectionData; 
@property (nonatomic,readonly) BOOL canAuthWithCloudKit; 
@property (nonatomic,readonly) BOOL hasSystemServiceEntitlement; 
@property (nonatomic,readonly) NSString * apsEnvironmentString; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForContainerAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForNetworkAttribution; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForPush; 
@property (nonatomic,readonly) NSString * processName; 
@required
-(CKDApplicationID *)applicationID;
-(long long)contextType;
-(CKDServerConfiguration *)config;
-(BOOL)bypassPCSEncryption;
-(NSString *)regionCode;
-(NSString *)deviceName;
-(CKContainerID *)containerID;
-(CKDFlowControlManager *)flowControlManager;
-(NSString *)applicationBundleIdentifierForNetworkAttribution;
-(NSString *)applicationPackageStagingDirectory;
-(NSString *)applicationBundleIdentifierForContainerAccess;
-(NSString *)processName;
-(BOOL)hasSystemServiceEntitlement;
-(NSString *)languageCode;
-(NSString *)personaID;
-(BOOL)canAccessProtectionData;
-(void)performRequest:(id)arg1;
-(void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(NSString *)hardwareID;
-(CKDPCSManager *)pcsManager;
-(BOOL)canAuthWithCloudKit;
-(void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(CKDZoneGatekeeper *)foregroundZoneGatekeeper;
-(NSString *)apsEnvironmentString;
-(NSString *)applicationFrameworkCachesDirectory;
-(id)deviceIDForOperation:(id)arg1;
-(void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
-(void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(CKDZoneGatekeeper *)backgroundZoneGatekeeper;
-(NSString *)applicationBundleIdentifierForPush;
-(NSString *)applicationVersion;
-(void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(NSString *)containerScopedUserID;
-(NSString *)applicationBundleID;
-(NSString *)associatedApplicationBundleID;

@end

