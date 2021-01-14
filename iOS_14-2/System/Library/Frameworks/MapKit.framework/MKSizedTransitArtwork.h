/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKArtworkImageSource.h>

@protocol GEOTransitArtworkDataSource;
@class MKArtworkDataSourceCache, NSString;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource> {

	id<GEOTransitArtworkDataSource> _artwork;
	long long _shieldSize;
	MKArtworkDataSourceCache* _artworkCache;

}

@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long shieldSize;                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;                //@synthesize artworkCache=_artworkCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MKArtworkDataSourceCache *)artworkCache;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3 ;
-(BOOL)isEqualToTransitArtworkViewMode:(id)arg1 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 ;
-(long long)shieldSize;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(id<GEOTransitArtworkDataSource>)artwork;
-(unsigned long long)hash;
-(id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2 ;
-(id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

