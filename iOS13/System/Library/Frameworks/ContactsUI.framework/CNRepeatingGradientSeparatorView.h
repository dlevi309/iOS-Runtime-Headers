/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray;

@interface CNRepeatingGradientSeparatorView : UIView {

	UIColor* _startColor;
	UIColor* _endColor;
	long long _lineCount;

}

@property (nonatomic,readonly) NSArray * gradientColors; 
@property (nonatomic,retain) UIColor * startColor;                    //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,retain) UIColor * endColor;                      //@synthesize endColor=_endColor - In the implementation block
@property (assign,nonatomic) long long lineCount;                     //@synthesize lineCount=_lineCount - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)gradientColors;
-(long long)lineCount;
-(void)setLineCount:(long long)arg1 ;
-(void)_updateGradients;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(UIColor *)startColor;
-(UIColor *)endColor;
@end

