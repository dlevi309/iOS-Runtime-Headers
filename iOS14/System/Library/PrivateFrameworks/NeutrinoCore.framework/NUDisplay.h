/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSString, NUPixelFormat, NUColorSpace;


@protocol NUDisplay <NSObject>
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (readonly) NUPixelFormat * pixelFormat; 
@property (readonly) NUColorSpace * colorSpace; 
@required
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)pixelFormat;
-(SCD_Struct_NU7)size;
-(NSString *)name;
-(id)identifier;

@end

