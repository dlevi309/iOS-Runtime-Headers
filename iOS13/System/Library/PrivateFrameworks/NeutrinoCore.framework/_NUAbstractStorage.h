/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUImageStorage.h>

@class NUPixelFormat, NURegion, NUMutableRegion, NSString;

@interface _NUAbstractStorage : NSObject <NUImageStorage> {

	NUMutableRegion* _validRegion;
	long long _sizeInBytes;
	NUPixelFormat* _format;
	SCD_Struct_NU7 _size;

}

@property (assign) SCD_Struct_NU7 size;                             //@synthesize size=_size - In the implementation block
@property (assign) long long sizeInBytes;                           //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (retain) NUPixelFormat * format;                          //@synthesize format=_format - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NURegion * validRegion; 
-(id)init;
-(void)invalidate;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(void)setSizeInBytes:(long long)arg1 ;
-(long long)sizeInBytes;
-(void)setFormat:(NUPixelFormat *)arg1 ;
-(void)validateRect:(SCD_Struct_NU8)arg1 ;
-(void)validateRegion:(id)arg1 ;
-(BOOL)isValidInRect:(SCD_Struct_NU8)arg1 ;
-(BOOL)isValidInRegion:(id)arg1 ;
-(void)assertIsValidInRect:(SCD_Struct_NU8)arg1 ;
-(void)assertIsValidInRegion:(id)arg1 ;
-(long long)copyFromStorage:(id)arg1 region:(id)arg2 ;
-(long long)readBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)fillBufferWithPattern4:(unsigned)arg1 ;
-(long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(/*^block*/id)arg2 ;
-(NURegion *)validRegion;
-(void)provideMutableBuffer:(/*^block*/id)arg1 ;
-(void)provideBuffer:(/*^block*/id)arg1 ;
-(void)_resetSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
@end

