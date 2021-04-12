/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(void)flush;
-(void)force;
-(unsigned long long)mode;
-(void)addPoint:(SCD_Struct_DK0)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<DKInkRendererDelegate>)delegate;
-(BOOL)drawingEnabled;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(UIColor *)inkColor;
-(BOOL)initialized;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<DKInkRendererDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)snapshotImage;
-(void)endStroke;
-(void)display;
-(double)drawingScale;
-(void)teardown;
-(void)_commonInit;
-(void)beginStroke;
-(void)setInkColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDrawingScale:(double)arg1 ;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1 ;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;
-(void)displayForcefully;
-(void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned long long)arg1 ;
-(void)rendererDidFinishAnimatingDrawing:(id)arg1 ;
@end

