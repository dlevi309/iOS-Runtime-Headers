/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	BOOL _unreleasedHighlight;
	UILabel* _unreleasedBanner;
	UIKeyboardEmoji* _emoji;

}

@property (nonatomic,retain) UILabel * unreleasedBanner;              //@synthesize unreleasedBanner=_unreleasedBanner - In the implementation block
@property (nonatomic,copy) UIKeyboardEmoji * emoji;                   //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long emojiFontSize; 
@property (assign,nonatomic) BOOL unreleasedHighlight;                //@synthesize unreleasedHighlight=_unreleasedHighlight - In the implementation block
-(id)debugDescription;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIKeyboardEmoji *)emoji;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(void)setEmojiFontSize:(long long)arg1 ;
-(void)setUnreleasedHighlight:(BOOL)arg1 ;
-(UILabel *)unreleasedBanner;
-(long long)emojiFontSize;
-(void)setUnreleasedBanner:(UILabel *)arg1 ;
-(BOOL)unreleasedHighlight;
@end

