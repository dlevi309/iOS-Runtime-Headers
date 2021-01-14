/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUPixelFormat, NURegion;


@protocol NUImageStorage <NUMutableBufferProvider>
@property (readonly) SCD_Struct_NU7 size; 
@property (readonly) long long sizeInBytes; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NURegion * validRegion; 
@required
-(NUPixelFormat *)format;
-(SCD_Struct_NU7)size;
-(long long)sizeInBytes;
-(void)invalidate;
-(void)validateRect:(SCD_Struct_NU8)arg1;
-(void)validateRegion:(id)arg1;
-(BOOL)isValidInRect:(SCD_Struct_NU8)arg1;
-(BOOL)isValidInRegion:(id)arg1;
-(void)assertIsValidInRect:(SCD_Struct_NU8)arg1;
-(void)assertIsValidInRegion:(id)arg1;
-(long long)copyFromStorage:(id)arg1 region:(id)arg2;
-(long long)readBufferInRegion:(id)arg1 block:(/*^block*/id)arg2;
-(long long)writeBufferInRegion:(id)arg1 block:(/*^block*/id)arg2;
-(long long)fillBufferWithPattern4:(unsigned)arg1;
-(long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(/*^block*/id)arg3;
-(long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(/*^block*/id)arg2;
-(NURegion *)validRegion;

@end

