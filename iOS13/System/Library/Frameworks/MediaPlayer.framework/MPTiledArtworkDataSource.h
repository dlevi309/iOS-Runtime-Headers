/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject, NSCache, NSOperationQueue, NSString;

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource> {

	NSCountedSet* _loadingTiledArtworkRequests;
	NSObject*<OS_dispatch_queue> _loadingTiledArtworkRequestsAccessQueue;
	NSCache* _tiledArtworkRepresentationFallbackCache;
	NSOperationQueue* _tilingArtworkCatalogOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_loadingRequestForArtworkCatalog:(id)arg1 ;
+(CGSize)_tileSizeForFittingSize:(CGSize)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 spacing:(double)arg4 ;
+(id)_representationCacheKeyForArtworkCatalog:(id)arg1 forAnyRevision:(BOOL)arg2 ;
+(id)_errorWithDescription:(id)arg1 ;
+(id)sharedDataSource;
-(id)init;
-(void)_performSyncBlock:(/*^block*/id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)_addLoadingRequestForArtworkCatalog:(id)arg1 ;
-(BOOL)_hasLoadingRequestForArtworkCatalog:(id)arg1 ;
-(void)_performAsyncBlock:(/*^block*/id)arg1 ;
-(void)_removeLoadingRequestForArtworkCatalog:(id)arg1 ;
@end

