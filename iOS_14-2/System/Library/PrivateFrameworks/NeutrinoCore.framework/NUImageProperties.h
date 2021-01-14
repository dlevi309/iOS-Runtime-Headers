/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSURL, NSDictionary, NSString;


@protocol NUImageProperties <NSObject>
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (readonly) long long orientation; 
@property (readonly) NSString * fileUTI; 
@property (readonly) long long alphaInfo; 
@property (readonly) long long componentInfo; 
@property (readonly) BOOL isFusedOvercapture; 
@property (readonly) NSDictionary * auxiliaryImagesProperties; 
@property (readonly) id<NURAWImageProperties> rawProperties; 
@required
-(CGColorSpaceRef)colorSpace;
-(BOOL)isFusedOvercapture;
-(SCD_Struct_NU7)size;
-(NSString *)fileUTI;
-(NSURL *)url;
-(id<NURAWImageProperties>)rawProperties;
-(long long)orientation;
-(NSDictionary *)metadata;
-(long long)alphaInfo;
-(long long)componentInfo;
-(NSDictionary *)auxiliaryImagesProperties;

@end

