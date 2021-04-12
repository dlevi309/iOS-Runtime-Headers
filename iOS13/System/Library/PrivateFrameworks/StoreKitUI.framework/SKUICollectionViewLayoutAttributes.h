/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backgroundColor;
	long long _position;
	double _zoomingImageAlpha;
	double _zoomingImageWidth;
	double _zoomingImageImposedAlphaOfOtherViews;
	double _zoomingImageLambda;

}

@property (assign,setter=_setZoomingImageLambda:,getter=_zoomingImageLambda,nonatomic) double zoomingImageLambda;              //@synthesize zoomingImageLambda=_zoomingImageLambda - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long position;                                                                               //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double zoomingImageAlpha;                                                                         //@synthesize zoomingImageAlpha=_zoomingImageAlpha - In the implementation block
@property (assign,nonatomic) double zoomingImageWidth;                                                                         //@synthesize zoomingImageWidth=_zoomingImageWidth - In the implementation block
@property (assign,nonatomic) double zoomingImageImposedAlphaOfOtherViews;                                                      //@synthesize zoomingImageImposedAlphaOfOtherViews=_zoomingImageImposedAlphaOfOtherViews - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(double)zoomingImageWidth;
-(double)zoomingImageImposedAlphaOfOtherViews;
-(double)zoomingImageAlpha;
-(void)setZoomingImageAlpha:(double)arg1 ;
-(void)setZoomingImageWidth:(double)arg1 ;
-(void)setZoomingImageImposedAlphaOfOtherViews:(double)arg1 ;
-(double)_zoomingImageLambda;
-(void)_setZoomingImageLambda:(double)arg1 ;
@end

