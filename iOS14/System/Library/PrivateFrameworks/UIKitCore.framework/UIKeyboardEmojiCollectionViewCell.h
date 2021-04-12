/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji, UIView;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	BOOL _unreleasedHighlight;
	UILabel* _unreleasedBanner;
	UIKeyboardEmoji* _emoji;
	UIView* _navigationHighlightView;

}

@property (nonatomic,retain) UILabel * unreleasedBanner;                    //@synthesize unreleasedBanner=_unreleasedBanner - In the implementation block
@property (nonatomic,retain) UIView * navigationHighlightView;              //@synthesize navigationHighlightView=_navigationHighlightView - In the implementation block
@property (nonatomic,copy) UIKeyboardEmoji * emoji;                         //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long emojiFontSize; 
@property (assign,nonatomic) BOOL unreleasedHighlight;                      //@synthesize unreleasedHighlight=_unreleasedHighlight - In the implementation block
-(UIKeyboardEmoji *)emoji;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)debugDescription;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(void)setEmojiFontSize:(long long)arg1 ;
-(void)setUnreleasedHighlight:(BOOL)arg1 ;
-(UILabel *)unreleasedBanner;
-(UIView *)navigationHighlightView;
-(void)setNavigationHighlightView:(UIView *)arg1 ;
-(long long)emojiFontSize;
-(void)setUnreleasedBanner:(UILabel *)arg1 ;
-(BOOL)unreleasedHighlight;
@end

