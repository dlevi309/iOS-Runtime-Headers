/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/_UINavigationBarTitleView.h>

@class UILabel, NSString;

@interface MFMailComposeNavigationBarTitleView : _UINavigationBarTitleView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)layoutMarginsDidChange;
-(void)didMoveToWindow;
-(void)contentDidChange;
-(id)_subtitleTextColor;
-(void)_updateHeightForCurrentTraits;
-(void)setSubtitle:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(BOOL)_needsToLayoutTitleLabel;
-(void)_updateTrailingBarButtonItemsAlpha;
-(UIEdgeInsets)_contentInsetsWithExclusionRects:(id)arg1 wantsUniformHorizontalInsets:(BOOL)arg2 ;
-(double)_titleFontSizeWhenMini:(BOOL)arg1 ;
-(double)_subtitleFontSizeWhenMini:(BOOL)arg1 ;
-(double)_verticalOffsetForSubtitleWhenMini:(BOOL)arg1 ;
-(double)_topPaddingForTitleWhenMini:(BOOL)arg1 ;
@end

