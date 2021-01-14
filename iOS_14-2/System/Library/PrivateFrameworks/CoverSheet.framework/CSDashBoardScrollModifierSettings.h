/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStrategy:(long long)arg1 ;
-(double)minPercentageSigmoidAlpha;
-(long long)strategy;
-(BOOL)cancelScrollingIfTooMuchDrag;
-(double)inertialMultiplierSigmoidRange;
-(double)maxScrollDistance;
-(void)setAccumulatedDragThresholdPercentage:(double)arg1 ;
-(double)powerOfVerticalDirectionSine2;
-(void)setMinPercentageSigmoidRange:(double)arg1 ;
-(void)setInertialMultiplierSigmoidAlpha:(double)arg1 ;
-(double)inertialMultiplierSigmoidAlpha;
-(double)maxDragFromVerticalPerFrame;
-(void)setInertialMultiplierSigmoidBase:(double)arg1 ;
-(void)setMinPercentageSigmoidPivot:(double)arg1 ;
-(double)minPercentageSigmoidBase;
-(void)setMaxScrollDistance:(double)arg1 ;
-(double)minPercentageSigmoidRange;
-(double)accumulatedDragThresholdPercentage;
-(void)setMinPercentageSigmoidAlpha:(double)arg1 ;
-(double)inertialMultiplierSigmoidPivot;
-(void)setCancelScrollingIfTooMuchDrag:(BOOL)arg1 ;
-(void)setPowerOfVerticalDirectionSine2:(double)arg1 ;
-(void)setMaxDragFromVerticalPerFrame:(double)arg1 ;
-(double)minPercentageSigmoidPivot;
-(void)setInertialMultiplierSigmoidPivot:(double)arg1 ;
-(void)setInertialMultiplierSigmoidRange:(double)arg1 ;
-(void)setMinPercentageSigmoidBase:(double)arg1 ;
-(double)inertialMultiplierSigmoidBase;
@end

