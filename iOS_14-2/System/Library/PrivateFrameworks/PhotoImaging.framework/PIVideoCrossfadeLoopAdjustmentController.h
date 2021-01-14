/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PIVideoCrossfadeLoopAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) SCD_Struct_PI7 crossfadeDuration; 
@property (assign,nonatomic) SCD_Struct_PI7 startTime; 
@property (assign,nonatomic) SCD_Struct_PI8 loopTimeRange; 
+(id)startTimeTimescaleKey;
+(id)startTimeValueKey;
+(id)crossfadeDurationTimescaleKey;
+(id)crossfadeDurationValueKey;
+(id)loopTimeRangeDurationTimescaleKey;
+(id)loopTimeRangeDurationValueKey;
+(id)loopTimeRangeStartTimescaleKey;
+(id)loopTimeRangeStartValueKey;
-(void)setStartTime:(SCD_Struct_PI7)arg1 ;
-(void)setCrossfadeDuration:(SCD_Struct_PI7)arg1 ;
-(SCD_Struct_PI7)crossfadeDuration;
-(SCD_Struct_PI8)loopTimeRange;
-(SCD_Struct_PI7)startTime;
-(void)setLoopTimeRange:(SCD_Struct_PI8)arg1 ;
@end

