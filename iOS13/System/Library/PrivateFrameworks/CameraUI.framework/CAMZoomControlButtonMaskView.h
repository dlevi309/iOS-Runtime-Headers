/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(CAShapeLayer *)_shapeLayer;
-(void)setMaskOvalFrame:(CGRect)arg1 ;
-(CGRect)maskOvalFrame;
@end

