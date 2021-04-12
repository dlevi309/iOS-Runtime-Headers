/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)_init;
-(void)beginAccessBlockForBundleIdentifier:(id)arg1 ;
-(id)_loadCompatibilityInfoForBundleIdentifier:(id)arg1 ;
-(void)_persistCompatibilityInfo:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)endAccessBlockForBundleIdentifier:(id)arg1 ;
-(void)_clearCompatibilityInfoForBundleIdentifier:(id)arg1 ;
-(id)_storeForBundleIdentifier:(id)arg1 ;
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)clearManifestDataForBundleIdentifier:(id)arg1 ;
-(id)loadManifestDataForBundleIdentifier:(id)arg1 ;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

