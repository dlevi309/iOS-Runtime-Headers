/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)contentDidChange;
-(void)_updateHeightForCurrentTraits;
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_subtitleTextColor;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(double)_titleFontSizeWhenMini:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(double)_verticalOffsetForSubtitleWhenMini:(BOOL)arg1 ;
-(BOOL)_needsToLayoutTitleLabel;
-(void)setSubtitle:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(UIEdgeInsets)_contentInsetsWithExclusionRects:(id)arg1 wantsUniformHorizontalInsets:(BOOL)arg2 ;
-(double)_topPaddingForTitleWhenMini:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_updateTrailingBarButtonItemsAlpha;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_subtitleFontSizeWhenMini:(BOOL)arg1 ;
-(NSString *)title;
@end

