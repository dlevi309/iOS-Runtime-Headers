/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setBorderView:(UIView *)arg1 ;
-(UIView *)borderView;
-(double)borderCornerRadius;
-(void)setBorderCornerRadius:(double)arg1 ;
-(void)configureShadowView:(id)arg1 ;
-(void)configureBorderView:(id)arg1 ;
-(double)_cornerRadiusForBorderView;
-(double)_cornerRadiusForShadowView;
@end

