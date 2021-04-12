/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_titleColorForState:(unsigned long long)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)_updateBackgroundAndTitleColor;
-(UIColor *)highlightedTitleColor;
-(UIColor *)normalTitleColor;
-(id)_currentTitleColor;
-(UIColor *)normalBackgroundColor;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setNormalTitleColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleColor:(UIColor *)arg1 ;
@end

