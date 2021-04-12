/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(id)identifier;
-(SCD_Struct_NU7)size;
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)pixelFormat;

@end

