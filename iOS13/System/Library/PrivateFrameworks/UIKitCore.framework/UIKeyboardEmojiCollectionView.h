/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionView.h>

@class UIKeyboardEmojiGraphicsTraits, UIResponder;

@interface UIKeyboardEmojiCollectionView : UICollectionView {

	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	UIResponder* _hitTestResponder;

}

@property (assign,nonatomic) UIResponder * hitTestResponder;                                  //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (retain,readonly) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;              //@synthesize emojiGraphicsTraits=_emojiGraphicsTraits - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)_currentScreenScale;
-(BOOL)_shouldReverseLayoutDirection;
-(void)setHitTestResponder:(UIResponder *)arg1 ;
-(UIResponder *)hitTestResponder;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3 ;
-(id)closestCellForPoint:(CGPoint)arg1 ;
@end

