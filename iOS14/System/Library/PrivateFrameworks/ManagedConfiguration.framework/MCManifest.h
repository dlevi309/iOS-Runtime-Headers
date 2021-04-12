/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface MCManifest : NSObject {

	NSString* _systemFilePath;
	NSString* _userFilePath;
	NSMutableDictionary* _systemManifest;
	NSMutableDictionary* _userManifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)installedSystemProfileDataWithIdentifier:(id)arg1 ;
+(id)installedUserProfileDataWithIdentifier:(id)arg1 ;
+(id)installedSystemProfileWithIdentifier:(id)arg1 ;
+(id)installedProfileWithIdentifier:(id)arg1 ;
+(id)installedProfileDataWithIdentifier:(id)arg1 ;
+(id)installedUserProfileWithIdentifier:(id)arg1 ;
+(id)sharedManifest;
+(void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2 ;
-(void)invalidateCache;
-(id)installedSystemProfileWithIdentifier:(id)arg1 ;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)installedUserProfileWithIdentifier:(id)arg1 ;
-(void)removeIdentifierFromUserManifest:(id)arg1 flag:(int)arg2 ;
-(id)init;
-(id)systemManifest;
-(void)_setSystemManifest:(id)arg1 userManifest:(id)arg2 ;
-(void)removeIdentifierFromSystemManifest:(id)arg1 flag:(int)arg2 ;
-(id)_systemManifest;
-(id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1 ;
-(id)allInstalledUserProfileIdentifiers;
-(void)_adjustManifestIdentifier:(id)arg1 isUserInstall:(BOOL)arg2 flag:(int)arg3 addingIdentifier:(BOOL)arg4 ;
-(id)allInstalledSystemProfileIdentifiers;
-(id)_userManifest;
-(id)userManifest;
-(void)addIdentifierToSystemManifest:(id)arg1 flag:(int)arg2 ;
-(id)installedMDMProfile;
-(id)allInstalledProfileIdentifiers;
-(void)addIdentifierToUserManifest:(id)arg1 flag:(int)arg2 ;
-(id)allInstalledPayloadsOfClass:(Class)arg1 ;
-(id)identifiersOfProfilesWithFilterFlags:(int)arg1 ;
-(void)dealloc;
@end

