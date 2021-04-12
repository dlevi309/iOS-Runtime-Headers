/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUImage.h>
#import <libobjc.A.dylib/NUBufferImage.h>
#import <libobjc.A.dylib/NUMutableBufferImage.h>
#import <libobjc.A.dylib/NUPurgeableBufferImage.h>
#import <libobjc.A.dylib/NUMutablePurgeableBufferImage.h>

@class NSString, NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;

@interface _NUBufferImage : _NUImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion; 
-(id)debugQuickLookObject;
-(void)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)writeBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 ;
@end

