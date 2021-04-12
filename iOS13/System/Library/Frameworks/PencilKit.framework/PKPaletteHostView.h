/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKPaletteViewInternalDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKPalettePencilInteractionFeedbackHostViewDelegate.h>
#import <libobjc.A.dylib/PKPaletteTransitionDelegate.h>

@protocol PKPaletteHostViewDelegate, PKPaletteHostingWindowScene;
@class UIView, PKPaletteView, NSLayoutConstraint, UIPanGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, PKPaletteTransition, PKPalettePencilInteractionFeedbackHostView, PKColorPicker, NSString;

@interface PKPaletteHostView : UIView <UIGestureRecognizerDelegate, PKPaletteViewInternalDelegate, UIPopoverPresentationControllerDelegate, PKPalettePencilInteractionFeedbackHostViewDelegate, PKPaletteTransitionDelegate> {

	BOOL paletteDragging;
	BOOL paletteMinimized;
	BOOL _paletteVisible;
	BOOL _effectivePaletteVisible;
	PKPaletteView* _paletteView;
	id<PKPaletteHostViewDelegate> _delegate;
	NSLayoutConstraint* _paletteWidthConstraint;
	NSLayoutConstraint* _paletteHeightConstraint;
	NSLayoutConstraint* _paletteTopConstraint;
	NSLayoutConstraint* _paletteBottomConstraint;
	NSLayoutConstraint* _paletteLeftConstraint;
	NSLayoutConstraint* _paletteRightConstraint;
	NSLayoutConstraint* _paletteCenterXConstraint;
	NSLayoutConstraint* _paletteCenterYConstraint;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapToExpandPaletteFromMinimizedGestureRecognizer;
	UILongPressGestureRecognizer* _touchDownFeedbackGestureRecognizer;
	long long _paletteDraggingBehavior;
	long long _paletteVisualState;
	long long _palettePosition;
	long long _lastNonCompactPalettePosition;
	long long _draggingPendingPaletteVisualState;
	double _paletteSizeScaleFactor;
	PKPaletteTransition* _paletteTransition;
	PKPalettePencilInteractionFeedbackHostView* _pencilInteractionFeedbackHostView;
	PKColorPicker* _colorPickerPopover;
	id<PKPaletteHostingWindowScene> _hostingWindowScene;
	CGPoint _draggingInitialPaletteCenterInSelf;

}

