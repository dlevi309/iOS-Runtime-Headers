/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;


@protocol NUImage <NSObject,NUImageCopying>
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion; 
@required
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)format;
-(SCD_Struct_NU7)size;
-(NUImageLayout *)layout;
-(NURegion *)validRegion;

@end

