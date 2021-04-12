/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SXTextCanvasRenderSource.h>
#import <libobjc.A.dylib/SXAXAssistiveTechStatusChangeListener.h>
#import <libobjc.A.dylib/SXTransitionableComponentView.h>
#import <libobjc.A.dylib/SXComponentInteractable.h>

@protocol SXComponentLayout, SXComponent, SXDOMObjectProviding, SXPresentationDelegate, SXComponentStyleRendererFactory, SXComponentStyleRenderer, SXComponentStyle, SXComponentHosting;
@class UIView, SXViewport, SXFillView, SXColumnLayout, SXUnitConverter, NSString;

@interface SXComponentView : UIView <UIGestureRecognizerDelegate, SXTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionableComponentView, SXComponentInteractable> {

	BOOL _hasRenderedContents;
	BOOL _requiresThoroughFrameCalculations;
	BOOL _isDraggable;
	BOOL _animationsAndBehaviorsEnabled;
	BOOL _highlighted;
	BOOL _allowViewHierarchyRemoval;
	BOOL _hasAnimation;
	BOOL _hasBehaviors;
	BOOL _hasRenderedComponentStyle;
	SCD_Struct_SX17 _presentationChanges;
	id<SXComponentLayout> _componentLayout;
	id<SXComponent> _component;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	SXViewport* _viewport;
	id<SXPresentationDelegate> _presentationDelegate;
	long long _visibilityState;
	long long _presentationState;
	UIView* _contentView;
	UIView* _backgroundView;
	SXFillView* _fillView;
	SXColumnLayout* _documentColumnLayout;
	SXUnitConverter* _unitConverter;
	UIView* _highlightView;
	id<SXComponentStyleRendererFactory> _componentStyleRendererFactory;
	id<SXComponentStyleRenderer> _componentStyleRenderer;
	id<SXComponentStyle> _componentStyle;
	id<SXComponentHosting> _componentHost;
	unsigned long long _componentIndex;
	CGRect _absoluteFrame;
	UIEdgeInsets _componentLayoutMargins;
	UIEdgeInsets _borderInsets;
	CGRect _contentFrame;
	CGRect _backgroundViewFrame;
	CGRect _originalFrame;
	CGRect _presentationFrame;

}

