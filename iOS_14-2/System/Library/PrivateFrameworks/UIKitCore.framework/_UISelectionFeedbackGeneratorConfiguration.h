/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _feedback;
	double _minimumInterval;
	double _maxSpeed;
	double _slowAudioVolume;
	double _fastAudioVolume;
	double _slowHapticVolume;
	double _fastHapticVolume;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (assign,nonatomic) double minimumInterval;                                          //@synthesize minimumInterval=_minimumInterval - In the implementation block
@property (assign,nonatomic) double maxSpeed;                                                 //@synthesize maxSpeed=_maxSpeed - In the implementation block
@property (assign,nonatomic) double slowAudioVolume;                                          //@synthesize slowAudioVolume=_slowAudioVolume - In the implementation block
@property (assign,nonatomic) double fastAudioVolume;                                          //@synthesize fastAudioVolume=_fastAudioVolume - In the implementation block
@property (assign,nonatomic) double slowHapticVolume;                                         //@synthesize slowHapticVolume=_slowHapticVolume - In the implementation block
@property (assign,nonatomic) double fastHapticVolume;                                         //@synthesize fastHapticVolume=_fastHapticVolume - In the implementation block
+(id)defaultConfiguration;
+(id)pickerConfiguration;
+(id)strongConfiguration;
+(id)lightConfiguration;
-(id)feedbackKeyPaths;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)feedback;
-(double)minimumInterval;
-(double)slowAudioVolume;
-(double)slowHapticVolume;
-(void)setSlowAudioVolume:(double)arg1 ;
-(void)setFastAudioVolume:(double)arg1 ;
-(void)setMinimumInterval:(double)arg1 ;
-(void)setFastHapticVolume:(double)arg1 ;
-(void)setMaxSpeed:(double)arg1 ;
-(double)fastHapticVolume;
-(double)fastAudioVolume;
-(void)setSlowHapticVolume:(double)arg1 ;
-(double)maxSpeed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

