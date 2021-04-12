/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternal:(ALAssetsFilterInternal *)arg1 ;
-(id)init;
-(int)_filter;
-(ALAssetsFilterInternal *)internal;
-(void)dealloc;
-(void)_setFilter:(int)arg1 ;
@end

