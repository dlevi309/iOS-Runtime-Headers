/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)reset:(id)arg1 ;
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)pixelFormat;
-(void)display;
-(BOOL)contentsAreFlipped;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)draw:(id)arg1 ;
-(void)_updateDisplay:(id)arg1 ;
-(void)_resetContents;
-(void)_ensureDrawingStorageOfSize:(SCD_Struct_NU1)arg1 format:(id)arg2 ;
-(void)_drawInTexture:(id)arg1 context:(id)arg2 ;
-(void)_updateDisplayWithIdentifier:(id)arg1 ;
@end

