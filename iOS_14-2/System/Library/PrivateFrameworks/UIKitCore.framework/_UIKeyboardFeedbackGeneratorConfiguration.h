/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	BOOL _scalingForSpeedEnabled;
	NSDictionary* _feedbacks;
	double _slowTypingTime;
	double _fastTypingTime;
	double _fastTypingVolumeMultiplier;
	double _slowTypingVolumeMultiplier;
	double _releaseThreshold;

}

@property (nonatomic,retain) NSDictionary * feedbacks;                       //@synthesize feedbacks=_feedbacks - In the implementation block
@property (assign,nonatomic) double slowTypingTime;                          //@synthesize slowTypingTime=_slowTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingTime;                          //@synthesize fastTypingTime=_fastTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingVolumeMultiplier;              //@synthesize fastTypingVolumeMultiplier=_fastTypingVolumeMultiplier - In the implementation block
@property (assign,nonatomic) double slowTypingVolumeMultiplier;              //@synthesize slowTypingVolumeMultiplier=_slowTypingVolumeMultiplier - In the implementation block
@property (assign,nonatomic) BOOL scalingForSpeedEnabled;                    //@synthesize scalingForSpeedEnabled=_scalingForSpeedEnabled - In the implementation block
@property (assign,nonatomic) double releaseThreshold;                        //@synthesize releaseThreshold=_releaseThreshold - In the implementation block
+(id)defaultConfiguration;
+(id)configuration1;
+(id)configuration2;
+(id)configuration3;
-(id)feedbackKeyPaths;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(NSDictionary *)feedbacks;
-(double)fastTypingTime;
-(BOOL)defaultEnabled;
-(BOOL)scalingForSpeedEnabled;
-(void)setFastTypingVolumeMultiplier:(double)arg1 ;
-(void)setSlowTypingTime:(double)arg1 ;
-(double)slowTypingVolumeMultiplier;
-(double)releaseThreshold;
-(void)setScalingForSpeedEnabled:(BOOL)arg1 ;
-(double)fastTypingVolumeMultiplier;
-(void)setFastTypingTime:(double)arg1 ;
-(double)slowTypingTime;
-(void)setReleaseThreshold:(double)arg1 ;
-(void)setSlowTypingVolumeMultiplier:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

