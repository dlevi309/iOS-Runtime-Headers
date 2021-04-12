/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSCache, MKTransitArtworkManager;

@interface MKArtworkDataSourceCache : NSObject {

	NSCache* _artworkImageCache;
	MKTransitArtworkManager* _artworkManager;

}

@property (nonatomic,readonly) MKTransitArtworkManager * artworkManager;              //@synthesize artworkManager=_artworkManager - In the implementation block
+(id)sharedInstance;
-(void)purge;
-(id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 ;
-(id)initWithArtworkManager:(id)arg1 ;
-(void)_shieldPackDidUpdate;
-(MKTransitArtworkManager *)artworkManager;
-(id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 widthPaddingMultiple:(double)arg6 ;
-(id)_lookupArtworkInCacheWithKey:(id)arg1 ;
-(void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2 ;
-(id)imageForSizedArtwork:(id)arg1 scale:(double)arg2 nightMode:(BOOL)arg3 ;
@end

