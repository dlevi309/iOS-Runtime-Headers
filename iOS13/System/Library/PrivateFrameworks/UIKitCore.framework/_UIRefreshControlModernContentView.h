/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _scrollViewVerticalFeedbackGeneratorEnabled;
	BOOL _areAnimationsValid;
	double _currentPopStiffness;
	double _impactIntensity;

}

@property (assign,nonatomic) BOOL areAnimationsValid;                 //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double currentPopStiffness;              //@synthesize currentPopStiffness=_currentPopStiffness - In the implementation block
@property (assign,nonatomic) double impactIntensity;                  //@synthesize impactIntensity=_impactIntensity - In the implementation block
-(void)setAttributedTitle:(id)arg1 ;
-(id)attributedTitle;
-(long long)style;
-(void)_tick;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(UILabel *)textLabel;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(void)setCurrentPopStiffness:(double)arg1 ;
-(void)setImpactIntensity:(double)arg1 ;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(double)impactIntensity;
-(id)_effectiveTintColor;
-(void)_removeAllAnimations;
-(void)_resetToRevealingState;
-(void)_updateTimeOffsetOfRelevantLayers;
-(void)_spin;
-(void)_snappingMagic;
-(void)_tickDueToProgrammaticRefresh;
-(void)_goAway;
-(void)_cleanUpAfterRevealing;
-(void)_setSpunAppearance;
-(id)_effectiveTintColorWithAlpha:(double)arg1 ;
-(CGAffineTransform)_bloomedSeedTransform;
-(CGAffineTransform)_unbloomedSeedTransform;
-(void)_setUnbloomedAppearance;
-(void)_reveal;
-(void)_setBloomedAppearance;
-(void)_unbloom;
-(double)currentPopStiffness;
-(void)_bloom;
-(double)_currentTimeOffset;
-(double)_percentageShowing;
-(double)_maximumSnappingHeightScalingForScrollViewHeight;
-(BOOL)areAnimationsValid;
-(void)setAreAnimationsValid:(BOOL)arg1 ;
@end

