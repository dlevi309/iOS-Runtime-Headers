/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HUQuickControlMagnifierView : UIView {

	double _innerRadius;

}

@property (assign,nonatomic) double innerRadius;                   //@synthesize innerRadius=_innerRadius - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)_outlineWidth;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(double)innerRadius;
@end

