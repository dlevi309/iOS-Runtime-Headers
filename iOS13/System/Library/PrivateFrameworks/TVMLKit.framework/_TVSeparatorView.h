/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface _TVSeparatorView : UIView {

	UIView* _line1;
	UIView* _line2;
	UIView* _separatorComponent;
	UIColor* _tintColor;
	double _lineHeight;

}

@property (assign,nonatomic,__weak) UIView * separatorComponent;              //@synthesize separatorComponent=_separatorComponent - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                             //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double lineHeight;                               //@synthesize lineHeight=_lineHeight - In the implementation block
+(id)separatorViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(double)lineHeight;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(UIView *)separatorComponent;
-(void)setSeparatorComponent:(UIView *)arg1 ;
@end

