/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUPixelFormat;


@protocol NUBufferProvider <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@required
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(void)provideBuffer:(/*^block*/id)arg1;

@end

