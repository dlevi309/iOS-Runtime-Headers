/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIKeyboardKeyplaneTransitionDelegate, UIKeyboardSplitTransitionDataSource;
@class CADisplayLink, UIKeyboardSliceSet, NSArray;

@interface UIKeyboardSplitTransitionView : UIView {

	double _currentProgress;
	double _liftOffProgress;
	double _finishProgress;
	double _finishDuration;
	double _finalTransitionStartTime;
	CADisplayLink* _displayLink;
	/*^block*/id _completionBlock;
	CGRect _startFrame;
	CGRect _endFrame;
	id<UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
	id<UIKeyboardSplitTransitionDataSource> _transitionDataSource;
	BOOL _centerFilled;
	BOOL _isRebuilding;
	BOOL _isSplitTranslation;
	UIKeyboardSliceSet* _sliceSet;

}

@property (copy) id completionBlock;                                                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate;               //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardSplitTransitionDataSource> splitTransitionDataSource;              //@synthesize transitionDataSource=_transitionDataSource - In the implementation block
@property (readonly) NSArray * shadowLayers; 
@property (readonly) NSArray * backgroundLayers; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)topDropShadow;
-(void)finalizeTransition;
-(void)transitionToFinalState:(id)arg1 ;
-(NSArray *)backgroundLayers;
-(id)centerDropShadow;
-(void)setSplitTransitionDelegate:(id<UIKeyboardKeyplaneTransitionDelegate>)arg1 ;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(id)bottomDropShadow;
-(id)outerCenterDropShadow;
-(id)colorsForBackgroundLayer:(int)arg1 ;
-(BOOL)shouldAllowRubberiness;
-(BOOL)transitionIsVisible;
-(void)transformForProgress:(double)arg1 ;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)initializeLayers;
-(CGSize)sizeForShadowLayer:(int)arg1 ;
-(CGRect)rectEnclosingKeyplane:(id)arg1 ;
-(CGImageRef)keyImageWithToken:(id)arg1 ;
-(BOOL)showDictationKey;
-(id<UIKeyboardSplitTransitionDataSource>)splitTransitionDataSource;
-(BOOL)showIntlKey;
-(void)setSplitTransitionDataSource:(id<UIKeyboardSplitTransitionDataSource>)arg1 ;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(NSArray *)shadowLayers;
-(BOOL)canDisplayTransition;
-(id<UIKeyboardKeyplaneTransitionDelegate>)splitTransitionDelegate;
-(void)updateWithProgress:(double)arg1 ;
-(void)finishWithProgress:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

