/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol NUSurfaceStorage;
@class NUGLContext, NUPixelFormat, NUColorSpace;

@interface NUGLLayer : CALayer {

	NUGLContext* _context;
	id<NUSurfaceStorage> _drawingStorage;
	id<NUSurfaceStorage> _displayStorage;
	NUPixelFormat* _pixelFormat;
	NUColorSpace* _colorSpace;

}

@property (nonatomic,readonly) NUPixelFormat * pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) NUColorSpace * colorSpace;                //@synthesize colorSpace=_colorSpace - In the implementation block
-(NUColorSpace *)colorSpace;
-(id)init;
-(void)_updateDisplay:(id)arg1 ;
-(void)reset:(id)arg1 ;
-(NUPixelFormat *)pixelFormat;
-(void)draw:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)contentsAreFlipped;
-(void)display;
-(void)dealloc;
-(void)_resetContents;
-(void)_ensureDrawingStorageOfSize:(SCD_Struct_NU1)arg1 format:(id)arg2 ;
-(void)_drawInTexture:(id)arg1 context:(id)arg2 ;
-(void)_updateDisplayWithIdentifier:(id)arg1 ;
@end

