/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSAttributedString;

@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {

	UILabel* _animationFromLabel;
	UILabel* _animationToLabel;
	unsigned long long _nestedAnimationCount;
	NSAttributedString* _displayedEmojiString;
	UILabel* _emojiLabel;

}

@property (nonatomic,readonly) UILabel * emojiLabel;                                 //@synthesize emojiLabel=_emojiLabel - In the implementation block
@property (nonatomic,retain) NSAttributedString * displayedEmojiString;              //@synthesize displayedEmojiString=_displayedEmojiString - In the implementation block
+(id)_createEmojiLabel;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UILabel *)emojiLabel;
-(void)layoutSubviews;
-(void)setDisplayedEmojiString:(NSAttributedString *)arg1 ;
-(void)setDisplayedEmojiString:(id)arg1 animated:(BOOL)arg2 withAnimationOffset:(unsigned long long)arg3 ;
-(NSAttributedString *)displayedEmojiString;
-(void)setHighlighted:(BOOL)arg1 ;
@end

