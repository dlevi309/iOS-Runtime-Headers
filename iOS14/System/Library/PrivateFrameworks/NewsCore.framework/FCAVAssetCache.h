/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCAVAssetCacheType.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@class NSString, NFUnfairLock, FCKeyValueStore, FCCacheCoordinator;

@interface FCAVAssetCache : NSObject <FCCacheCoordinatorDelegate, FCAVAssetCacheType, FCCacheFlushing> {

	NSString* _cacheDirectory;
	NFUnfairLock* _initializationLock;
	FCKeyValueStore* _metadataStore;
	FCCacheCoordinator* _cacheCoordinator;

}

@property (nonatomic,copy,readonly) NSString * cacheDirectory;                     //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * initializationLock;                  //@synthesize initializationLock=_initializationLock - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * metadataStore;                    //@synthesize metadataStore=_metadataStore - In the implementation block
@property (nonatomic,readonly) FCCacheCoordinator * cacheCoordinator;              //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adoptFileAtURL:(id)arg1 forAssetIdentifier:(id)arg2 remoteURL:(id)arg3 contentKeyIdentifiers:(id)arg4 extension:(id)arg5 ;
-(NSString *)cacheDirectory;
-(id)init;
-(id)cachedFileURLForAssetIdentifier:(id)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(id)interestTokenForAssetIdentifier:(id)arg1 ;
-(void)_initStores;
-(id)contentKeyIdentifiersForAllAssets;
-(id)initWithCacheDirectory:(id)arg1 ;
-(NFUnfairLock *)initializationLock;
-(BOOL)containsAssetWithIdentifier:(id)arg1 ;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(void)_prepareForUse;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(FCCacheCoordinator *)cacheCoordinator;
-(id)contentKeyIdentifiersForAssetIdentifier:(id)arg1 ;
-(FCKeyValueStore *)metadataStore;
@end

