/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)setDelegate:(id<DKInkRendererDelegate>)arg1 ;
-(id)snapshotImage;
-(void)endStroke;
-(void)display;
-(id)initWithCoder:(id)arg1 ;
-(double)drawingScale;
-(void)teardown;
-(void)_commonInit;
-(void)beginStroke;
-(void)setInkColor:(UIColor *)arg1 ;
-(void)dealloc;
-(void)setDrawingScale:(double)arg1 ;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1 ;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;
-(CGRect)invalidRect;
-(void)setInvalidRect:(CGRect)arg1 ;
-(NSMutableArray *)cachedInterpolatedBrushStrokes;
-(void)setCachedInterpolatedBrushStrokes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentInterpolatedBrushStroke;
-(void)setCurrentInterpolatedBrushStroke:(NSMutableArray *)arg1 ;
@end

