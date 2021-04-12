/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PITrimAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) SCD_Struct_PI7 startTime; 
@property (assign,nonatomic) SCD_Struct_PI7 endTime; 
+(id)endKey;
+(id)endScaleKey;
+(id)startScaleKey;
+(id)startKey;
-(void)setStartTime:(SCD_Struct_PI7)arg1 ;
-(void)setEndTime:(SCD_Struct_PI7)arg1 ;
-(SCD_Struct_PI7)endTime;
-(SCD_Struct_PI7)startTime;
@end

