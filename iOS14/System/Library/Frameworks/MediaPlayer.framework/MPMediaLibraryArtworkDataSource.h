/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_cachedRepresentationForCatalog:(id)arg1 ;
-(BOOL)_isRepresentation:(id)arg1 validForCatalog:(id)arg2 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MPArtworkResizeUtility *)artworkResizeUtility;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setUsesFallbackCache:(BOOL)arg1 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)setArtworkResizeUtility:(MPArtworkResizeUtility *)arg1 ;
-(void)setFallbackCache:(NSCache *)arg1 ;
-(id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(BOOL)arg2 ;
-(BOOL)usesFallbackCache;
-(void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1 ;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForFittingSize:(CGSize)arg2 ;
-(void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)_resizeArtwork:(id)arg1 forCatalog:(id)arg2 toSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSCache *)fallbackCache;
-(id)_representationAtSize:(CGSize)arg1 forCatalog:(id)arg2 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
@end

