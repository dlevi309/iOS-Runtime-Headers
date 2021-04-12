/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBufferImageAdapter.h>
#import <libobjc.A.dylib/NUMutableBufferImage.h>

@protocol NUMutableBufferProvider;
@class NSString, NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage> {

	id<NUMutableBufferProvider> _mutableBufferProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion; 
-(void)writeBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 ;
-(id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(id)initWithMutableBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
@end

