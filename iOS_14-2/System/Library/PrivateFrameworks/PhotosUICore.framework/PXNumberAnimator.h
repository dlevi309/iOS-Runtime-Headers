/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableNumberAnimator.h>
#import <libobjc.A.dylib/PXNumberAnimatorDisplayLinkTarget.h>

@protocol PXNumberAnimatorDisplayLinkTarget;
@class NSMutableArray, PXDisplayLink, NSString;

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator, PXNumberAnimatorDisplayLinkTarget> {

	BOOL _isPerformingChanges;
	SCD_Struct_PX38 _needsUpdateFlags;
	PXValueAnimationSpec _currentAnimationSpec;
	NSMutableArray* _animations;
	PXDisplayLink* _displayLink;
	BOOL _isBeingMutated;
	double _value;
	double _presentationValue;
	double _epsilon;
	NSString* _label;
	id<PXNumberAnimatorDisplayLinkTarget> _displayLinkTarget;

}

@property (assign,setter=_setPresentationValue:,nonatomic) double presentationValue;                      //@synthesize presentationValue=_presentationValue - In the implementation block
@property (assign,nonatomic,__weak) id<PXNumberAnimatorDisplayLinkTarget> displayLinkTarget;              //@synthesize displayLinkTarget=_displayLinkTarget - In the implementation block
@property (nonatomic,readonly) double value;                                                              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double epsilon;                                                            //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) double approximateVelocity; 
@property (nonatomic,readonly) BOOL isAnimating; 
@property (nonatomic,readonly) BOOL isBeingMutated;                                                       //@synthesize isBeingMutated=_isBeingMutated - In the implementation block
@property (nonatomic,copy) NSString * label;                                                              //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBeingMutated;
-(void)performChangesWithoutAnimation:(/*^block*/id)arg1 ;
-(id)init;
-(double)presentationValue;
-(void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(double)arg3 changes:(/*^block*/id)arg4 ;
-(void)didPerformChanges;
-(id)initWithValue:(double)arg1 ;
-(void)_updateIfNeeded;
-(void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(/*^block*/id)arg3 ;
-(void)setDisplayLinkTarget:(id<PXNumberAnimatorDisplayLinkTarget>)arg1 ;
-(void)_invalidatePresentationValue;
-(void)setValue:(double)arg1 ;
-(NSString *)description;
-(void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)arg1 changes:(/*^block*/id)arg2 ;
-(id<PXNumberAnimatorDisplayLinkTarget>)displayLinkTarget;
-(void)_setAnimating:(BOOL)arg1 ;
-(void)_setPresentationValue:(double)arg1 ;
-(id)initWithValue:(double)arg1 epsilon:(double)arg2 ;
-(void)_updatePresentationValueIfNeeded;
-(BOOL)_needsUpdate;
-(id)mutableChangeObject;
-(double)approximateVelocity;
-(void)setLabel:(NSString *)arg1 ;
-(void)_setNeedsUpdate;
-(double)epsilon;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isAnimating;
-(NSString *)label;
-(double)value;
-(void)_handleDisplayLink:(id)arg1 ;
@end

