/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SCD_Struct_NU7)size;
-(NSURL *)url;
-(long long)orientation;
-(CGColorSpaceRef)colorSpace;
-(NSDictionary *)metadata;
-(NSString *)fileUTI;
-(id<NURAWImageProperties>)rawProperties;
-(BOOL)isFusedOvercapture;
-(long long)alphaInfo;
-(long long)componentInfo;
-(NSDictionary *)auxiliaryImagesProperties;

@end

