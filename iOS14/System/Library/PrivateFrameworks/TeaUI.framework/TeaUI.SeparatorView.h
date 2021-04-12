/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TeaUI.SeparatorView : UIView {

	 layoutStyle;
	 visibilityStyle;
	 isHighlighted;
	 isSelected;
	 _backgroundColor;

}

@property (assign,nonatomic) BOOL hidden; 
@property (retain,nonatomic) UIColor * backgroundColor; 
-(BOOL)isHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithCoder:(id)arg1 ;
@end

