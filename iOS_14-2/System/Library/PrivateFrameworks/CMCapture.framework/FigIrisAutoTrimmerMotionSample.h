/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject {

	int _vitalityObjectCount;
	double _timestamp;
	double _deltaPeriod;
	NSDictionary* _inferences;
	NSMutableDictionary* _intermediateCalculations;
	SCD_Struct_Fi129 _gravity;
	SCD_Struct_BW8 _originatingFrameTime;
	SCD_Struct_BW94 _attitude;
	SCD_Struct_BW94 _delta;
	SCD_Struct_BW94 _accel;

}

@property (nonatomic,readonly) SCD_Struct_BW8 originatingFrameTime;                         //@synthesize originatingFrameTime=_originatingFrameTime - In the implementation block
@property (nonatomic,readonly) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 cmTimestamp; 
@property (nonatomic,readonly) double deltaPeriod;                                          //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW94 attitude;                                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW94 delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW94 accel;                                       //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi129 gravity;                                    //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) NSDictionary * inferences;                                     //@synthesize inferences=_inferences - In the implementation block
@property (assign,nonatomic) int vitalityObjectCount;                                       //@synthesize vitalityObjectCount=_vitalityObjectCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * intermediateCalculations;              //@synthesize intermediateCalculations=_intermediateCalculations - In the implementation block
+(void)initialize;
-(id)initWithAttitude:(const SCD_Struct_BW94*)arg1 gravity:(const SCD_Struct_Fi129*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW8)arg4 previousSample:(id)arg5 ;
-(NSMutableDictionary *)intermediateCalculations;
-(void)prepareIntermediates:(long long)arg1 ;
-(void)setVitalityObjectCount:(int)arg1 ;
-(double)timestamp;
-(SCD_Struct_BW94)delta;
-(NSDictionary *)inferences;
-(SCD_Struct_BW8)originatingFrameTime;
-(int)vitalityObjectCount;
-(SCD_Struct_BW8)cmTimestamp;
-(double)deltaPeriod;
-(SCD_Struct_BW94)attitude;
-(SCD_Struct_BW94)attitudeRelativeTo:(id)arg1 ;
-(SCD_Struct_BW94)accel;
-(SCD_Struct_Fi129)gravity;
-(void)setInferences:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