@property (assign,nonatomic,__weak) id<PKPaletteHostViewDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPaletteVisible,nonatomic) BOOL paletteVisible;                                                 //@synthesize paletteVisible=_paletteVisible - In the implementation block
@property (assign,getter=isEffectivePaletteVisible,nonatomic) BOOL effectivePaletteVisible;                               //@synthesize effectivePaletteVisible=_effectivePaletteVisible - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteWidthConstraint;                                                 //@synthesize paletteWidthConstraint=_paletteWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHeightConstraint;                                                //@synthesize paletteHeightConstraint=_paletteHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteTopConstraint;                                                   //@synthesize paletteTopConstraint=_paletteTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteBottomConstraint;                                                //@synthesize paletteBottomConstraint=_paletteBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteLeftConstraint;                                                  //@synthesize paletteLeftConstraint=_paletteLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteRightConstraint;                                                 //@synthesize paletteRightConstraint=_paletteRightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteCenterXConstraint;                                               //@synthesize paletteCenterXConstraint=_paletteCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteCenterYConstraint;                                               //@synthesize paletteCenterYConstraint=_paletteCenterYConstraint - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                               //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToExpandPaletteFromMinimizedGestureRecognizer;                   //@synthesize tapToExpandPaletteFromMinimizedGestureRecognizer=_tapToExpandPaletteFromMinimizedGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * touchDownFeedbackGestureRecognizer;                           //@synthesize touchDownFeedbackGestureRecognizer=_touchDownFeedbackGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long paletteDraggingBehavior;                                                           //@synthesize paletteDraggingBehavior=_paletteDraggingBehavior - In the implementation block
@property (assign,setter=_setPaletteVisualState:,nonatomic) long long paletteVisualState;                                 //@synthesize paletteVisualState=_paletteVisualState - In the implementation block
@property (assign,nonatomic) long long palettePosition;                                                                   //@synthesize palettePosition=_palettePosition - In the implementation block
@property (assign,nonatomic) long long lastNonCompactPalettePosition;                                                     //@synthesize lastNonCompactPalettePosition=_lastNonCompactPalettePosition - In the implementation block
@property (assign,nonatomic) long long draggingPendingPaletteVisualState;                                                 //@synthesize draggingPendingPaletteVisualState=_draggingPendingPaletteVisualState - In the implementation block
@property (assign,nonatomic) CGPoint draggingInitialPaletteCenterInSelf;                                                  //@synthesize draggingInitialPaletteCenterInSelf=_draggingInitialPaletteCenterInSelf - In the implementation block
@property (assign,nonatomic) double paletteSizeScaleFactor;                                                               //@synthesize paletteSizeScaleFactor=_paletteSizeScaleFactor - In the implementation block
@property (nonatomic,retain) PKPaletteTransition * paletteTransition;                                                     //@synthesize paletteTransition=_paletteTransition - In the implementation block
@property (nonatomic,retain) PKPalettePencilInteractionFeedbackHostView * pencilInteractionFeedbackHostView;              //@synthesize pencilInteractionFeedbackHostView=_pencilInteractionFeedbackHostView - In the implementation block
@property (nonatomic,retain) PKColorPicker * colorPickerPopover;                                                          //@synthesize colorPickerPopover=_colorPickerPopover - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPaletteHostingWindowScene> hostingWindowScene;                                 //@synthesize hostingWindowScene=_hostingWindowScene - In the implementation block
@property (nonatomic,readonly) PKPaletteView * paletteView;                                                               //@synthesize paletteView=_paletteView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * hostingView; 
@property (getter=isPaletteMinimized,nonatomic,readonly) BOOL paletteMinimized; 
@property (getter=isPaletteDragging,nonatomic,readonly) BOOL paletteDragging; 
-(id<PKPaletteHostViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteHostViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)safeAreaInsetsDidChange;
-(void)didMoveToWindow;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id<PKPaletteHostingWindowScene>)hostingWindowScene;
-(PKPaletteView *)paletteView;
-(long long)palettePosition;
-(UIView *)hostingView;
-(CGSize)paletteSizeForEdge:(unsigned long long)arg1 ;
-(BOOL)isPaletteDragging;
-(BOOL)isPaletteVisible;
-(void)paletteView:(id)arg1 didChangeAnnotationSupport:(BOOL)arg2 ;
-(BOOL)isPaletteMinimized;
-(void)setPalettePosition:(long long)arg1 ;
-(void)paletteView:(id)arg1 didToggleAutoHideOption:(BOOL)arg2 ;
-(void)paletteViewShowFeedbackForToolChange:(id)arg1 ;
-(NSLayoutConstraint *)paletteTopConstraint;
-(NSLayoutConstraint *)paletteBottomConstraint;
-(NSLayoutConstraint *)paletteLeftConstraint;
-(NSLayoutConstraint *)paletteRightConstraint;
-(NSLayoutConstraint *)paletteCenterXConstraint;
-(NSLayoutConstraint *)paletteCenterYConstraint;
-(NSLayoutConstraint *)paletteWidthConstraint;
-(NSLayoutConstraint *)paletteHeightConstraint;
-(void)_panGestureHandler:(id)arg1 ;
-(void)_tapToExpandPaletteFromMinimizedGestureHandler:(id)arg1 ;
-(UITapGestureRecognizer *)tapToExpandPaletteFromMinimizedGestureRecognizer;
-(void)_touchDownFeedbackGestureHandler:(id)arg1 ;
-(void)_updatePaletteScaleFactor;
-(BOOL)_shouldBeCompact;
-(void)_fixToBottomEdge;
-(void)_dockPaletteToPosition:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPaletteVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelPanGestureIfNecessary;
-(PKPalettePencilInteractionFeedbackHostView *)pencilInteractionFeedbackHostView;
-(void)setEffectivePaletteVisible:(BOOL)arg1 ;
-(void)_updateConstraintsToFixToBottomEdge;
-(void)_updateConstraintsToDockPaletteToPosition:(long long)arg1 ;
-(void)_performAnimated:(BOOL)arg1 tracking:(BOOL)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(double)_currentWindowSceneScaleFactor;
-(void)setPaletteSizeScaleFactor:(double)arg1 ;
-(double)paletteSizeScaleFactor;
-(void)_updatePaletteViewSizeConstraints;
-(void)_setPaletteVisualState:(long long)arg1 usingTransition:(BOOL)arg2 ;
-(PKPaletteTransition *)paletteTransition;
-(void)setPaletteTransition:(PKPaletteTransition *)arg1 ;
-(long long)paletteVisualState;
-(void)_updatePaletteSizeAnimated:(BOOL)arg1 ;
-(void)_updateToolPreviewRotationAnimated:(BOOL)arg1 ;
-(void)_updateToolPreviewMinimizedStateAnimated:(BOOL)arg1 ;
-(void)_updatePaletteContentAlpha;
-(void)_updatePaletteAppearance;
-(CGSize)_paletteSizeForVisualState:(long long)arg1 ;
-(BOOL)isEffectivePaletteVisible;
-(void)_updatePaletteHeightConstraint;
-(void)_paletteWillDockToPosition:(long long)arg1 prepareForExpansion:(BOOL)arg2 ;
-(void)_deactivatePaletteCenterConstraints;
-(void)_deactivatePaletteEdgeConstraints;
-(void)_paletteDidDockToPosition:(long long)arg1 ;
-(UILongPressGestureRecognizer *)touchDownFeedbackGestureRecognizer;
-(void)setDraggingInitialPaletteCenterInSelf:(CGPoint)arg1 ;
-(void)setPaletteDraggingBehavior:(long long)arg1 ;
-(void)setDraggingPendingPaletteVisualState:(long long)arg1 ;
-(void)_scheduleDraggingTransitionToVisualState:(long long)arg1 ;
-(CGPoint)draggingInitialPaletteCenterInSelf;
-(long long)paletteDraggingBehavior;
-(void)_activatePaletteCenterConstraints;
-(CGPoint)_projectedLandingPointForGestureRecognizerEnd:(id)arg1 ;
-(long long)draggingPendingPaletteVisualState;
-(void)_processPendingDraggingTransition;
-(CGSize)_minimizedPaletteSize;
-(void)setLastNonCompactPalettePosition:(long long)arg1 ;
-(long long)lastNonCompactPalettePosition;
-(void)_installPencilInteractionFeedbackHostViewIfNeeded;
-(CGSize)regularPaletteSize;
-(CGSize)minimizedPaletteSize;
-(double)paletteEdgeSpacing;
-(double)paletteEdgeSpacingForMinimized;
-(double)minimizedPaletteScaleFactor;
-(id)paletteShadowColor;
-(CGSize)paletteShadowOffset;
-(double)paletteShadowOpacity;
-(double)paletteShadowRadius;
-(id)paletteBorderColor;
-(double)paletteBorderWidth;
-(double)paletteSpringAnimationDampingRatio;
-(double)paletteSpringAnimationResponse;
-(void)transitionIntermediateVisualStateDidChange:(id)arg1 ;
-(void)transitionPointingDirectionDidChange:(id)arg1 ;
-(void)transitionExpandedToCollapsedRatioDidChange:(id)arg1 ;
-(id)initWithHostingWindowScene:(id)arg1 ;
-(void)setPaletteVisible:(BOOL)arg1 ;
-(void)windowSceneDidChangeBounds:(id)arg1 ;
-(void)_setPaletteVisualState:(long long)arg1 ;
-(BOOL)_isPaletteAnimating;
-(void)setPaletteWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTapToExpandPaletteFromMinimizedGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTouchDownFeedbackGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setPencilInteractionFeedbackHostView:(PKPalettePencilInteractionFeedbackHostView *)arg1 ;
-(PKColorPicker *)colorPickerPopover;
-(void)setColorPickerPopover:(PKColorPicker *)arg1 ;
@end

