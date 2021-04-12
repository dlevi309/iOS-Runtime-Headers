/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

@class NSArray;


@protocol PIVideoReframeResult <NURenderResult>
@property (nonatomic,copy,readonly) NSArray * keyframes; 
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect; 
@property (nonatomic,readonly) double confidence; 
@required
-(double)confidence;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;

@end

