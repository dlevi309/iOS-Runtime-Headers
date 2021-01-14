/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSArray * keyframes; 
@property (assign,nonatomic) SCD_Struct_PI6 stabCropRect; 
+(id)stabCropRectKey;
+(id)keyframesKey;
-(id)copyKeyframesTrimmingToTimeRange:(SCD_Struct_PI8)arg1 ;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
-(void)setKeyframes:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 ;
@end

