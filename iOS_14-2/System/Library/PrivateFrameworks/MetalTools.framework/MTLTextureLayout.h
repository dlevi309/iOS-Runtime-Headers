/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLTextureLayout <NSObject>
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long alignment; 
@property (readonly) SCD_Struct_MT0 copyGranularity; 
@property (readonly) SCD_Struct_MT64 watermark; 
@optional
-(void)initializeTextureMemory:(void*)arg1;

@required
-(unsigned long long)alignment;
-(SCD_Struct_MT0)copyGranularity;
-(unsigned long long)size;
-(void)copyFromLinearBytes:(const void*)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void*)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(SCD_Struct_MT8)arg8;
-(void)copyFromTextureMemory:(const void*)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(SCD_Struct_MT8)arg4 toLinearBytes:(void*)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;
-(SCD_Struct_MT64)watermark;
-(void)finalizeTextureMemory:(void*)arg1;

@end

