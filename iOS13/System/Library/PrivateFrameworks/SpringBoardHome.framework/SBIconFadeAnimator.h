/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {

	UIView* _crossfadeView;
	BOOL _addedToWindow;
	BOOL _fadesReferenceView;

}

@property (assign,nonatomic) BOOL fadesReferenceView;              //@synthesize fadesReferenceView=_fadesReferenceView - In the implementation block
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_applyAlphaForFraction:(double)arg1 ;
-(BOOL)fadesReferenceView;
-(id)initWithAnimationContainer:(id)arg1 crossfadeView:(id)arg2 ;
-(void)setFadesReferenceView:(BOOL)arg1 ;
@end

