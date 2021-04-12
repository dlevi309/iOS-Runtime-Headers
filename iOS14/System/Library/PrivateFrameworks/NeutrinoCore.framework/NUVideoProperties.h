/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSURL, NSArray, NSDictionary;


@protocol NUVideoProperties <NSObject>
@property (readonly) NSURL * url; 
@property (readonly) NSArray * metadata; 
@property (readonly) SCD_Struct_NU7 size; 
@property (readonly) SCD_Struct_NU7 originalSize; 
@property (readonly) SCD_Struct_NU8 cleanAperture; 
@property (readonly) SCD_Struct_NU8 originalCleanAperture; 
@property (readonly) long long orientation; 
@property (readonly) NSDictionary * colorProperties; 
@property (readonly) SCD_Struct_NU6 livePhotoKeyFrameTime; 
@property (readonly) SCD_Struct_NU6 duration; 
@required
-(SCD_Struct_NU7)size;
-(NSURL *)url;
-(SCD_Struct_NU6)livePhotoKeyFrameTime;
-(long long)orientation;
-(SCD_Struct_NU7)originalSize;
-(NSArray *)metadata;
-(SCD_Struct_NU6)duration;
-(SCD_Struct_NU8)cleanAperture;
-(SCD_Struct_NU8)originalCleanAperture;
-(NSDictionary *)colorProperties;

@end

