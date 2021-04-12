/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class CKDServerConfiguration, CKDFlowControlManager, CKDPCSManager, CKDZoneGatekeeper, NSString, CKContainerID;


@protocol CKDContextInfoProvider <NSObject>
@property (nonatomic,readonly) long long contextType; 
@property (nonatomic,readonly) CKDServerConfiguration * config; 
@property (nonatomic,readonly) CKDFlowControlManager * flowControlManager; 
@property (nonatomic,readonly) CKDPCSManager * pcsManager; 
@property (nonatomic,readonly) CKDZoneGatekeeper * foregroundZoneGatekeeper; 
@property (nonatomic,readonly) CKDZoneGatekeeper * backgroundZoneGatekeeper; 
@property (copy,readonly) NSString * containerScopedUserID; 
@property (nonatomic,readonly) CKContainerID * containerID; 
@property (nonatomic,readonly) NSString * applicationBundleID; 
@property (nonatomic,readonly) NSString * associatedApplicationBundleID; 
@property (nonatomic,readonly) NSString * sourceApplicationBundleID; 
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
@property (nonatomic,readonly) NSString * applicationBundleIDForPush; 
@property (nonatomic,readonly) NSString * applicationBundleIDForServer; 
@property (nonatomic,readonly) NSString * processName; 
@required
-(NSString *)languageCode;
-(NSString *)processName;
-(CKDServerConfiguration *)config;
-(NSString *)deviceName;
-(NSString *)personaID;
-(NSString *)applicationBundleID;
-(NSString *)regionCode;
-(CKContainerID *)containerID;
-(long long)contextType;
-(BOOL)bypassPCSEncryption;
-(CKDFlowControlManager *)flowControlManager;
-(NSString *)containerScopedUserID;
-(NSString *)sourceApplicationBundleID;
-(NSString *)applicationVersion;
-(void)performRequest:(id)arg1;
-(NSString *)applicationPackageStagingDirectory;
-(BOOL)canAccessProtectionData;
-(CKDPCSManager *)pcsManager;
-(NSString *)associatedApplicationBundleID;
-(void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
-(BOOL)canAuthWithCloudKit;
-(void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(NSString *)hardwareID;
-(NSString *)applicationFrameworkCachesDirectory;
-(CKDZoneGatekeeper *)foregroundZoneGatekeeper;
-(CKDZoneGatekeeper *)backgroundZoneGatekeeper;
-(NSString *)applicationBundleIDForPush;
-(BOOL)hasSystemServiceEntitlement;
-(NSString *)apsEnvironmentString;
-(id)deviceIDForOperation:(id)arg1;
-(void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(NSString *)applicationBundleIDForServer;

@end

