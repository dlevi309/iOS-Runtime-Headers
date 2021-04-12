/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)position;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setPosition:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)zoomingImageWidth;
-(double)zoomingImageImposedAlphaOfOtherViews;
-(double)zoomingImageAlpha;
-(void)setZoomingImageAlpha:(double)arg1 ;
-(void)setZoomingImageWidth:(double)arg1 ;
-(void)setZoomingImageImposedAlphaOfOtherViews:(double)arg1 ;
-(double)_zoomingImageLambda;
-(void)_setZoomingImageLambda:(double)arg1 ;
@end

