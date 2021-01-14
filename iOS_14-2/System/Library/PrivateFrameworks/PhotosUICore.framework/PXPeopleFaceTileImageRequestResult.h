/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIImage;

@interface PXPeopleFaceTileImageRequestResult : NSObject {

	BOOL _isDegraded;
	BOOL _isVeryLowQuality;
	UIImage* _image;
	id _originalObjectID;
	id _assetObjectID;
	CGSize _originalImageSize;
	CGRect _faceRect;
	PXFaceTileImageParams _params;

}

@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGRect faceRect;                         //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,readonly) BOOL isDegraded;                         //@synthesize isDegraded=_isDegraded - In the implementation block
@property (nonatomic,retain) id originalObjectID;                       //@synthesize originalObjectID=_originalObjectID - In the implementation block
@property (nonatomic,retain) id assetObjectID;                          //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (assign,nonatomic) PXFaceTileImageParams params;              //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) BOOL isVeryLowQuality;                     //@synthesize isVeryLowQuality=_isVeryLowQuality - In the implementation block
@property (assign,nonatomic) CGSize originalImageSize;                  //@synthesize originalImageSize=_originalImageSize - In the implementation block
-(void)setAssetObjectID:(id)arg1 ;
-(CGRect)faceRect;
-(BOOL)isVeryLowQuality;
-(id)assetObjectID;
-(id)originalObjectID;
-(void)setParams:(PXFaceTileImageParams)arg1 ;
-(UIImage *)image;
-(id)description;
-(void)setIsVeryLowQuality:(BOOL)arg1 ;
-(BOOL)isDegraded;
-(void)setOriginalObjectID:(id)arg1 ;
-(CGSize)originalImageSize;
-(id)initWithImage:(id)arg1 faceRect:(CGRect)arg2 isDegraded:(BOOL)arg3 ;
-(PXFaceTileImageParams)params;
-(void)setOriginalImageSize:(CGSize)arg1 ;
@end

