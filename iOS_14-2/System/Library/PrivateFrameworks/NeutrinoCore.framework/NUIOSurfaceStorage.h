/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractBufferStorage.h>
#import <libobjc.A.dylib/NUSurfaceStorage.h>
#import <libobjc.A.dylib/NUPurgeableStorage.h>

@class NUIOSurface, NUGLTexture, NUPixelFormat, NURegion, NSString;

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage <NUSurfaceStorage, NUPurgeableStorage> {

	long long _purgeLevel;
	BOOL _purgeable;
	NUIOSurface* _surface;
	NUGLTexture* _texture;

}

@property (readonly) SCD_Struct_NU7 size; 
@property (readonly) long long sizeInBytes; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NURegion * validRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPurged;
-(void)incrementUseCount;
-(BOOL)decrementUseCount;
-(BOOL)isInUse;
-(NSString *)description;
-(long long)sizeInBytes;
-(int)useCount;
-(id)_texture;
-(long long)rowBytes;
-(BOOL)isShared;
-(BOOL)isPurgeable;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(id)initWithSurface:(id)arg1 ;
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

