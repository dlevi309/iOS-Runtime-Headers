/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateRealBackgroundColor;
-(void)setSavedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)savedBackgroundColor;
@end

