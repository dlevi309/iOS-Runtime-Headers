/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<GEOTransitArtworkDataSource>)artwork;
-(MKArtworkDataSourceCache *)artworkCache;
-(long long)shieldSize;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2 ;
-(id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3 ;
-(BOOL)isEqualToTransitArtworkViewMode:(id)arg1 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 ;
@end

