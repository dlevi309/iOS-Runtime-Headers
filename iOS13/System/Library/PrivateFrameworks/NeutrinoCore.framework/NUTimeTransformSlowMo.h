/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)inverseTransform;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithSlowMoBeginTime:(SCD_Struct_NU6)arg1 endTime:(SCD_Struct_NU6)arg2 rate:(float)arg3 assetDuration:(double)arg4 ;
-(id)initWithSlowMoTimeMapper:(id)arg1 isInverse:(BOOL)arg2 ;
-(BOOL)isInverse;
-(id<NUSlowMotionTimeRangeMapper>)timeMapper;
@end

