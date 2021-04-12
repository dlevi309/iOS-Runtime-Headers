/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUTilingViewSettings : PXSettings {

	BOOL _useSpringAnimations;
	BOOL _useSystemSpringAnimations;
	BOOL _useOvershootingSpringAnimations;
	BOOL _allowPaging;
	BOOL _allowPreheating;
	BOOL _allowTileReuse;
	BOOL _allowsEdgeAntialiasing;
	BOOL _carryOverVelocities;
	BOOL _tintTiles;
	BOOL _showVisibleRects;
	BOOL _rotateDisappearingTiles;
	BOOL _showSnapshottableTiles;
	double _animationDragCoefficient;
	double _springAnimationDuration;
	double _defaultAnimationDuration;
	double _transitionDuration;
	long long _transitionProgressBehavior;
	double _interactiveTransitionBackgroundDimming;
	double _transitionChromeDelay;

}

@property (assign,nonatomic) double animationDragCoefficient;                            //@synthesize animationDragCoefficient=_animationDragCoefficient - In the implementation block
@property (assign,nonatomic) BOOL useSpringAnimations;                                   //@synthesize useSpringAnimations=_useSpringAnimations - In the implementation block
@property (assign,nonatomic) BOOL useSystemSpringAnimations;                             //@synthesize useSystemSpringAnimations=_useSystemSpringAnimations - In the implementation block
@property (assign,nonatomic) double springAnimationDuration;                             //@synthesize springAnimationDuration=_springAnimationDuration - In the implementation block
@property (assign,nonatomic) double defaultAnimationDuration;                            //@synthesize defaultAnimationDuration=_defaultAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL useOvershootingSpringAnimations;                       //@synthesize useOvershootingSpringAnimations=_useOvershootingSpringAnimations - In the implementation block
@property (assign,nonatomic) double transitionDuration;                                  //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) long long transitionProgressBehavior;                       //@synthesize transitionProgressBehavior=_transitionProgressBehavior - In the implementation block
@property (assign,nonatomic) double interactiveTransitionBackgroundDimming;              //@synthesize interactiveTransitionBackgroundDimming=_interactiveTransitionBackgroundDimming - In the implementation block
@property (assign,nonatomic) double transitionChromeDelay;                               //@synthesize transitionChromeDelay=_transitionChromeDelay - In the implementation block
@property (assign,nonatomic) BOOL allowPaging;                                           //@synthesize allowPaging=_allowPaging - In the implementation block
@property (assign,nonatomic) BOOL allowPreheating;                                       //@synthesize allowPreheating=_allowPreheating - In the implementation block
@property (assign,nonatomic) BOOL allowTileReuse;                                        //@synthesize allowTileReuse=_allowTileReuse - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
@property (assign,nonatomic) BOOL carryOverVelocities;                                   //@synthesize carryOverVelocities=_carryOverVelocities - In the implementation block
@property (assign,nonatomic) BOOL tintTiles;                                             //@synthesize tintTiles=_tintTiles - In the implementation block
@property (assign,nonatomic) BOOL showVisibleRects;                                      //@synthesize showVisibleRects=_showVisibleRects - In the implementation block
@property (assign,nonatomic) BOOL rotateDisappearingTiles;                               //@synthesize rotateDisappearingTiles=_rotateDisappearingTiles - In the implementation block
@property (assign,nonatomic) BOOL showSnapshottableTiles;                                //@synthesize showSnapshottableTiles=_showSnapshottableTiles - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setTransitionDuration:(double)arg1 ;
-(id)parentSettings;
-(void)setAllowPaging:(BOOL)arg1 ;
-(void)setDefaultValues;
-(BOOL)allowsEdgeAntialiasing;
-(void)setUseSpringAnimations:(BOOL)arg1 ;
-(void)setAnimationDragCoefficient:(double)arg1 ;
-(double)transitionDuration;
-(BOOL)useOvershootingSpringAnimations;
-(void)setTransitionChromeDelay:(double)arg1 ;
-(BOOL)allowTileReuse;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(void)setDefaultAnimationDuration:(double)arg1 ;
-(double)defaultAnimationDuration;
-(void)setShowSnapshottableTiles:(BOOL)arg1 ;
-(void)setShowVisibleRects:(BOOL)arg1 ;
-(void)setAllowTileReuse:(BOOL)arg1 ;
-(BOOL)allowPaging;
-(BOOL)useSystemSpringAnimations;
-(void)setSpringAnimationDuration:(double)arg1 ;
-(void)setInteractiveTransitionBackgroundDimming:(double)arg1 ;
-(BOOL)useSpringAnimations;
-(BOOL)carryOverVelocities;
-(BOOL)allowPreheating;
-(long long)transitionProgressBehavior;
-(double)transitionChromeDelay;
-(BOOL)showSnapshottableTiles;
-(BOOL)tintTiles;
-(void)setRotateDisappearingTiles:(BOOL)arg1 ;
-(BOOL)rotateDisappearingTiles;
-(BOOL)showVisibleRects;
-(void)setUseOvershootingSpringAnimations:(BOOL)arg1 ;
-(void)setUseSystemSpringAnimations:(BOOL)arg1 ;
-(void)setTransitionProgressBehavior:(long long)arg1 ;
-(double)interactiveTransitionBackgroundDimming;
-(void)setCarryOverVelocities:(BOOL)arg1 ;
-(void)setTintTiles:(BOOL)arg1 ;
-(double)animationDragCoefficient;
-(double)springAnimationDuration;
-(void)setAllowPreheating:(BOOL)arg1 ;
@end

