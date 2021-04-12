/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/


@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsFilterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)allAssets;
+(id)allPhotos;
+(id)allVideos;
-(id)init;
-(void)dealloc;
-(ALAssetsFilterInternal *)internal;
-(void)setInternal:(ALAssetsFilterInternal *)arg1 ;
-(int)_filter;
-(void)_setFilter:(int)arg1 ;
@end

