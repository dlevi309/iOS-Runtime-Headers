/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)promptHeight;
-(void)_updatePromptLabel;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

