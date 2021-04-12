/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PISlomoAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) SCD_Struct_PI8 startTime; 
@property (assign,nonatomic) SCD_Struct_PI8 endTime; 
@property (assign,nonatomic) double rate; 
+(id)rateKey;
+(id)endScaleKey;
+(id)endKey;
+(id)startScaleKey;
+(id)startKey;
-(SCD_Struct_PI8)startTime;
-(SCD_Struct_PI8)endTime;
-(void)setEndTime:(SCD_Struct_PI8)arg1 ;
-(void)setStartTime:(SCD_Struct_PI8)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
@end

