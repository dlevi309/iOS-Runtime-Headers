/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIFont, NSString, UIColor;

@interface _UINavigationBarModernPromptView : UIView {

	UILabel* _promptLabel;
	UIFont* _font;
	NSString* _prompt;
	UIColor* _textColor;

}

@property (nonatomic,copy) NSString * prompt;                    //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) double promptHeight; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(UIColor *)textColor;
-(double)promptHeight;
-(void)_updatePromptLabel;
@end

