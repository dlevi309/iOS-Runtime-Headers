/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)unreadBubbleImage;
+(id)badgeNumberLabelTextColor;
+(double)badgePadding;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(BOOL)_shouldUseRoundStyle;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetLocale;
-(void)badgeWithInteger:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

