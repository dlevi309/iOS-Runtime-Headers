/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface CAMSlashView : UIView {

	BOOL _visible;

}

@property (nonatomic,readonly) CAShapeLayer * _shapeLayer; 
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(CAShapeLayer *)_shapeLayer;
-(void)layoutSubviews;
-(BOOL)isVisible;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateShapeLayerProgressAnimated:(BOOL)arg1 ;
-(void)_updateShapeLayerPath;
@end

