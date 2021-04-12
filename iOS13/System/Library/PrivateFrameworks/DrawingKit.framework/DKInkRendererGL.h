/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <GLKit/GLKView.h>
#import <libobjc.A.dylib/DKOpenGLRendererDelegate.h>
#import <libobjc.A.dylib/DKInkRenderer.h>

@protocol DKInkRendererDelegate;
@class UIColor, NSMutableArray, DKOpenGLRenderer, NSString;

@interface DKInkRendererGL : GLKView <DKOpenGLRendererDelegate, DKInkRenderer> {

	UIColor* _inkColor;
	NSMutableArray* _brushPointQueue;
	NSMutableArray* _brushStrokes;
	NSMutableArray* _currentBrushStroke;
	BOOL _initialized;
	double _backingScale;
	DKOpenGLRenderer* _inkRenderer;
	BOOL _needToNotify;
	BOOL scaleDrawingToFitCanvas;
	BOOL drawingEnabled;
	id<DKInkRendererDelegate> delegate;
	double _drawingScale;
	unsigned long long _mode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * inkColor;                                               //@synthesize inkColor=_inkColor - In the implementation block
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale;                                              //@synthesize drawingScale=_drawingScale - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
-(void)dealloc;
-(void)clear;
-(id<DKInkRendererDelegate>)delegate;
-(void)setDelegate:(id<DKInkRendererDelegate>)arg1 ;
-(BOOL)initialized;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)flush;
-(void)teardown;
-(void)_commonInit;
-(void)addPoint:(SCD_Struct_DK0)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)drawRect:(CGRect)arg1 ;
-(void)force;
-(void)endStroke;
-(UIColor *)inkColor;
-(void)setInkColor:(UIColor *)arg1 ;
-(void)beginStroke;
-(BOOL)drawingEnabled;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(double)drawingScale;
-(void)display;
-(id)snapshotImage;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1 ;
-(void)setDrawingScale:(double)arg1 ;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;
-(void)displayForcefully;
-(void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned long long)arg1 ;
-(void)rendererDidFinishAnimatingDrawing:(id)arg1 ;
@end

