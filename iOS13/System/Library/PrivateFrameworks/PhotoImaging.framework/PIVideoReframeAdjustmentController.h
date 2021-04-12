/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 ;
-(NSArray *)keyframes;
-(void)setKeyframes:(NSArray *)arg1 ;
-(id)copyKeyframesTrimmingToTimeRange:(SCD_Struct_PI23)arg1 ;
-(SCD_Struct_PI6)stabCropRect;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
@end

