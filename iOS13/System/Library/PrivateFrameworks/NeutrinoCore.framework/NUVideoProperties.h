/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)orientation;
-(SCD_Struct_NU6)duration;
-(NSArray *)metadata;
-(SCD_Struct_NU7)originalSize;
-(SCD_Struct_NU6)livePhotoKeyFrameTime;
-(SCD_Struct_NU8)cleanAperture;
-(SCD_Struct_NU8)originalCleanAperture;
-(NSDictionary *)colorProperties;

@end

