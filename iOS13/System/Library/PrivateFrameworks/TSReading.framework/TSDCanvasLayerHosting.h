/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class TSDInteractiveCanvasController, TSDCanvasView, CALayer, TSDCanvasLayer;


@protocol TSDCanvasLayerHosting <NSObject,TSDErrorPresenter,TSDModalOperationPresenter,TSDMovieCompatibilityAlertPresenter,TSDLayerAndSubviewHosting>
@property (assign,nonatomic) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) CALayer * clippingLayer; 
@optional
-(id)viewController;
-(id)asiOSCVC;
-(id)asMacCVC;

@required
-(void)teardown;
-(CALayer *)layer;
-(BOOL)becomeFirstResponder;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(BOOL)isViewLoaded;
-(TSDCanvasView *)canvasView;
-(id)undoManager;
-(CALayer *)clippingLayer;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(TSDCanvasLayer *)canvasLayer;
-(void)setInteractiveCanvasController:(id)arg1;
-(void)canvasDidUpdateRepsFromLayouts;
-(BOOL)isInFocusedContainer;

@end

