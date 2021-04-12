/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CAShapeLayer;

@interface HUQuickControlRingSliderHandleView : UIView {

	unsigned long long _handleViewStyle;
	UIView* _lineView;
	CAShapeLayer* _circleLayer;

}

@property (assign,nonatomic) unsigned long long handleViewStyle;              //@synthesize handleViewStyle=_handleViewStyle - In the implementation block
@property (nonatomic,retain) UIView * lineView;                               //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circleLayer;                      //@synthesize circleLayer=_circleLayer - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(void)_setColor:(id)arg1 ;
-(UIView *)lineView;
-(void)setLineView:(UIView *)arg1 ;
-(double)outerRadius;
-(CAShapeLayer *)circleLayer;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setHandleViewStyle:(unsigned long long)arg1 ;
-(unsigned long long)handleViewStyle;
-(void)_updateCircleLayer;
@end

