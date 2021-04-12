/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardScrollModifierSettings : PTSettings {

	BOOL _cancelScrollingIfTooMuchDrag;
	long long _strategy;
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

@property (assign,nonatomic) long long strategy;                                     //@synthesize strategy=_strategy - In the implementation block
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
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(long long)strategy;
-(void)setStrategy:(long long)arg1 ;
-(double)maxScrollDistance;
-(void)setMaxScrollDistance:(double)arg1 ;
-(BOOL)cancelScrollingIfTooMuchDrag;
-(void)setCancelScrollingIfTooMuchDrag:(BOOL)arg1 ;
-(double)accumulatedDragThresholdPercentage;
-(void)setAccumulatedDragThresholdPercentage:(double)arg1 ;
-(double)maxDragFromVerticalPerFrame;
-(void)setMaxDragFromVerticalPerFrame:(double)arg1 ;
-(double)powerOfVerticalDirectionSine2;
-(void)setPowerOfVerticalDirectionSine2:(double)arg1 ;
-(double)inertialMultiplierSigmoidBase;
-(void)setInertialMultiplierSigmoidBase:(double)arg1 ;
-(double)inertialMultiplierSigmoidRange;
-(void)setInertialMultiplierSigmoidRange:(double)arg1 ;
-(double)inertialMultiplierSigmoidPivot;
-(void)setInertialMultiplierSigmoidPivot:(double)arg1 ;
-(double)inertialMultiplierSigmoidAlpha;
-(void)setInertialMultiplierSigmoidAlpha:(double)arg1 ;
-(double)minPercentageSigmoidBase;
-(void)setMinPercentageSigmoidBase:(double)arg1 ;
-(double)minPercentageSigmoidRange;
-(void)setMinPercentageSigmoidRange:(double)arg1 ;
-(double)minPercentageSigmoidPivot;
-(void)setMinPercentageSigmoidPivot:(double)arg1 ;
-(double)minPercentageSigmoidAlpha;
-(void)setMinPercentageSigmoidAlpha:(double)arg1 ;
@end

