/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/PLTileableLayer.h>

@protocol MTLDeviceMTLDeviceSPI, MTLCommandQueue, OS_dispatch_queue;
@class NSData, MPSImageConversion, PLCache, NSMutableSet, NSMutableDictionary, NSObject, CALayer, NSString;

@interface PLTiledLayer : CALayer <PLTileableLayer> {

	NSData* _jpegData;
	jpegDecoder* _decoders;
	int _decoderCount;
	int _tilePixelSize;
	int _maxNumberOfTiles;
	CGSize _fullSize;
	BOOL _hasExtendedColorDisplay;
	BOOL _shouldTile;
	CGColorSpaceRef _colorspace;
	unsigned _decodePixelFormat;
	unsigned _conversionPixelFormat;
	id<MTLDevice><MTLDeviceSPI> _metalDevice;
	id<MTLCommandQueue> _metalCmdQueue;
	MPSImageConversion* _metalConverter;
	vImageConverterRef _vimageConverter;
	int _err;
	PLCache* _tileCache;
	iosPoolOpaqueRef _surfacePool;
	NSMutableSet* _visibleTileIds;
	NSMutableDictionary* _subLayers;
	NSObject*<OS_dispatch_queue> _decodeQueue;
	NSObject*<OS_dispatch_queue> _conversionQueue;
	unsigned _requestId;
	int _zoomLevel;
	CALayer* _placeholderLayer;
	CGImageRef _placeholderImage;
	double _zoomStartScale;
	os_unfair_lock_s _lock;
	CGRect _lastVisibleRect;
	double _lastZoomScale;
	BOOL _showTileBorders;

}

@property (nonatomic,readonly) CGSize jpegImageSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(double)arg2 ;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushCache;
-(id)initWithJPEGData:(id)arg1 placeholderImage:(CGImageRef)arg2 screenSize:(CGSize)arg3 ;
-(void)removeAllTiles;
-(void)dealloc;
-(void)prepareForDecoding;
-(double)zoomStartScaleForImage:(CGSize)arg1 placeholderImageSize:(CGSize)arg2 ;
-(void)setupConverterForSourceColorSpace:(CGColorSpaceRef)arg1 destinationColorSpace:(CGColorSpaceRef)arg2 ;
-(CGSize)jpegImageSize;
-(void)updateSubLayers:(id)arg1 ;
-(void)runMetalConversionOnSurface:(IOSurfaceRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runVImageConversionOnSurface:(IOSurfaceRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)decodeImageRectangle:(CGRect)arg1 forLevel:(int)arg2 requestId:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)visibleTileRegionHasChanged:(CGRect)arg1 level:(int)arg2 ;
@end

