/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface CAMZoomControlButtonMaskView : UIView {

	CAShapeLayer* __shapeLayer;
	CGRect _maskOvalFrame;

}

@property (nonatomic,readonly) CAShapeLayer * _shapeLayer;              //@synthesize _shapeLayer=__shapeLayer - In the implementation block
@property (assign,nonatomic) CGRect maskOvalFrame;                      //@synthesize maskOvalFrame=_maskOvalFrame - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CAShapeLayer *)_shapeLayer;
-(void)layoutSubviews;
-(void)setMaskOvalFrame:(CGRect)arg1 ;
-(CGRect)maskOvalFrame;
@end

