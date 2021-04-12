/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRefreshControlContentView.h>

@class UIView, _UIRefreshControlModernReplicatorView, UILabel;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {

	BOOL _animationsAreValid;
	UIView* _replicatorContainer;
	_UIRefreshControlModernReplicatorView* _replicatorView;
	UIView* _seed;
	BOOL _hasFinishedRevealing;
	UILabel* _textLabel;
	BOOL _areAnimationsValid;
	BOOL _horizontallyCenteredFramesNeedUpdate;
	double _currentPopStiffness;
	double _impactIntensity;

}

@property (assign,nonatomic) BOOL areAnimationsValid;                                //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
@property (assign,nonatomic) BOOL horizontallyCenteredFramesNeedUpdate;              //@synthesize horizontallyCenteredFramesNeedUpdate=_horizontallyCenteredFramesNeedUpdate - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double currentPopStiffness;                             //@synthesize currentPopStiffness=_currentPopStiffness - In the implementation block
@property (assign,nonatomic) double impactIntensity;                                 //@synthesize impactIntensity=_impactIntensity - In the implementation block
-(id)attributedTitle;
-(double)currentPopStiffness;
-(void)setTintColor:(id)arg1 ;
-(void)_tick;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_removeAllAnimations;
-(id)_effectiveTintColorWithAlpha:(double)arg1 ;
-(void)_spin;
-(CGAffineTransform)_unbloomedSeedTransform;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(BOOL)horizontallyCenteredFramesNeedUpdate;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(BOOL)areAnimationsValid;
-(void)setAttributedTitle:(id)arg1 ;
-(void)_tickDueToProgrammaticRefresh;
-(CGAffineTransform)_bloomedSeedTransform;
-(void)_unbloom;
-(void)_updateTimeOffsetOfRelevantLayers;
-(double)_percentageShowing;
-(void)setHorizontallyCenteredFramesNeedUpdate:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_setUnbloomedAppearance;
-(void)_bloom;
-(void)_setBloomedAppearance;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)impactIntensity;
-(void)_reveal;
-(void)setAreAnimationsValid:(BOOL)arg1 ;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)_currentTimeOffset;
-(double)maximumSnappingHeight;
-(void)_setSpunAppearance;
-(void)_goAway;
-(void)_snappingMagic;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_cleanUpAfterRevealing;
-(void)_resetToRevealingState;
-(UILabel *)textLabel;
-(double)_maximumSnappingHeightScalingForScrollViewHeight;
-(long long)style;
-(void)setImpactIntensity:(double)arg1 ;
-(id)_effectiveTintColor;
-(void)setCurrentPopStiffness:(double)arg1 ;
@end

