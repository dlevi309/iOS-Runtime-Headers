/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKCanvasViewDelegate.h>

@class UIColor, PKCanvasView, PKTool, PKDrawing, NSString;

@interface AKInkSignatureView : UIView <PKCanvasViewDelegate> {

	BOOL _hasStrokes;
	UIColor* _strokeColor;
	PKCanvasView* _canvasView;
	PKTool* _tool;
	PKDrawing* _latestDrawing;

}

@property (retain) PKCanvasView * canvasView;                       //@synthesize canvasView=_canvasView - In the implementation block
@property (copy) PKTool * tool;                                     //@synthesize tool=_tool - In the implementation block
@property (retain) PKDrawing * latestDrawing;                       //@synthesize latestDrawing=_latestDrawing - In the implementation block
@property (assign) BOOL hasStrokes;                                 //@synthesize hasStrokes=_hasStrokes - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)strokeColor;
-(void)clear;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PKCanvasView *)canvasView;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)teardown;
-(void)_commonInit;
-(void)setCanvasView:(PKCanvasView *)arg1 ;
-(void)setTool:(PKTool *)arg1 ;
-(PKTool *)tool;
-(void)canvasViewDrawingDidChange:(id)arg1 ;
-(void)setLatestDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)latestDrawing;
-(BOOL)hasStrokes;
-(CGPathRef)copyPotracedPathAndReturnDrawing:(id*)arg1 ;
-(void)_updateTool;
-(void)setHasStrokes:(BOOL)arg1 ;
@end

