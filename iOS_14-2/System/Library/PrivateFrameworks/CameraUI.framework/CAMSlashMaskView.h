/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface CAMSlashMaskView : UIView {

	CGRect _slashBounds;

}

@property (nonatomic,readonly) CAShapeLayer * _shapeLayer; 
@property (assign,nonatomic) CGRect slashBounds;                        //@synthesize slashBounds=_slashBounds - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAShapeLayer *)_shapeLayer;
-(void)layoutSubviews;
-(void)updateMaskAnimated;
-(void)setSlashBounds:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_updateShapeLayerAnimated:(BOOL)arg1 ;
-(CGRect)slashBounds;
-(void)setSlashBounds:(CGRect)arg1 ;
@end

