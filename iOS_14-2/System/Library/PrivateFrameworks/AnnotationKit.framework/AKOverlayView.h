/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class AKPageController, AKMainEventHandler, UIScrollView, UIPointerInteraction, NSString;

@interface AKOverlayView : UIView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate> {

	BOOL _isObserving;
	BOOL _deferWasMovedToSuperviewUntilMoveToWindow;
	BOOL _scrollViewIsInLiveMagnify;
	AKPageController* _pageController;
	AKMainEventHandler* _mainEventHandler;
	UIScrollView* _observedScrollView;
	UIPointerInteraction* _pointerInteraction;

}

@property (__weak) AKPageController * pageController;                                //@synthesize pageController=_pageController - In the implementation block
@property (__weak) AKMainEventHandler * mainEventHandler;                            //@synthesize mainEventHandler=_mainEventHandler - In the implementation block
@property (assign) BOOL isObserving;                                                 //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) BOOL deferWasMovedToSuperviewUntilMoveToWindow;                   //@synthesize deferWasMovedToSuperviewUntilMoveToWindow=_deferWasMovedToSuperviewUntilMoveToWindow - In the implementation block
@property (retain) UIScrollView * observedScrollView;                                //@synthesize observedScrollView=_observedScrollView - In the implementation block
@property (assign) BOOL scrollViewIsInLiveMagnify;                                   //@synthesize scrollViewIsInLiveMagnify=_scrollViewIsInLiveMagnify - In the implementation block
@property (nonatomic,retain) UIPointerInteraction * pointerInteraction;              //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)copy:(id)arg1 ;
-(UIPointerInteraction *)pointerInteraction;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)delete:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIEdgeInsets)_scribbleInteraction:(id)arg1 hitToleranceInsetsForElement:(id)arg2 defaultInsets:(UIEdgeInsets)arg3 ;
-(id)keyCommands;
-(AKPageController *)pageController;
-(id)initWithPageController:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(BOOL)isObserving;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(void)didMoveToWindow;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(UIScrollView *)observedScrollView;
-(void)setObservedScrollView:(UIScrollView *)arg1 ;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)annotationController;
-(void)_scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setIsObserving:(BOOL)arg1 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg1 ;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
-(void)_setupObservation;
-(void)duplicate:(id)arg1 ;
-(AKMainEventHandler *)mainEventHandler;
-(void)setMainEventHandler:(AKMainEventHandler *)arg1 ;
-(void)updateLayers;
-(void)editTextAnnotation:(id)arg1 ;
-(void)_teardownObservation;
-(void)_willRemoveFromOldSuperview;
-(void)_wasMovedToNewSuperview;
-(void)setDeferWasMovedToSuperviewUntilMoveToWindow:(BOOL)arg1 ;
-(BOOL)deferWasMovedToSuperviewUntilMoveToWindow;
-(void)_updateLayersUsingScrollView;
-(void)_postScrollViewRectChangedNotification;
-(void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg1 ;
-(void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg1 dismissSelectionMenu:(BOOL)arg2 ;
-(BOOL)scrollViewIsInLiveMagnify;
-(void)_willStartLiveMagnify:(id)arg1 ;
-(void)_willEndLiveMagnify:(id)arg1 ;
-(void)_scrollViewDidEndAnimation:(id)arg1 ;
-(void)_scrollViewDidScrollToTop:(id)arg1 ;
-(void)setScrollViewIsInLiveMagnify:(BOOL)arg1 ;
-(void)_postScrollViewScrollOrMagnifyEndNotification;
-(BOOL)_isEditingTextBoxAnnotation;
@end

