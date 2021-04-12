/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/XBSnapshotManifestStore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSMutableDictionary, NSString;

@interface XBApplicationDataStore : NSObject <XBSnapshotManifestStore> {

	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _cacheableBundleIdentifiers;
	NSMutableDictionary* _cachedStoresByBundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_clearCompatibilityInfoForBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)_storeForBundleIdentifier:(id)arg1 ;
-(void)endAccessBlockForBundleIdentifier:(id)arg1 ;
-(void)_addBundleIdentifierToLaunchInterfaceDenyList:(id)arg1 ;
-(id)loadManifestDataForBundleIdentifier:(id)arg1 ;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_persistCompatibilityInfo:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)beginAccessBlockForBundleIdentifier:(id)arg1 ;
-(void)clearManifestDataForBundleIdentifier:(id)arg1 ;
-(id)_init;
-(id)_loadCompatibilityInfoForBundleIdentifier:(id)arg1 ;
-(BOOL)_bundleIdentifierHasDeniedLaunchInterface:(id)arg1 ;
-(void)_removeBundleIdentifierFromLaunchInterfaceDenyList:(id)arg1 ;
@end

