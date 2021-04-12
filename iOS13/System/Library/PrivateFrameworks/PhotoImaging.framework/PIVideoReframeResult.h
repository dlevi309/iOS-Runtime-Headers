/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

