/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	long long _totalImageRequestCount;
	long long _HEICImageRequestCount;
	os_unfair_lock_s _lock;
	double _maxHEICRequestPercentage;

}

@property (assign,nonatomic) double maxHEICRequestPercentage;              //@synthesize maxHEICRequestPercentage=_maxHEICRequestPercentage - In the implementation block
+(id)sharedStoreArtworkDataSource;
-(BOOL)wantsBackgroundImageDecompression;
-(id)init;
-(void)setMaxHEICRequestPercentage:(double)arg1 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)bestAvailableSizeForCatalog:(id)arg1 ;
-(id)_bestURLForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(BOOL)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2 ;
-(id)cacheKeyForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(id)requestForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(CGSize)_bestSizeForImageSizeInfo:(id)arg1 catalog:(id)arg2 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(double)maxHEICRequestPercentage;
@end

