/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVScheduledAudioParametersInternal, NSArray;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {

	AVScheduledAudioParametersInternal* _scheduledParametersInternal;

}

@property (setter=_setRamps:,getter=_ramps,nonatomic,copy) NSArray * ramps; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_audioVolumeCurve;
-(id)_volumeCurveAsString;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 rampMode:(long long)arg4 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV7)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV8*)arg4 rampMode:(long long*)arg5 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV7)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV8*)arg4 ;
-(void)_setRamps:(id)arg1 ;
-(id)_ramps;
@end

