/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardSplitTransitionView.h>

@class CALayer, UIKBCacheToken, NSMutableDictionary;

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {

	CALayer* _container;
	CALayer* _frontFace;
	CALayer* _backFace;
	CALayer* _frontDarkening;
	CALayer* _backDarkening;
	CALayer* _backDarkeningLeft;
	CALayer* _backDarkeningRight;
	BOOL _showingFrontFace;
	UIKBCacheToken* _startKeyplaneToken;
	UIKBCacheToken* _endKeyplaneToken;
	NSMutableDictionary* _controlKeys;
	SCD_Struct_UI62 _rebuildFlags;

}

@property (assign,getter=isShowingFrontFace,nonatomic) BOOL showingFrontFace;              //@synthesize showingFrontFace=_showingFrontFace - In the implementation block
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(BOOL)transitionIsVisible;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)rebuildTransition;
-(void)_flipToFront:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)rebuildControlSlicesForKeyName:(id)arg1 ;
-(void)updateMoreIntlKey:(id)arg1 asStart:(BOOL)arg2 withRect:(CGRect)arg3 showIntl:(BOOL)arg4 showDictKey:(BOOL)arg5 ;
-(void)rebuildMoreIntlKeys;
-(void)rebuildShiftSlices;
-(void)rebuildReturnSlices;
-(void)updateTransition;
-(void)setShowingFrontFace:(BOOL)arg1 ;
-(void)rebuildBackgroundTransition;
-(void)_delayedUpdateTransition;
-(BOOL)isShowingFrontFace;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(void)dealloc;
@end

