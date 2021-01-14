/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIButton.h>

@class UIColor;

@interface UIAssistantBarRoundedButtonViewButton : UIButton {

	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIColor* _normalTitleColor;
	UIColor* _highlightedTitleColor;

}

@property (nonatomic,retain) UIColor * normalBackgroundColor;                   //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * normalTitleColor;                        //@synthesize normalTitleColor=_normalTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTitleColor;                   //@synthesize highlightedTitleColor=_highlightedTitleColor - In the implementation block
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)normalTitleColor;
-(void)_updateBackgroundAndTitleColor;
-(UIColor *)highlightedTitleColor;
-(id)_currentTitleColor;
-(UIColor *)normalBackgroundColor;
-(id)_titleColorForState:(unsigned long long)arg1 ;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setNormalTitleColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

