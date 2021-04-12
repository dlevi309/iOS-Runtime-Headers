/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDistanceAttenuationModel:(long long)arg1 ;
-(long long)distanceAttenuationModel;
-(void)setReferenceDistance:(float)arg1 ;
-(float)referenceDistance;
-(void)setRolloffFactor:(float)arg1 ;
-(float)rolloffFactor;
-(id)init;
-(void)setMaximumDistance:(float)arg1 ;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(float)maximumDistance;
-(void)dealloc;
@end

