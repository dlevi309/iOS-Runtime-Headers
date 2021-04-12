/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractBufferStorage.h>
#import <libobjc.A.dylib/NUSurfaceStorage.h>
#import <libobjc.A.dylib/NUPurgeableStorage.h>

@class NUIOSurface, NUGLTexture, NSString, NUPixelFormat, NURegion;

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage <NUSurfaceStorage, NUPurgeableStorage> {

	long long _purgeLevel;
	BOOL _purgeable;
	NUIOSurface* _surface;
	NUGLTexture* _texture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (readonly) long long sizeInBytes; 
@property (readonly) NURegion * validRegion; 
-(NSString *)description;
-(long long)sizeInBytes;
-(long long)rowBytes;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(id)initWithSurface:(id)arg1 ;
-(id)_texture;
-(BOOL)isPurgeable;
-(BOOL)isPurged;
-(BOOL)makeNonPurgeable;
-(void)makePurgeable;
-(long long)purgeLevel;
-(void)adjustPurgeLevel:(long long)arg1 ;
-(long long)copyFromStorage:(id)arg1 region:(id)arg2 ;
-(long long)readBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_allocateSurface;
-(long long)readSurfaceInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeSurfaceInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)readTextureInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeTextureInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
@end

