/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@protocol NUSlowMotionTimeRangeMapper;
@interface NUTimeTransformSlowMo : NUGeometryTransform {

	BOOL _isInverse;
	id<NUSlowMotionTimeRangeMapper> _timeMapper;

}

@property (nonatomic,readonly) BOOL isInverse;                                          //@synthesize isInverse=_isInverse - In the implementation block
@property (nonatomic,readonly) id<NUSlowMotionTimeRangeMapper> timeMapper;              //@synthesize timeMapper=_timeMapper - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)inverseTransform;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithSlowMoBeginTime:(SCD_Struct_NU6)arg1 endTime:(SCD_Struct_NU6)arg2 rate:(float)arg3 assetDuration:(double)arg4 ;
-(id)initWithSlowMoTimeMapper:(id)arg1 isInverse:(BOOL)arg2 ;
-(BOOL)isInverse;
-(id<NUSlowMotionTimeRangeMapper>)timeMapper;
@end

