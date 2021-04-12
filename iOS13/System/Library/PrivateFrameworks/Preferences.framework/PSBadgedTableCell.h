/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {

	UIImageView* _badgeImageView;
	UILabel* _badgeNumberLabel;
	long long _badgeInt;

}
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
+(double)badgePadding;
+(id)badgeNumberLabelTextColor;
+(id)unreadBubbleImage;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)badgeWithInteger:(long long)arg1 ;
-(void)resetLocale;
-(BOOL)_shouldUseRoundStyle;
@end

