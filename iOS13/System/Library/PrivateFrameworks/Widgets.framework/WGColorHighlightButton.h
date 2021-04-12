/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface WGColorHighlightButton : UIButton {

	UIColor* _savedBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * savedBackgroundColor;                    //@synthesize savedBackgroundColor=_savedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)_updateRealBackgroundColor;
-(void)setSavedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)savedBackgroundColor;
@end

