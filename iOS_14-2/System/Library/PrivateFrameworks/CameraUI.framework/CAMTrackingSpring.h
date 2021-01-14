/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMSpring.h>

@class CAMSpring;

@interface CAMTrackingSpring : CAMSpring {

	CAMSpring* __settleProgressSpring;
	double __convergenceStartValue;
	CGSize __secondaryTarget;

}

@property (setter=_setSettlingSpring:,nonatomic,retain) CAMSpring * _settleProgressSpring;              //@synthesize _settleProgressSpring=__settleProgressSpring - In the implementation block
@property (assign,setter=_setSecondaryTarget:,nonatomic) CGSize _secondaryTarget;                       //@synthesize _secondaryTarget=__secondaryTarget - In the implementation block
@property (assign,setter=_convergenceStartValue:,nonatomic) double _convergenceStartValue;              //@synthesize _convergenceStartValue=__convergenceStartValue - In the implementation block
@property (nonatomic,readonly) double convergenceProgress; 
@property (nonatomic,readonly) BOOL hasSecondaryTarget; 
-(void)resetToValue:(double)arg1 ;
-(BOOL)isConverged;
-(id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3 ;
-(void)updateForTimestamp:(double)arg1 ;
-(CAMSpring *)_settleProgressSpring;
-(void)_setSettlingSpring:(id)arg1 ;
-(void)_convergenceStartValue:(double)arg1 ;
-(void)_beginConverging;
-(CGSize)_secondaryTarget;
-(void)_setSecondaryTarget:(CGSize)arg1 ;
-(void)setSecondaryTarget:(double)arg1 withStrength:(double)arg2 animated:(BOOL)arg3 ;
-(void)resetToValue:(double)arg1 animated:(BOOL)arg2 ;
-(void)removeSecondaryTargetAnimated:(BOOL)arg1 ;
-(BOOL)hasSecondaryTarget;
-(double)convergenceProgress;
-(double)_convergenceStartValue;
-(void)setTarget:(double)arg1 animated:(BOOL)arg2 ;
@end

