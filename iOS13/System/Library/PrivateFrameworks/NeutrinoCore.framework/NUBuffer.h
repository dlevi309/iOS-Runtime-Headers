/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUPixelFormat;


@protocol NUBuffer <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@required
-(const void*)bytes;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(long long)rowBytes;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1;

@end

