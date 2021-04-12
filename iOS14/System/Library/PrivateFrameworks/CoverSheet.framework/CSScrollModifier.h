/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/BSUIScrollViewDelegate.h>

@class UIView, NSString;

@interface CSScrollModifier : NSObject <PTSettingsKeyObserver, BSUIScrollViewDelegate> {

	UIView* _targetView;
	BOOL _hasDraggedSinceReset;
	BOOL _cancelled;
	CGPoint _firstLocation;
	CGPoint _lastLocation;
	double _minSwipePercentageOfScreen;
	double _inertialMultiplier;
	double _initialScrollViewOffsetX;
	double _accumulatedDrag;
	double _maxAccumulatedDragThreshold;
	BOOL _recognized;
	BOOL _cancelScrollingIfTooMuchDrag;
	double _maxScrollDistance;
	double _accumulatedDragThresholdPercentage;
	double _maxDragFromVerticalPerFrame;
	double _powerOfVerticalDirectionSine2;
	double _inertialMultiplierSigmoidBase;
	double _inertialMultiplierSigmoidRange;
	double _inertialMultiplierSigmoidPivot;
	double _inertialMultiplierSigmoidAlpha;
	double _minPercentageSigmoidBase;
	double _minPercentageSigmoidRange;
	double _minPercentageSigmoidPivot;
	double _minPercentageSigmoidAlpha;

}

@property (nonatomic,readonly) BOOL recognized;                                      //@synthesize recognized=_recognized - In the implementation block
@property (assign,nonatomic) double maxScrollDistance;                               //@synthesize maxScrollDistance=_maxScrollDistance - In the implementation block
@property (assign,nonatomic) BOOL cancelScrollingIfTooMuchDrag;                      //@synthesize cancelScrollingIfTooMuchDrag=_cancelScrollingIfTooMuchDrag - In the implementation block
@property (assign,nonatomic) double accumulatedDragThresholdPercentage;              //@synthesize accumulatedDragThresholdPercentage=_accumulatedDragThresholdPercentage - In the implementation block
@property (assign,nonatomic) double maxDragFromVerticalPerFrame;                     //@synthesize maxDragFromVerticalPerFrame=_maxDragFromVerticalPerFrame - In the implementation block
@property (assign,nonatomic) double powerOfVerticalDirectionSine2;                   //@synthesize powerOfVerticalDirectionSine2=_powerOfVerticalDirectionSine2 - In the implementation block
@property (assign,nonatomic) double inertialMultiplierSigmoidBase;                   //@synthesize inertialMultiplierSigmoidBase=_inertialMultiplierSigmoidBase - In the implementation block
@property (assign,nonatomic) double inertialMultiplierSigmoidRange;                  //@synthesize inertialMultiplierSigmoidRange=_inertialMultiplierSigmoidRange - In the implementation block
@property (assign,nonatomic) double inertialMultiplierSigmoidPivot;                  //@synthesize inertialMultiplierSigmoidPivot=_inertialMultiplierSigmoidPivot - In the implementation block
@property (assign,nonatomic) double inertialMultiplierSigmoidAlpha;                  //@synthesize inertialMultiplierSigmoidAlpha=_inertialMultiplierSigmoidAlpha - In the implementation block
@property (assign,nonatomic) double minPercentageSigmoidBase;                        //@synthesize minPercentageSigmoidBase=_minPercentageSigmoidBase - In the implementation block
@property (assign,nonatomic) double minPercentageSigmoidRange;                       //@synthesize minPercentageSigmoidRange=_minPercentageSigmoidRange - In the implementation block
@property (assign,nonatomic) double minPercentageSigmoidPivot;                       //@synthesize minPercentageSigmoidPivot=_minPercentageSigmoidPivot - In the implementation block
@property (assign,nonatomic) double minPercentageSigmoidAlpha;                       //@synthesize minPercentageSigmoidAlpha=_minPercentageSigmoidAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)minPercentageSigmoidAlpha;
-(BOOL)cancelScrollingIfTooMuchDrag;
-(double)inertialMultiplierSigmoidRange;
-(double)maxScrollDistance;
-(void)_loadFromSettings:(id)arg1 ;
-(void)setAccumulatedDragThresholdPercentage:(double)arg1 ;
-(double)powerOfVerticalDirectionSine2;
-(void)setMinPercentageSigmoidRange:(double)arg1 ;
-(void)setInertialMultiplierSigmoidAlpha:(double)arg1 ;
-(double)inertialMultiplierSigmoidAlpha;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(double)maxDragFromVerticalPerFrame;
-(void)setInertialMultiplierSigmoidBase:(double)arg1 ;
-(void)setMinPercentageSigmoidPivot:(double)arg1 ;
-(double)minPercentageSigmoidBase;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setMaxScrollDistance:(double)arg1 ;
-(double)minPercentageSigmoidRange;
-(double)accumulatedDragThresholdPercentage;
-(void)setMinPercentageSigmoidAlpha:(double)arg1 ;
-(void)reset;
-(double)inertialMultiplierSigmoidPivot;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setCancelScrollingIfTooMuchDrag:(BOOL)arg1 ;
-(void)setPowerOfVerticalDirectionSine2:(double)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)setMaxDragFromVerticalPerFrame:(double)arg1 ;
-(double)minPercentageSigmoidPivot;
-(void)setInertialMultiplierSigmoidPivot:(double)arg1 ;
-(void)setInertialMultiplierSigmoidRange:(double)arg1 ;
-(void)dealloc;
-(void)setMinPercentageSigmoidBase:(double)arg1 ;
-(double)inertialMultiplierSigmoidBase;
-(double)_horizontalProgressSubtractionFromVertical:(CGPoint)arg1 ;
-(void)_updateScrollParameters;
-(BOOL)scrollFromRightToLeft;
-(CGPoint)scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(BOOL)recognized;
@end

