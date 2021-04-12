/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInputParametersInternal* _inputParameters;

}

@property (nonatomic,readonly) int trackID; 
@property (nonatomic,copy,readonly) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain,readonly) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)trackID;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(id)_audioVolumeCurve;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(id)effectParameters;
-(id)_volumeCurveAsString;
-(void)_setScheduledAudioParameters:(id)arg1 ;
-(void)setEffectParameters:(id)arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 rampMode:(long long)arg4 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 rampMode:(long long)arg4 ;
-(void)_setVolume:(float)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV7)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV8*)arg4 rampMode:(long long*)arg5 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV7)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV8*)arg4 ;
@end

