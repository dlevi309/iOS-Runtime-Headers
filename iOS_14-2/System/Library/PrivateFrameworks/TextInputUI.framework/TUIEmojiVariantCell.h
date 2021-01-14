/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, EMFEmojiToken;

@interface TUIEmojiVariantCell : UIView {

	BOOL _highlighted;
	UILabel* _labelView;
	UIView* _backgroundView;
	EMFEmojiToken* _emojiToken;

}

@property (nonatomic,readonly) UILabel * labelView;                              //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) EMFEmojiToken * emojiToken;                       //@synthesize emojiToken=_emojiToken - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(UILabel *)labelView;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(EMFEmojiToken *)emojiToken;
-(id)initWithFrame:(CGRect)arg1 token:(id)arg2 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
@end

