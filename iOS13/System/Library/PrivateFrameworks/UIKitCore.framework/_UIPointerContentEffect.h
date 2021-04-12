/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIPointerRegion, UIPointerStyle, UIPointerInteractionAnimator, _UIPointerEffectPlatterView, UIView;

@interface _UIPointerContentEffect : NSObject {

	struct {
		BOOL isRearrangingEffectViews;
		BOOL sourceViewDidAllowEdgeAntialiasing;
		BOOL sourceViewDidAlignContentsToPixels;
	}  _flags;
	BOOL _pressed;
	UIPointerRegion* _region;
	UIPointerStyle* _style;
	UIPointerInteractionAnimator* _entranceAnimator;
	UIPointerInteractionAnimator* _exitAnimator;
	_UIPointerEffectPlatterView* _platterView;
	UIView* _lumaSamplingBackdrop;
	UIView* _pointerPortal;
	/*^block*/id _completion;
	long long _state;
	unsigned long long _animationCount;
	UIView* _positionReferenceView;
	UIView* _sublayerObservationView;
	UIView* _boundsObservationView;
	CGPoint _initialEffectPlatterPosition;

}

@property (nonatomic,retain) _UIPointerEffectPlatterView * platterView;                    //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) UIView * lumaSamplingBackdrop;                         //@synthesize lumaSamplingBackdrop=_lumaSamplingBackdrop - In the implementation block
@property (assign,nonatomic,__weak) UIView * pointerPortal;                                //@synthesize pointerPortal=_pointerPortal - In the implementation block
@property (nonatomic,retain) UIPointerStyle * style;                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIPointerRegion * region;                                       //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long animationCount;                            //@synthesize animationCount=_animationCount - In the implementation block
@property (assign,nonatomic,__weak) UIView * positionReferenceView;                        //@synthesize positionReferenceView=_positionReferenceView - In the implementation block
@property (assign,nonatomic,__weak) UIView * sublayerObservationView;                      //@synthesize sublayerObservationView=_sublayerObservationView - In the implementation block
@property (assign,nonatomic,__weak) UIView * boundsObservationView;                        //@synthesize boundsObservationView=_boundsObservationView - In the implementation block
@property (assign,nonatomic) CGPoint initialEffectPlatterPosition;                         //@synthesize initialEffectPlatterPosition=_initialEffectPlatterPosition - In the implementation block
@property (nonatomic,retain) UIPointerInteractionAnimator * entranceAnimator;              //@synthesize entranceAnimator=_entranceAnimator - In the implementation block
@property (nonatomic,retain) UIPointerInteractionAnimator * exitAnimator;                  //@synthesize exitAnimator=_exitAnimator - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                //@synthesize pressed=_pressed - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)state;
-(UIPointerStyle *)style;
-(void)setStyle:(UIPointerStyle *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)end;
-(void)begin;
-(UIPointerRegion *)region;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(unsigned long long)animationCount;
-(void)setAnimationCount:(unsigned long long)arg1 ;
-(void)setPlatterView:(_UIPointerEffectPlatterView *)arg1 ;
-(_UIPointerEffectPlatterView *)platterView;
-(void)setRegion:(UIPointerRegion *)arg1 ;
-(void)setStyle:(id)arg1 andRegion:(id)arg2 ;
-(void)_cleanUpObservation;
-(void)_commitPointerStyleToArbiterWithCompletion:(/*^block*/id)arg1 ;
-(void)_updatePlatterView:(id)arg1 forStyle:(id)arg2 ;
-(void)_updateFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_createAndInstallPlatterView;
-(CGPoint)initialEffectPlatterPosition;
-(UIPointerInteractionAnimator *)exitAnimator;
-(UIPointerInteractionAnimator *)entranceAnimator;
-(void)_tearDownPlatterView;
-(void)_modifyEffectContainerViewHierarchy:(/*^block*/id)arg1 ;
-(void)_clearArbiterPointerStyleWithCompletion:(/*^block*/id)arg1 ;
-(void)setPointerPortal:(UIView *)arg1 ;
-(void)setLumaSamplingBackdrop:(UIView *)arg1 ;
-(void)_ensureRelativeEffectViewOrderInContainer;
-(void)setPositionReferenceView:(UIView *)arg1 ;
-(void)setSublayerObservationView:(UIView *)arg1 ;
-(UIView *)sublayerObservationView;
-(void)setInitialEffectPlatterPosition:(CGPoint)arg1 ;
-(void)_anchorPlatterView:(id)arg1 toPreview:(id)arg2 updateBounds:(BOOL)arg3 ;
-(void)setBoundsObservationView:(UIView *)arg1 ;
-(UIView *)boundsObservationView;
-(UIView *)positionReferenceView;
-(UIView *)lumaSamplingBackdrop;
-(UIView *)pointerPortal;
-(id)initWithStyle:(id)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setEntranceAnimator:(UIPointerInteractionAnimator *)arg1 ;
-(void)setExitAnimator:(UIPointerInteractionAnimator *)arg1 ;
@end

