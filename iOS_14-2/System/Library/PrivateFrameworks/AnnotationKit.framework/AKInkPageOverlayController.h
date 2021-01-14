/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKInkOverlayViewDelegate.h>
#import <libobjc.A.dylib/AKShapeDetectionControllerDelegate.h>

@protocol PKRulerHostingDelegate;
@class AKInkOverlayView, AKPageController, AKShapeDetectionController, NSString;

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate> {

	BOOL _ignoreAnnotationAndSelectionKVO;
	BOOL _onlyPencilDraws;
	AKInkOverlayView* _inkOverlayView;
	AKPageController* _pageController;
	AKShapeDetectionController* _shapeDetectionController;
	id<PKRulerHostingDelegate> _rulerHostingDelegate;
	/*^block*/id _delayedShapeDetectionBlock;
	double _lastStrokeEndTime;

}

@property (__weak) AKPageController * pageController;                                             //@synthesize pageController=_pageController - In the implementation block
@property (retain) AKInkOverlayView * inkOverlayView;                                             //@synthesize inkOverlayView=_inkOverlayView - In the implementation block
@property (retain) AKShapeDetectionController * shapeDetectionController;                         //@synthesize shapeDetectionController=_shapeDetectionController - In the implementation block
@property (assign) BOOL ignoreAnnotationAndSelectionKVO;                                          //@synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO - In the implementation block
@property (assign) BOOL onlyPencilDraws;                                                          //@synthesize onlyPencilDraws=_onlyPencilDraws - In the implementation block
@property (copy) id delayedShapeDetectionBlock;                                                   //@synthesize delayedShapeDetectionBlock=_delayedShapeDetectionBlock - In the implementation block
@property (assign) double lastStrokeEndTime;                                                      //@synthesize lastStrokeEndTime=_lastStrokeEndTime - In the implementation block
@property (assign,nonatomic,__weak) id<PKRulerHostingDelegate> rulerHostingDelegate;              //@synthesize rulerHostingDelegate=_rulerHostingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1 ;
-(void)setup;
-(AKPageController *)pageController;
-(id)initWithPageController:(id)arg1 ;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)teardown;
-(void)setRulerHostingDelegate:(id<PKRulerHostingDelegate>)arg1 ;
-(id<PKRulerHostingDelegate>)rulerHostingDelegate;
-(void)annotationEditingDidEndWithCompletion:(/*^block*/id)arg1 ;
-(AKInkOverlayView *)inkOverlayView;
-(BOOL)isWaitingToCoalesceStrokes;
-(void)beginIgnoringAnnotationSelectionObservation:(id)arg1 ;
-(void)endIgnoringAnnotationSelectionObservation:(id)arg1 ;
-(BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg1 ;
-(void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(BOOL)arg2 ;
-(BOOL)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2 ;
-(id)overlayView:(id)arg1 ;
-(void)didToggleRuler;
-(BOOL)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2 ;
-(void)inputViewDidBeginStroke:(id)arg1 ;
-(void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2 ;
-(void)_fullSetup;
-(void)_inkCanvasAnnotationUpdated:(id)arg1 ;
-(void)_toolStatusUpdated:(id)arg1 ;
-(void)_controllerWillSave:(id)arg1 ;
-(void)setShapeDetectionController:(AKShapeDetectionController *)arg1 ;
-(AKShapeDetectionController *)shapeDetectionController;
-(void)setInkOverlayView:(AKInkOverlayView *)arg1 ;
-(void)_setupGestureDependencies;
-(void)_updateAllowedTouchTypesAllEnabled:(BOOL)arg1 pencilEnabled:(BOOL)arg2 ;
-(void)_inkDidChangeNotification:(id)arg1 ;
-(void)_enclosingScrollViewDidScroll:(id)arg1 ;
-(void)_partialTeardown;
-(void)_tearDownGestureDependencies;
-(void)_performDelayedShapeDetection;
-(void)setDelayedShapeDetectionBlock:(id)arg1 ;
-(CGRect)_convertRect:(CGRect)arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3 ;
-(double)lastStrokeEndTime;
-(void)setLastStrokeEndTime:(double)arg1 ;
-(void)setIgnoreAnnotationAndSelectionKVO:(BOOL)arg1 ;
-(id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3 ;
-(id)delayedShapeDetectionBlock;
-(BOOL)ignoreAnnotationAndSelectionKVO;
-(void)_updateGestureDependencyPriority;
-(CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1 ;
-(CGSize)scaleFromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2 ;
-(BOOL)onlyPencilDraws;
-(void)setOnlyPencilDraws:(BOOL)arg1 ;
@end

