/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(UIView *)lineView;
-(void)layoutSubviews;
-(void)_setColor:(id)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(double)outerRadius;
-(void)setHandleViewStyle:(unsigned long long)arg1 ;
-(CAShapeLayer *)circleLayer;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(unsigned long long)handleViewStyle;
-(void)_updateCircleLayer;
@end

