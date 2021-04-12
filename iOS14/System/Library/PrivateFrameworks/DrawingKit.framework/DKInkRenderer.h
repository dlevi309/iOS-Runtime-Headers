/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

@class UIColor;


@protocol DKInkRenderer <NSObject>
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
@required
-(void)clear;
-(void)flush;
-(void)force;
-(unsigned long long)mode;
-(void)addPoint:(SCD_Struct_DK0)arg1;
-(id<DKInkRendererDelegate>)delegate;
-(BOOL)drawingEnabled;
-(void)setDrawingEnabled:(BOOL)arg1;
-(void)setMode:(unsigned long long)arg1;
-(UIColor *)inkColor;
-(BOOL)initialized;
-(void)setDelegate:(id)arg1;
-(id)snapshotImage;
-(void)endStroke;
-(void)display;
-(double)drawingScale;
-(void)teardown;
-(void)beginStroke;
-(void)setInkColor:(id)arg1;
-(void)setDrawingScale:(double)arg1;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;

@end

