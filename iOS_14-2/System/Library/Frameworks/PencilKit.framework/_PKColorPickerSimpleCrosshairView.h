/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _PKColorPickerSimpleCrosshairView : UIView {

	double _borderCornerRadius;
	UIView* _shadowView;
	UIView* _borderView;

}

@property (assign,nonatomic) double borderCornerRadius;              //@synthesize borderCornerRadius=_borderCornerRadius - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                    //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * borderView;                    //@synthesize borderView=_borderView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)shadowView;
-(void)layoutSubviews;
-(UIView *)borderView;
-(void)setBorderView:(UIView *)arg1 ;
-(void)setShadowView:(UIView *)arg1 ;
-(void)configureShadowView:(id)arg1 ;
-(void)configureBorderView:(id)arg1 ;
-(double)_cornerRadiusForBorderView;
-(double)_cornerRadiusForShadowView;
-(double)borderCornerRadius;
-(void)setBorderCornerRadius:(double)arg1 ;
@end

