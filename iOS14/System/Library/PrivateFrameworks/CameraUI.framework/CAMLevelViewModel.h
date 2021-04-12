/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMObservable.h>

@interface CAMLevelViewModel : CAMObservable {

	long long _currentIndicatorMode;
	double _currentIndicatorAlpha;
	double _desiredUpdateInterval;
	long long __desiredIndicatorMode;
	double __desiredModeBeganTime;
	UIOffset _currentIndicatorOffset;

}

@property (assign,setter=_setCurrentIndicatorMode:,nonatomic) long long currentIndicatorMode;                 //@synthesize currentIndicatorMode=_currentIndicatorMode - In the implementation block
@property (assign,setter=_setCurrentIndicatorOffset:,nonatomic) UIOffset currentIndicatorOffset;              //@synthesize currentIndicatorOffset=_currentIndicatorOffset - In the implementation block
@property (assign,setter=_setCurrentIndicatorAlpha:,nonatomic) double currentIndicatorAlpha;                  //@synthesize currentIndicatorAlpha=_currentIndicatorAlpha - In the implementation block
@property (assign,setter=_setDesiredUpdateInterval:,nonatomic) double desiredUpdateInterval;                  //@synthesize desiredUpdateInterval=_desiredUpdateInterval - In the implementation block
@property (assign,setter=_setDesiredIndicatorMode:,nonatomic) long long _desiredIndicatorMode;                //@synthesize _desiredIndicatorMode=__desiredIndicatorMode - In the implementation block
@property (assign,setter=_setDesiredModeBeganTime:,nonatomic) double _desiredModeBeganTime;                   //@synthesize _desiredModeBeganTime=__desiredModeBeganTime - In the implementation block
-(id)mutableChangeObject;
-(double)currentIndicatorAlpha;
-(UIOffset)currentIndicatorOffset;
-(long long)currentIndicatorMode;
-(double)desiredUpdateInterval;
-(void)applyDeviceMotion:(id)arg1 ;
-(long long)_hysteresisModeForDesiredMode:(long long)arg1 ;
-(void)_updateFlatModeWithRoll:(float)arg1 pitch:(float)arg2 magnitude:(float)arg3 ;
-(void)_updateModeNone;
-(void)_setDesiredUpdateInterval:(double)arg1 ;
-(void)_setCurrentIndicatorMode:(long long)arg1 ;
-(void)_setCurrentIndicatorAlpha:(double)arg1 ;
-(double)_hysteresisAlphaForDesiredAlpha:(double)arg1 fromCurrentAlpha:(double)arg2 ;
-(void)_setCurrentIndicatorOffset:(UIOffset)arg1 ;
-(long long)_desiredIndicatorMode;
-(void)_setDesiredIndicatorMode:(long long)arg1 ;
-(void)_setDesiredModeBeganTime:(double)arg1 ;
-(double)_desiredModeBeganTime;
@end