@property (nonatomic,readonly) id<SXComponentStyleRendererFactory> componentStyleRendererFactory;              //@synthesize componentStyleRendererFactory=_componentStyleRendererFactory - In the implementation block
@property (nonatomic,readonly) id<SXComponentStyleRenderer> componentStyleRenderer;                            //@synthesize componentStyleRenderer=_componentStyleRenderer - In the implementation block
@property (nonatomic,retain) id<SXComponentStyle> componentStyle;                                              //@synthesize componentStyle=_componentStyle - In the implementation block
@property (assign,nonatomic) CGRect originalFrame;                                                             //@synthesize originalFrame=_originalFrame - In the implementation block
@property (assign,nonatomic) BOOL allowViewHierarchyRemoval;                                                   //@synthesize allowViewHierarchyRemoval=_allowViewHierarchyRemoval - In the implementation block
@property (assign,nonatomic) BOOL requiresThoroughFrameCalculations;                                           //@synthesize requiresThoroughFrameCalculations=_requiresThoroughFrameCalculations - In the implementation block
@property (assign,nonatomic) BOOL hasAnimation;                                                                //@synthesize hasAnimation=_hasAnimation - In the implementation block
@property (assign,nonatomic) BOOL hasBehaviors;                                                                //@synthesize hasBehaviors=_hasBehaviors - In the implementation block
@property (assign,nonatomic) BOOL hasRenderedComponentStyle;                                                   //@synthesize hasRenderedComponentStyle=_hasRenderedComponentStyle - In the implementation block
@property (assign,nonatomic,__weak) id<SXComponentHosting> componentHost;                                      //@synthesize componentHost=_componentHost - In the implementation block
@property (assign,nonatomic) unsigned long long componentIndex;                                                //@synthesize componentIndex=_componentIndex - In the implementation block
@property (assign,nonatomic) UIEdgeInsets componentLayoutMargins;                                              //@synthesize componentLayoutMargins=_componentLayoutMargins - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                              //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGRect absoluteFrame;                                                             //@synthesize absoluteFrame=_absoluteFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundViewFrame;                                                       //@synthesize backgroundViewFrame=_backgroundViewFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;                                                        //@synthesize borderInsets=_borderInsets - In the implementation block
@property (nonatomic,retain) SXColumnLayout * documentColumnLayout;                                            //@synthesize documentColumnLayout=_documentColumnLayout - In the implementation block
@property (assign,nonatomic) CGRect presentationFrame;                                                         //@synthesize presentationFrame=_presentationFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_SX17 presentationChanges;                                              //@synthesize presentationChanges=_presentationChanges - In the implementation block
@property (nonatomic,readonly) id<SXComponent> component;                                                      //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                                     //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                                          //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,__weak,readonly) id<SXPresentationDelegate> presentationDelegate;                         //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,readonly) id<SXComponentLayout> componentLayout;                                          //@synthesize componentLayout=_componentLayout - In the implementation block
@property (assign,nonatomic) long long visibilityState;                                                        //@synthesize visibilityState=_visibilityState - In the implementation block
@property (assign,nonatomic) long long presentationState;                                                      //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) SXFillView * fillView;                                                     //@synthesize fillView=_fillView - In the implementation block
@property (nonatomic,readonly) BOOL hasRenderedContents;                                                       //@synthesize hasRenderedContents=_hasRenderedContents - In the implementation block
@property (nonatomic,readonly) BOOL isDraggable;                                                               //@synthesize isDraggable=_isDraggable - In the implementation block
@property (assign,nonatomic) BOOL animationsAndBehaviorsEnabled;                                               //@synthesize animationsAndBehaviorsEnabled=_animationsAndBehaviorsEnabled - In the implementation block
@property (nonatomic,readonly) SXUnitConverter * unitConverter;                                                //@synthesize unitConverter=_unitConverter - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                            //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) UIView * highlightView;                                                         //@synthesize highlightView=_highlightView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitionContainerView; 
@property (nonatomic,readonly) UIView * transitionContentView; 
@property (nonatomic,readonly) BOOL transitionViewIsVisible; 
@property (nonatomic,readonly) BOOL transitionViewShouldFadeInContent; 
@property (nonatomic,readonly) CGRect transitionVisibleFrame; 
@property (nonatomic,readonly) CGRect transitionContainerFrame; 
@property (nonatomic,readonly) CGRect transitionContentFrame; 
@property (nonatomic,readonly) BOOL isTransitionable; 
-(void)dealloc;
-(NSString *)description;
-(CGRect)contentFrame;
-(SXViewport *)viewport;
-(UIView *)contentView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)backgroundView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)highlightView;
-(void)didMoveToWindow;
-(void)configure;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(CGRect)originalFrame;
-(CGRect)absoluteFrame;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(unsigned long long)componentIndex;
-(void)setComponentIndex:(unsigned long long)arg1 ;
-(id<SXComponent>)component;
-(void)discardContents;
-(id)classification;
-(long long)visibilityState;
-(void)setVisibilityState:(long long)arg1 ;
-(id<SXPresentationDelegate>)presentationDelegate;
-(UIView *)transitionContainerView;
-(void)setFillView:(SXFillView *)arg1 ;
-(SXFillView *)fillView;
-(long long)presentationState;
-(void)setPresentationState:(long long)arg1 ;
-(BOOL)isDraggable;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(void)assistiveTechnologyStatusDidChange;
-(id<SXComponentLayout>)componentLayout;
-(SXUnitConverter *)unitConverter;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(BOOL)gestureShouldBegin:(id)arg1 ;
-(CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2 ;
-(id<SXComponentStyle>)componentStyle;
-(void)setBackgroundViewFrame:(CGRect)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)renderContents;
-(CGRect)backgroundViewFrame;
-(void)setOriginalFrame:(CGRect)arg1 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(SXColumnLayout *)documentColumnLayout;
-(BOOL)allowHierarchyRemoval;
-(void)loadComponent:(id)arg1 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(UIView *)transitionContentView;
-(BOOL)transitionViewIsVisible;
-(BOOL)transitionViewShouldFadeInContent;
-(CGRect)transitionVisibleFrame;
-(CGRect)transitionContainerFrame;
-(CGRect)transitionContentFrame;
-(BOOL)isTransitionable;
-(void)invalidateComponentStyle;
-(void)setPresentationFrame:(CGRect)arg1 ;
-(void)setupComponentStyleRendererForStyle:(id)arg1 ;
-(void)prepareComponentStyleRendererForStyle:(id)arg1 ;
-(void)renderComponentStyle;
-(void)updateAllowHierarchyRemovalWithComponent:(id)arg1 componentStyle:(id)arg2 ;
-(BOOL)hasAnimation;
-(BOOL)animationsAndBehaviorsEnabled;
-(BOOL)hasBehaviors;
-(id<SXComponentStyleRenderer>)componentStyleRenderer;
-(BOOL)allowViewHierarchyRemoval;
-(void)setRequiresThoroughFrameCalculations:(BOOL)arg1 ;
-(BOOL)requiresThoroughFrameCalculations;
-(CGRect)presentationFrame;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(void)prepareForTransitionType:(unsigned long long)arg1 ;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg1 ;
-(BOOL)userInteractable;
-(void)renderContentsIfNeeded;
-(void)willPresentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(id)contentViewForBehavior:(id)arg1 ;
-(void)restoreBehavior;
-(void)setAnimationsAndBehaviorsEnabled:(BOOL)arg1 ;
-(void)animationDidFinish:(id)arg1 ;
-(void)didApplyBehavior:(id)arg1 ;
-(BOOL)hasRenderedContents;
-(UIEdgeInsets)componentLayoutMargins;
-(void)setComponentLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)setDocumentColumnLayout:(SXColumnLayout *)arg1 ;
-(id<SXComponentStyleRendererFactory>)componentStyleRendererFactory;
-(void)setComponentStyle:(id<SXComponentStyle>)arg1 ;
-(void)setAllowViewHierarchyRemoval:(BOOL)arg1 ;
-(void)setHasAnimation:(BOOL)arg1 ;
-(void)setHasBehaviors:(BOOL)arg1 ;
-(BOOL)hasRenderedComponentStyle;
-(void)setHasRenderedComponentStyle:(BOOL)arg1 ;
-(id<SXComponentHosting>)componentHost;
-(void)setComponentHost:(id<SXComponentHosting>)arg1 ;
-(SCD_Struct_SX17)presentationChanges;
-(void)setPresentationChanges:(SCD_Struct_SX17)arg1 ;
@end

