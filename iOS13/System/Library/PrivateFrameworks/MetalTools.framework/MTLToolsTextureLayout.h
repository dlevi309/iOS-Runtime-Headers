/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLTextureLayout.h>

@class NSString;

@interface MTLToolsTextureLayout : MTLToolsObject <MTLTextureLayout>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long alignment; 
@property (readonly) SCD_Struct_MT0 copyGranularity; 
@property (readonly) SCD_Struct_MT24 watermark; 
-(unsigned long long)size;
-(SCD_Struct_MT0)copyGranularity;
-(SCD_Struct_MT24)watermark;
-(void)initializeTextureMemory:(void*)arg1 ;
-(void)copyFromLinearBytes:(const void*)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void*)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(SCD_Struct_MT5)arg8 ;
-(void)copyFromTextureMemory:(const void*)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(SCD_Struct_MT5)arg4 toLinearBytes:(void*)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8 ;
-(void)finalizeTextureMemory:(void*)arg1 ;
-(unsigned long long)alignment;
-(void)acceptVisitor:(id)arg1 ;
@end

