/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUPixelFormat;


@protocol NUBuffer <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@required
-(NUPixelFormat *)format;
-(SCD_Struct_NU7)size;
-(const void*)bytes;
-(long long)rowBytes;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1;

@end

