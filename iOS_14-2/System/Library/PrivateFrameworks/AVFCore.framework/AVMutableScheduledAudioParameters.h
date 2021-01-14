/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVScheduledAudioParameters.h>

@class AVMutableScheduledAudioParametersInternal;

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters {

	AVMutableScheduledAudioParametersInternal* _mutableScheduledParametersInternal;

}
+(id)scheduledAudioParameters;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
@end

