/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDrawingGestureTarget.h>
#import <libobjc.A.dylib/PKShapeDrawingControllerDelegate.h>

@protocol PKPaintAreaViewDelegate;
@class PKDrawingGestureRecognizer, PKPaintAreaViewSurface, NSMutableArray, PKTool, PKShapeDrawingController, PKAlternativeStrokesAnimation, NSString;

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget, PKShapeDrawingControllerDelegate> {

	PKDrawingGestureRecognizer* _drawingGestureRecognizer;
	PKPaintAreaViewSurface* _currentPaintSurfaceObject;
	NSMutableArray* _liveSurfaces;
	BOOL _switchSurfacesDuringStrokes;
	BOOL _fingerDrawingEnabled;
	id<PKPaintAreaViewDelegate> _delegate;
	PKTool* _tool;
	PKShapeDrawingController* _shapeDrawingController;
	double _liveAnimationStartTime;
	PKAlternativeStrokesAnimation* _alternativeStrokesAnimation;

}

@property (nonatomic,readonly) CGAffineTransform strokeTransform; 
@property (nonatomic,retain) PKShapeDrawingController * shapeDrawingController;                        //@synthesize shapeDrawingController=_shapeDrawingController - In the implementation block
@property (assign,nonatomic) double liveAnimationStartTime;                                            //@synthesize liveAnimationStartTime=_liveAnimationStartTime - In the implementation block
@property (nonatomic,retain) PKAlternativeStrokesAnimation * alternativeStrokesAnimation;              //@synthesize alternativeStrokesAnimation=_alternativeStrokesAnimation - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaintAreaViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL switchSurfacesDuringStrokes;                                         //@synthesize switchSurfacesDuringStrokes=_switchSurfacesDuringStrokes - In the implementation block
@property (assign,nonatomic) BOOL fingerDrawingEnabled;                                                //@synthesize fingerDrawingEnabled=_fingerDrawingEnabled - In the implementation block
@property (nonatomic,retain) PKTool * tool;                                                            //@synthesize tool=_tool - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKPaintAreaViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)vsync:(double)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<PKPaintAreaViewDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setTool:(PKTool *)arg1 ;
-(PKTool *)tool;
-(CGAffineTransform)strokeTransform;
-(id)_rendererController;
-(BOOL)canAddStroke;
-(id)_drawingController;
-(double)liveAnimationStartTime;
-(void)setLiveAnimationStartTime:(double)arg1 ;
-(BOOL)_isLiveAnimating;
-(PKShapeDrawingController *)shapeDrawingController;
-(void)checkAnimationsDidEndAtTime:(double)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(void)drawingBegan:(id)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)arg1 ;
-(void)drawingEnded:(id)arg1 ;
-(void)drawingCancelled;
-(void)setAlternativeStrokesAnimation:(PKAlternativeStrokesAnimation *)arg1 ;
-(BOOL)drawingGestureRecognizer:(id)arg1 shouldBeginDrawingWithTouches:(id)arg2 event:(id)arg3 ;
-(id)shapeDrawingControllerRendererController:(id)arg1 ;
-(void)shapeDrawingControllerShapeGestureDetected:(id)arg1 ;
-(void)shapeDrawingControllerShapeDetectionCancelled:(id)arg1 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1 ;
-(PKAlternativeStrokesAnimation *)alternativeStrokesAnimation;
-(void)setShapeDrawingController:(PKShapeDrawingController *)arg1 ;
-(BOOL)fingerDrawingEnabled;
-(id)hitSurface:(CGPoint)arg1 ;
-(void)switchToNewPaintSurface:(id)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 previousPoint:(CGPoint)arg2 newSurface:(id*)arg3 ;
-(BOOL)switchSurfacesDuringStrokes;
-(void)setSwitchSurfacesDuringStrokes:(BOOL)arg1 ;
-(void)setFingerDrawingEnabled:(BOOL)arg1 ;
@end

