/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardEmojiKeyView.h>

@protocol UIKBEmojiHitTestResponder;
@class UIView, UIKeyboardEmojiGraphicsTraits, UIResponder;

@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView {

	unsigned long long _selectedIndex;
	UIView* _scrubView;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	BOOL _isScrubbing;
	double _scrubStartXLocation;
	UIResponder*<UIKBEmojiHitTestResponder> _hitTestResponder;

}

@property (nonatomic,retain) UIView * scrubView;                                                    //@synthesize scrubView=_scrubView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;                   //@synthesize emojiGraphicsTraits=_emojiGraphicsTraits - In the implementation block
@property (assign,nonatomic) UIResponder*<UIKBEmojiHitTestResponder> hitTestResponder;              //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (assign) unsigned long long selectedIndex;                                                //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)prepareForDisplay;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(void)setHitTestResponder:(UIResponder*<UIKBEmojiHitTestResponder>)arg1 ;
-(void)updateCategoryOnBar:(unsigned long long)arg1 ;
-(CGRect)categorySelectedCircleRect:(long long)arg1 ;
-(UIView *)scrubView;
-(UIResponder*<UIKBEmojiHitTestResponder>)hitTestResponder;
-(void)animateScrubberToRect:(CGRect)arg1 ;
-(CGRect)frameForDivider:(int)arg1 ;
-(unsigned long long)selectedIndexForTouches:(id)arg1 ;
-(void)updateCategory;
-(void)updateToCategory:(long long)arg1 ;
-(void)setScrubView:(UIView *)arg1 ;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(void)setEmojiGraphicsTraits:(UIKeyboardEmojiGraphicsTraits *)arg1 ;
@end

