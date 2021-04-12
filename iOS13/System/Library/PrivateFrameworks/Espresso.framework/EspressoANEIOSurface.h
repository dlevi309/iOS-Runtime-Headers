/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSDictionary;

@interface EspressoANEIOSurface : NSObject {

	vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::__1::allocator<Espresso::ANERuntimeEngine::surface_and_buffer> >* multiple_buffer_io_surfaces;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _rowBytes;
	NSDictionary* _defaultsParamsDict;
	shared_ptr<Espresso::blob<unsigned char, 1> >* _external_storage_blob_for_aliasing_mem;

}

@property (assign,nonatomic) shared_ptr<Espresso::blob<unsigned char external_storage_blob_for_aliasing_mem;              //@synthesize external_storage_blob_for_aliasing_mem=_external_storage_blob_for_aliasing_mem - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultsParamsDict;                                                           //@synthesize defaultsParamsDict=_defaultsParamsDict - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                                                                  //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                                                                 //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long rowBytes;                                                               //@synthesize rowBytes=_rowBytes - In the implementation block
+(id)objectWithIOSurface:(IOSurfaceRef)arg1 defaultsParamsDict:(id)arg2 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)cleanup;
-(unsigned long long)rowBytes;
-(IOSurfaceRef)ioSurfaceForMultiBufferFrame:(unsigned long long)arg1 ;
-(id)ane_io_surfaceForMultiBufferFrame:(unsigned long long)arg1 ;
-(void)resizeForMultipleAsyncBuffers:(unsigned long long)arg1 ;
-(void)lazilyAutoCreateSurfaceForFrame:(unsigned long long)arg1 ;
-(IOSurfaceRef)ioSurfaceForMultiBufferFrameNoLazyForTesting:(unsigned long long)arg1 ;
-(void)setExternalStorage:(unsigned long long)arg1 ioSurface:(IOSurfaceRef)arg2 ;
-(void)restoreInternalStorage:(unsigned long long)arg1 ;
-(void)restoreInternalStorageForAllMultiBufferFrames;
-(id)metalBufferWithDevice:(id)arg1 multiBufferFrame:(unsigned long long)arg2 ;
-(unsigned long long)nFrames;
-(shared_ptr<Espresso::blob<unsigned char)external_storage_blob_for_aliasing_mem;
-(void)setExternal_storage_blob_for_aliasing_mem:(shared_ptr<Espresso::blob<unsigned char)arg1 ;
-(NSDictionary *)defaultsParamsDict;
-(void)setDefaultsParamsDict:(NSDictionary *)arg1 ;
@end

