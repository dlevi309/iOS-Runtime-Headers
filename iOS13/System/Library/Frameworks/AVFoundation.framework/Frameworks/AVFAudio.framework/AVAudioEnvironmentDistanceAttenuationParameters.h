/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long distanceAttenuationModel; 
@property (assign,nonatomic) float referenceDistance; 
@property (assign,nonatomic) float maximumDistance; 
@property (assign,nonatomic) float rolloffFactor; 
-(id)init;
-(void)dealloc;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(void)setMaximumDistance:(float)arg1 ;
-(float)maximumDistance;
-(void)setDistanceAttenuationModel:(long long)arg1 ;
-(long long)distanceAttenuationModel;
-(void)setReferenceDistance:(float)arg1 ;
-(float)referenceDistance;
-(void)setRolloffFactor:(float)arg1 ;
-(float)rolloffFactor;
@end

