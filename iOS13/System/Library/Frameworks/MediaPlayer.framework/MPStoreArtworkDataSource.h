/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource
+(id)sharedStoreArtworkDataSource;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
-(id)_bestURLForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)_bestLookupItemArtworkForCatalog:(id)arg1 size:(CGSize)arg2 ;
@end

