/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(NUColorSpace *)colorSpace;
-(NUImageLayout *)layout;
-(NURegion *)validRegion;

@end

