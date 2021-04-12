/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)_outlineWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(double)innerRadius;
@end

