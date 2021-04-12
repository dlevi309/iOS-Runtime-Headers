/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSCache, MKTransitArtworkManager;

@interface MKArtworkDataSourceCache : NSObject {

	NSCache* _artworkImageCache;
	MKTransitArtworkManager* _artworkManager;

}

@property (nonatomic,readonly) MKTransitArtworkManager * artworkManager;              //@synthesize artworkManager=_artworkManager - In the implementation block
+(id)sharedInstance;
-(id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 ;
-(void)purge;
-(id)initWithArtworkManager:(id)arg1 ;
-(void)_shieldPackDidUpdate;
-(MKTransitArtworkManager *)artworkManager;
-(id)_lookupArtworkInCacheWithKey:(id)arg1 ;
-(void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2 ;
-(id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 widthPaddingMultiple:(double)arg6 ;
-(id)imageForSizedArtwork:(id)arg1 scale:(double)arg2 nightMode:(BOOL)arg3 ;
@end

