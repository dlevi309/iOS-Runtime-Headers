/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKCanvasViewDelegate.h>
#import <libobjc.A.dylib/PNPPencilInteractionEventDestination.h>

@protocol PNPWizardScratchpadViewDelegate;
@class UIView, PNPWizardScratchpadCanvasView, CAShapeLayer, PNPWizardInkWeightControl, NSMutableArray, NSArray, PNPWizardScratchpadToast, NSTimer, NSString;

@interface PNPWizardScratchpadView : UIView <PKCanvasViewDelegate, PNPPencilInteractionEventDestination> {

	UIView* _backgroundView;
	PNPWizardScratchpadCanvasView* _canvasView;
	PNPWizardScratchpadCanvasView* _fingerDrawingCanvasView;
	CAShapeLayer* _frameLayer;
	PNPWizardInkWeightControl* _inkWeightControl;
	BOOL _inkWeightControlVisible;
	long long _selectedInkIndex;
	long long _previousMarkingToolIndex;
	NSMutableArray* _inkViews;
	NSArray* _colors;
	UIView* _toolsBackgroundPillView;
	PNPWizardScratchpadToast* _toastView;
	NSTimer* _showToastTimer;
	BOOL _showingToast;
	BOOL _isDrawing;
	unsigned long long _step;
	id<PNPWizardScratchpadViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showingToast;                                                //@synthesize showingToast=_showingToast - In the implementation block
@property (assign,nonatomic) BOOL isDrawing;                                                   //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign,nonatomic) unsigned long long step;                                          //@synthesize step=_step - In the implementation block
@property (assign,nonatomic,__weak) id<PNPWizardScratchpadViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGPoint pointForFirstTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PNPWizardScratchpadViewDelegate>)delegate;
-(void)setDelegate:(id<PNPWizardScratchpadViewDelegate>)arg1 ;
-(unsigned long long)step;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)setStep:(unsigned long long)arg1 ;
-(void)canvasViewDidBeginDrawing:(id)arg1 ;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(void)_canvasViewWillBeginDrawing:(id)arg1 ;
-(BOOL)isDrawing;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)eventSource:(id)arg1 hadPencilDoubleTapped:(/*^block*/id)arg2 ;
-(id)_selectedInkView;
-(BOOL)showingToast;
-(id)_selectedInk;
-(void)_selectInkAtIndex:(long long)arg1 ;
-(void)_animateLayoutChange:(/*^block*/id)arg1 ;
-(void)_deselectAllInks;
-(void)_animateInkChange:(/*^block*/id)arg1 ;
-(void)_initializeToastViewIfNecessary;
-(void)setShowingToast:(BOOL)arg1 ;
-(BOOL)_viewIsPartOfStylusCanvasView:(id)arg1 ;
-(void)_dismissToastNotification;
-(void)_showToastNotificationAndAnimateStrokeAway;
-(void)_inkViewPressed:(id)arg1 ;
-(void)_triggerShowToastTimer;
-(void)_showToastNotificationWithInitialAnimation;
-(CGPoint)pointForFirstTool;
-(void)_animateAdjustmentSliderAppearance:(/*^block*/id)arg1 ;
-(void)clearCanvas;
-(void)prepareCanvasViews;
@end

