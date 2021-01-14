/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {

	AVMutableAudioMixInputParametersInternal* _mutableInputParameters;

}

@property (assign,nonatomic) int trackID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
+(id)audioMixInputParametersWithTrack:(id)arg1 ;
+(id)audioMixInputParametersWithAssetTrack:(id)arg1 introFadeDuration:(SCD_Struct_AV6)arg2 fadeOutStart:(SCD_Struct_AV6)arg3 fadeOutDuration:(SCD_Struct_AV6)arg4 ;
+(id)audioMixInputParameters;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(int)trackID;
-(NSString *)audioTimePitchAlgorithm;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
@end

