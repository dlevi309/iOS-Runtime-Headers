/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _renderShadow;
	BOOL _renderBorder;
	double _imageWidth;
	double _imageHeight;

}

@property (assign,nonatomic) double imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) double imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) BOOL renderShadow;               //@synthesize renderShadow=_renderShadow - In the implementation block
@property (assign,nonatomic) BOOL renderBorder;               //@synthesize renderBorder=_renderBorder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)imageHeight;
-(double)imageWidth;
-(void)setImageWidth:(double)arg1 ;
-(void)setImageHeight:(double)arg1 ;
-(BOOL)renderShadow;
-(BOOL)renderBorder;
-(void)setRenderShadow:(BOOL)arg1 ;
-(void)setRenderBorder:(BOOL)arg1 ;
@end

