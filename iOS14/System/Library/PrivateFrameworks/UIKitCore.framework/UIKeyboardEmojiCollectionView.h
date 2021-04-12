/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)backgroundColor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIResponder *)hitTestResponder;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3 ;
-(id)closestCellForPoint:(CGPoint)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)_currentScreenScale;
-(void)setHitTestResponder:(UIResponder *)arg1 ;
-(void)dealloc;
@end

