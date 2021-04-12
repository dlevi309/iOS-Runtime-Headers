/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	NSDictionary* _feedbacks;
	double _slowTypingTime;
	double _fastTypingTime;
	double _fastTypingVolumeMultiplier;

}

@property (nonatomic,retain) NSDictionary * feedbacks;                       //@synthesize feedbacks=_feedbacks - In the implementation block
@property (assign,nonatomic) double slowTypingTime;                          //@synthesize slowTypingTime=_slowTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingTime;                          //@synthesize fastTypingTime=_fastTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingVolumeMultiplier;              //@synthesize fastTypingVolumeMultiplier=_fastTypingVolumeMultiplier - In the implementation block
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(NSDictionary *)feedbacks;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(BOOL)defaultEnabled;
-(double)slowTypingTime;
-(double)fastTypingTime;
-(double)fastTypingVolumeMultiplier;
-(void)setSlowTypingTime:(double)arg1 ;
-(void)setFastTypingTime:(double)arg1 ;
-(void)setFastTypingVolumeMultiplier:(double)arg1 ;
@end

