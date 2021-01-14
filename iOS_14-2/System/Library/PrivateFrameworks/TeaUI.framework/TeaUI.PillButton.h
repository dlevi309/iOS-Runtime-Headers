/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface TeaUI.PillButton : UIButton {

	 contentOffset;
	 onTap;
	 _backgroundColor;

}

@property (assign,nonatomic) CGPoint contentOffset; 
@property (retain,nonatomic) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL enabled; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

