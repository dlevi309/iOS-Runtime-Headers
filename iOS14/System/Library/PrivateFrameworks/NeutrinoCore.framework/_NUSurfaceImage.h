/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUBufferImage.h>
#import <libobjc.A.dylib/NUSurfaceImage.h>
#import <libobjc.A.dylib/NUMutableSurfaceImage.h>
#import <libobjc.A.dylib/NUPurgeableSurfaceImage.h>
#import <libobjc.A.dylib/NUMutablePurgeableSurfaceImage.h>

@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion, NSString;

@interface _NUSurfaceImage : _NUBufferImage <NUSurfaceImage, NUMutableSurfaceImage, NUPurgeableSurfaceImage, NUMutablePurgeableSurfaceImage>

@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 ;
-(void)readTextureRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)writeTextureRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)writeSurfaceRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)readSurfaceRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

