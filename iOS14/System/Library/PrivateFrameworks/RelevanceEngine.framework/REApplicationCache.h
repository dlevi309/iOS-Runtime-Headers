/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, REKeyValueMap, NARApplicationWorkspace, NSString;

@interface REApplicationCache : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _applicationTypes;
	NSMutableDictionary* _restrictedApps;
	NSMutableDictionary* _removedApps;
	NSMutableDictionary* _watchKitExtensions;
	REKeyValueMap* _remoteApplicationsMap;
	NARApplicationWorkspace* _workspace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(id)_init;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(void)_init_loadApplicationTypesMapFromWorkspace:(id)arg1 ;
-(BOOL)_queue_applicationIsRemoved:(id)arg1 ;
-(void)_queue_loadStateForBundleID:(id)arg1 ;
-(BOOL)_queue_applicationIsRestricted:(id)arg1 ;
-(void)_accessRemoteApplicationsMapWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_loadNanoRegistryCompletion:(/*^block*/id)arg1 ;
-(void)_queue_applicationsDidChange:(id)arg1 ;
-(unsigned long long)_typeForProxy:(id)arg1 ;
-(BOOL)applicationIsRemoved:(id)arg1 ;
-(BOOL)applicationIsRestricted:(id)arg1 ;
-(BOOL)applicationIsRemote:(id)arg1 ;
-(id)localApplicationForRemoteApplication:(id)arg1 ;
-(id)remoteApplicationForLocalApplication:(id)arg1 ;
-(id)watchKitExtensionForApplication:(id)arg1 ;
-(unsigned long long)typeForApplication:(id)arg1 ;
-(unsigned long long)_trackedApplicationCount;
-(void)clearNanoRegistryApplications;
-(void)_clearApplicationTypesMap;
@end

