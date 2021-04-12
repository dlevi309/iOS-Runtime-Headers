/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObject.h>

@protocol ARUIRingGroupControllerDelegate;
@class ARUISpriteSheet, NSArray;

@interface ARUIRingGroupController : ARUIAnimatableObject {

	long long* _iconAnimationFrameNumbers;
	float _emptyOpacity;
	float _opacity;
	float _ringDiameter;
	float _ringIconSize;
	float _ringInterspacing;
	float _ringThickness;
	float _ringScale;
	float _trackOpacity;
	float _zRotation;
	long long _numberOfRings;
	ARUISpriteSheet* _spriteSheet;
	double _backingOrigin;
	double _additionalSpacingAtIndex;
	NSArray* _rings;
	id<ARUIRingGroupControllerDelegate> _delegate;
	CGPoint _center;

}

@property (nonatomic,readonly) NSArray * rings; 
@property (nonatomic,retain) NSArray * rings;                                                  //@synthesize rings=_rings - In the implementation block
@property (assign,nonatomic,__weak) id<ARUIRingGroupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfRings;                                        //@synthesize numberOfRings=_numberOfRings - In the implementation block
@property (nonatomic,retain) ARUISpriteSheet * spriteSheet;                                    //@synthesize spriteSheet=_spriteSheet - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                   //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float emptyOpacity;                                               //@synthesize emptyOpacity=_emptyOpacity - In the implementation block
@property (assign,nonatomic) float opacity;                                                    //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) float ringDiameter;                                               //@synthesize ringDiameter=_ringDiameter - In the implementation block
@property (assign,nonatomic) float ringIconSize;                                               //@synthesize ringIconSize=_ringIconSize - In the implementation block
@property (assign,nonatomic) float ringInterspacing;                                           //@synthesize ringInterspacing=_ringInterspacing - In the implementation block
@property (assign,nonatomic) float ringThickness;                                              //@synthesize ringThickness=_ringThickness - In the implementation block
@property (assign,nonatomic) float ringScale;                                                  //@synthesize ringScale=_ringScale - In the implementation block
@property (assign,nonatomic) float trackOpacity;                                               //@synthesize trackOpacity=_trackOpacity - In the implementation block
@property (assign,nonatomic) float zRotation;                                                  //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic) double backingOrigin;                                             //@synthesize backingOrigin=_backingOrigin - In the implementation block
@property (assign,nonatomic) double additionalSpacingAtIndex;                                  //@synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex - In the implementation block
+(id)animationTimingFunction;
+(double)defaultAnimationDuration;
+(id)ringGroupControllerConfiguredForWatchWithRingType:(long long)arg1 withIcon:(BOOL)arg2 ;
+(id)ringGroupControllerConfiguredForCompanionWithRingType:(long long)arg1 withIcon:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id<ARUIRingGroupControllerDelegate>)delegate;
-(void)setDelegate:(id<ARUIRingGroupControllerDelegate>)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)update:(double)arg1 ;
-(void)_setNeedsUpdate;
-(float)zRotation;
-(void)setZRotation:(float)arg1 ;
-(void)_setCenter:(CGPoint)arg1 ;
-(void)setRingThickness:(float)arg1 ;
-(void)setRingInterspacing:(float)arg1 ;
-(float)ringThickness;
-(float)ringInterspacing;
-(void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setEmptyOpacity:(float)arg1 ;
-(void)setSpriteSheet:(ARUISpriteSheet *)arg1 ;
-(void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithNumberOfRings:(long long)arg1 ;
-(void)setRingDiameter:(float)arg1 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(void)setTrackOpacity:(float)arg1 ;
-(float)emptyOpacity;
-(void)setRingBoundsDiameter:(float)arg1 ;
-(void)setSkewAdjustmentMatrix:(SCD_Struct_AR1)arg1 ;
-(float)trackOpacity;
-(BOOL)ringsAreEmpty;
-(NSArray *)rings;
-(ARUISpriteSheet *)spriteSheet;
-(float)ringDiameter;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)addCelebration:(id)arg1 toRingAtIndex:(long long)arg2 ;
-(void)removeCelebration:(id)arg1 fromRingAtIndex:(long long)arg2 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 contrastColor:(id)arg3 ofRingAtIndex:(long long)arg4 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setRingIconSize:(float)arg1 ;
-(void)setRingScale:(float)arg1 ;
-(void)_setEmptyOpacity:(float)arg1 ;
-(void)_setOpacity:(float)arg1 ;
-(void)_setRingDiameter:(float)arg1 ;
-(void)_setRingIconSize:(float)arg1 ;
-(void)_setRingInterspacing:(float)arg1 ;
-(void)_setRingThickness:(float)arg1 ;
-(void)_setRingScale:(float)arg1 ;
-(void)_setTrackOpacity:(float)arg1 ;
-(void)_setZRotation:(float)arg1 ;
-(float)ringIconSize;
-(float)ringScale;
-(void)_removeAllRingAnimationsForPropertyType:(unsigned long long)arg1 ;
-(void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2 ;
-(unsigned long long)_lastRingFrameNumberForRingAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfRings;
-(double)backingOrigin;
-(void)setBackingOrigin:(double)arg1 ;
-(double)additionalSpacingAtIndex;
-(void)setAdditionalSpacingAtIndex:(double)arg1 ;
-(void)setRings:(NSArray *)arg1 ;
-(void)_setFloatValue:(float)arg1 forRingPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)_setFloatValue:(float)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)_setCGPointValue:(CGPoint)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)setFloatValue:(float)arg1 fromCurrentValue:(float)arg2 forRingPropertyType:(unsigned long long)arg3 ofRingAtIndex:(long long)arg4 animated:(BOOL)arg5 duration:(double)arg6 completion:(/*^block*/id)arg7 ;
-(void)setOpacity:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingInterspacing:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingIconPosition:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2 ;
-(float)diameterForRingAtIndex:(unsigned long long)arg1 ;
-(BOOL)_setCGPointValue:(CGPoint)arg1 forRingPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(BOOL)arg4 ;
-(double)_ringPercentageAdjustedForProximityToFull:(double)arg1 withRingDiameter:(double)arg2 thickness:(double)arg3 ;
-(double)_adjustedDurationForRingWithIndex:(long long)arg1 startPercentage:(double)arg2 targetPercentage:(double)arg3 defaultDuration:(double)arg4 ;
-(void)_configureIconWithStartingPercentage:(double)arg1 forRingAtIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setIconDotTextureOrigin:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 ;
-(void)setIconFirstFrameOrigin:(CGPoint)arg1 frameSize:(CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5 ;
@end

