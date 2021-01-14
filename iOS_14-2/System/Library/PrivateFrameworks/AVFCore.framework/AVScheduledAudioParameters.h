/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVScheduledAudioParametersInternal, NSArray;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {

	AVScheduledAudioParametersInternal* _scheduledParametersInternal;

}

@property (setter=_setRamps:,getter=_ramps,nonatomic,copy) NSArray * ramps; 
-(id)init;
-(void)_setRamps:(id)arg1 ;
-(id)_ramps;
-(id)_volumeCurveAsString;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV6)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 rampMode:(long long*)arg5 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV6)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)_audioVolumeCurve;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

