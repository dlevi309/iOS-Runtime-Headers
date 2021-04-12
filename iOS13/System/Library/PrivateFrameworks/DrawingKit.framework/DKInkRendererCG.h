/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/DKInkRenderer.h>

@protocol DKInkRendererDelegate;
@class UIColor, NSMutableArray, NSString;

@interface DKInkRendererCG : UIView <DKInkRenderer> {

	BOOL scaleDrawingToFitCanvas;
	BOOL drawingEnabled;
	UIColor* inkColor;
	id<DKInkRendererDelegate> delegate;
	double drawingScale;
	unsigned long long mode;
	NSMutableArray* _cachedInterpolatedBrushStrokes;
	NSMutableArray* _currentInterpolatedBrushStroke;
	CGRect _invalidRect;

}

@property (assign,nonatomic) CGRect invalidRect;                                               //@synthesize invalidRect=_invalidRect - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedInterpolatedBrushStrokes;                  //@synthesize cachedInterpolatedBrushStrokes=_cachedInterpolatedBrushStrokes - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentInterpolatedBrushStroke;                  //@synthesize currentInterpolatedBrushStroke=_currentInterpolatedBrushStroke - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
-(void)dealloc;
-(void)clear;
-(id)initWithCoder:(id)arg1 ;
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
-(CGRect)invalidRect;
-(void)setInvalidRect:(CGRect)arg1 ;
-(NSMutableArray *)cachedInterpolatedBrushStrokes;
-(void)setCachedInterpolatedBrushStrokes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentInterpolatedBrushStroke;
-(void)setCurrentInterpolatedBrushStroke:(NSMutableArray *)arg1 ;
@end

