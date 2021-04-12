/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <PrototypeTools/PTSettings.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>

@class BSAnimationSettings, PTPointSettings, NSString;

@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver> {

	BSAnimationSettings* _exportedSettings;
	long long _animationType;
	double _delay;
	unsigned long long _frameRate;
	unsigned long long _curve;
	PTPointSettings* _controlPoint1Settings;
	PTPointSettings* _controlPoint2Settings;
	double _duration;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _speed;

}

@property (assign,nonatomic) long long animationType;                              //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) double delay;                                         //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) unsigned long long frameRate;                         //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned long long curve;                             //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) PTPointSettings * controlPoint1Settings;              //@synthesize controlPoint1Settings=_controlPoint1Settings - In the implementation block
@property (nonatomic,retain) PTPointSettings * controlPoint2Settings;              //@synthesize controlPoint2Settings=_controlPoint2Settings - In the implementation block
@property (assign,nonatomic) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double mass;                                          //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                     //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                       //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                                       //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) double calculatedDuration; 
@property (assign,nonatomic) double speed;                                         //@synthesize speed=_speed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
+(id)_moduleWithSectionTitle:(id)arg1 ;
+(id)_moduleWithSectionTitle:(id)arg1 delay:(BOOL)arg2 frameRate:(BOOL)arg3 ;
-(void)dealloc;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(double)epsilon;
-(void)setEpsilon:(double)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(long long)animationType;
-(unsigned long long)curve;
-(void)setCurve:(unsigned long long)arg1 ;
-(void)setDefaultValues;
-(id)initWithDefaultValues;
-(void)setAnimationType:(long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(PTPointSettings *)controlPoint1Settings;
-(PTPointSettings *)controlPoint2Settings;
-(id)BSAnimationSettings;
-(void)setFrameRate:(unsigned long long)arg1 ;
-(double)calculatedDuration;
-(unsigned long long)frameRate;
-(void)setControlPoint1Settings:(PTPointSettings *)arg1 ;
-(void)setControlPoint2Settings:(PTPointSettings *)arg1 ;
@end

