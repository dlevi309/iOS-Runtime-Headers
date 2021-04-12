/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@class NSCache, MPArtworkResizeUtility, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {

	BOOL _usesFallbackCache;
	NSCache* _fallbackCache;
	MPArtworkResizeUtility* _artworkResizeUtility;

}

@property (nonatomic,retain) NSCache * fallbackCache;                                    //@synthesize fallbackCache=_fallbackCache - In the implementation block
@property (nonatomic,retain) MPArtworkResizeUtility * artworkResizeUtility;              //@synthesize artworkResizeUtility=_artworkResizeUtility - In the implementation block
@property (assign,nonatomic) BOOL usesFallbackCache;                                     //@synthesize usesFallbackCache=_usesFallbackCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(BOOL)usesFallbackCache;
-(void)setUsesFallbackCache:(BOOL)arg1 ;
-(id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(BOOL)arg2 ;
-(void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSCache *)fallbackCache;
-(void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2 ;
-(id)_cachedRepresentationForCatalog:(id)arg1 ;
-(BOOL)_isRepresentation:(id)arg1 validForCatalog:(id)arg2 ;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForFittingSize:(CGSize)arg2 ;
-(id)_representationAtSize:(CGSize)arg1 forCatalog:(id)arg2 ;
-(id)_resizeArtwork:(id)arg1 forCatalog:(id)arg2 toSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setFallbackCache:(NSCache *)arg1 ;
-(MPArtworkResizeUtility *)artworkResizeUtility;
-(void)setArtworkResizeUtility:(MPArtworkResizeUtility *)arg1 ;
@end

