/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureConverter.h>

@protocol OS_dispatch_queue, MTLDeviceSPI, PXGMetalTextureConverterDelegate;
@class NSObject, PXGImageTexture, PXGColorProgramLibrary, NSString;

@interface PXGMetalTextureConverter : NSObject <PXGTextureConverter> {

	long long _screenPixelCount;
	BOOL _lowMemoryMode;
	BOOL _hasExtendedColorTarget;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	PXGImageTexture* _transparentTexture;
	CVMetalTextureCacheRef _videoTextureCache;
	id<MTLDeviceSPI> _device;
	unsigned long long _destinationColorSpaceName;
	id<PXGMetalTextureConverterDelegate> _delegate;
	CGColorSpaceRef _destinationColorSpace;
	PXGColorProgramLibrary* _colorProgramLibrary;

}

@property (nonatomic,retain) id<MTLDeviceSPI> device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL hasExtendedColorTarget;                                     //@synthesize hasExtendedColorTarget=_hasExtendedColorTarget - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef destinationColorSpace;                           //@synthesize destinationColorSpace=_destinationColorSpace - In the implementation block
@property (nonatomic,readonly) PXGColorProgramLibrary * colorProgramLibrary;                    //@synthesize colorProgramLibrary=_colorProgramLibrary - In the implementation block
@property (nonatomic,readonly) CVMetalTextureCacheRef videoTextureCache;                        //@synthesize videoTextureCache=_videoTextureCache - In the implementation block
@property (nonatomic,readonly) unsigned long long destinationColorSpaceName;                    //@synthesize destinationColorSpaceName=_destinationColorSpaceName - In the implementation block
@property (assign,nonatomic,__weak) id<PXGMetalTextureConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int presentationType; 
@property (assign,nonatomic) BOOL lowMemoryMode;                                                //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (nonatomic,readonly) PXGImageTexture * transparentTexture;                            //@synthesize transparentTexture=_transparentTexture - In the implementation block
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;                         //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                      //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)destinationColorSpaceName;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)_createTransparentTexture;
-(id)init;
-(CVMetalTextureCacheRef)videoTextureCache;
-(id<PXGMetalTextureConverterDelegate>)delegate;
-(CGColorSpaceRef)destinationColorSpace;
-(BOOL)supportsTextureAtlas;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(id)createAtlasForTextureAtlasManager:(id)arg1 ;
-(id<MTLDeviceSPI>)device;
-(void)setDelegate:(id<PXGMetalTextureConverterDelegate>)arg1 ;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)presentationType;
-(id)initWithDevice:(id)arg1 destinationColorspaceName:(unsigned long long)arg2 ;
-(id)createPayloadTextureFromPayload:(id)arg1 ;
-(PXGImageTexture *)transparentTexture;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setDevice:(id<MTLDeviceSPI>)arg1 ;
-(PXGColorProgramLibrary *)colorProgramLibrary;
-(BOOL)lowMemoryMode;
-(BOOL)hasExtendedColorTarget;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX25)arg1 ;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(void)dealloc;
@end

