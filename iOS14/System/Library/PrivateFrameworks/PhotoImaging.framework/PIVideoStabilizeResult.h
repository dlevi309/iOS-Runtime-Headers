/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

@class NSArray, NSDictionary;


@protocol PIVideoStabilizeResult <NURenderResult>
@property (nonatomic,copy,readonly) NSArray * keyframes; 
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect; 
@property (nonatomic,readonly) unsigned long long analysisType; 
@property (nonatomic,readonly) NSDictionary * rawHomographies; 
@required
-(NSDictionary *)rawHomographies;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(unsigned long long)analysisType;

@end

