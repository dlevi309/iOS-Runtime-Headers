/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet;

@interface _PXGAssetImageCacheEntry : NSObject {

	unsigned _imageOrientation;
	NSMutableIndexSet* _requestIDs;
	id<PXDisplayAsset> _asset;
	CGImageRef _image;

}

@property (nonatomic,readonly) NSMutableIndexSet * requestIDs;              //@synthesize requestIDs=_requestIDs - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> asset;                      //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGImageRef image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned imageOrientation;                     //@synthesize imageOrientation=_imageOrientation - In the implementation block
-(unsigned)imageOrientation;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(void)setImageOrientation:(unsigned)arg1 ;
-(void)setImage:(CGImageRef)arg1 ;
-(id)init;
-(id<PXDisplayAsset>)asset;
-(void)prepareForReuse;
-(CGImageRef)image;
-(NSMutableIndexSet *)requestIDs;
-(void)dealloc;
@end

