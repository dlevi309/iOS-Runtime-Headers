/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
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
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(id)_volumeCurveAsString;
-(void)_setScheduledAudioParameters:(id)arg1 ;
-(void)setEffectParameters:(id)arg1 ;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
-(void)_setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV6)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 rampMode:(long long*)arg5 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV6)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(int)trackID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)audioTimePitchAlgorithm;
-(unsigned long long)hash;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(id)_audioVolumeCurve;
-(id)effectParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
@end

