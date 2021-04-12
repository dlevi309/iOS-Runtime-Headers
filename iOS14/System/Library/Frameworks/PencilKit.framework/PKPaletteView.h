/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteViewStateSubject.h>
#import <libobjc.A.dylib/PKPaletteHostViewDelegate.h>
#import <UIKit/UIPencilInteractionDelegate.h>
#import <libobjc.A.dylib/PKPaletteHostingWindowSceneObserver.h>
#import <libobjc.A.dylib/PKPalettePopoverPresenting.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>

@protocol PKPaletteViewDelegate, PKPaletteViewHosting, PKPaletteViewInternalDelegate;
@class UIViewController, MTMaterialView, PKPaletteScaleFactorPolicy, UIView, PKPaletteContainerView, NSLayoutConstraint, PKPaletteToolPreview, NSString;

@interface PKPaletteView : UIView <PKPaletteViewStateSubject, PKPaletteHostViewDelegate, UIPencilInteractionDelegate, PKPaletteHostingWindowSceneObserver, PKPalettePopoverPresenting, PKPalettePopoverDismissing> {

	BOOL _autoHideEnabled;
	BOOL _shouldStartUpMinimized;
	BOOL _shouldExpandFromCorner;
	BOOL _shouldAdjustShadowRadiusForMinimized;
	BOOL _shouldPauseBackgroundUpdates;
	BOOL _toolPreviewMinimized;
	BOOL _paletteIsCompactSize;
	BOOL _paletteHasLayoutSubviews;
	UIViewController* _palettePopoverPresentingController;
	id<PKPaletteViewDelegate> _delegate;
	long long _palettePosition;
	double _paletteScaleFactor;
	UIViewController* _presentationController;
	MTMaterialView* _backgroundMaterialView;
	double _compactPaletteHeight;
	PKPaletteScaleFactorPolicy* _paletteScaleFactorPolicy;
	double _shadowOpacity;
	double _shadowRadius;
	unsigned long long _lastEdgeLocation;
	id<PKPaletteViewHosting> _paletteViewHosting;
	id<PKPaletteViewInternalDelegate> _internalDelegate;
	unsigned long long _autoHideCorner;
	UIView* _clippingView;
	PKPaletteContainerView* _containerView;
	NSLayoutConstraint* _paletteContainerWidthConstraint;
	NSLayoutConstraint* _paletteContainerHeightConstraint;
	NSLayoutConstraint* _paletteContainerCenterXConstraint;
	NSLayoutConstraint* _paletteContainerCenterYConstraint;
	NSLayoutConstraint* _paletteContainerCompactTopConstraint;
	NSLayoutConstraint* _paletteContainerCompactBottomConstraint;
	NSLayoutConstraint* _paletteContainerCompactLeftConstraint;
	NSLayoutConstraint* _paletteContainerCompactRightConstraint;
	PKPaletteToolPreview* _toolPreview;
	NSLayoutConstraint* _toolPreviewCenterXConstraint;
	NSLayoutConstraint* _toolPreviewCenterYConstraint;
	NSLayoutConstraint* _toolPreviewWidthConstraint;
	NSLayoutConstraint* _toolPreviewHeightConstraint;
	unsigned long long _lastPaletteEdgePositionWhileDragging;
	UIEdgeInsets _palettePopoverLayoutSceneMargins;
	CGRect _adjustedWindowSceneBounds;

}

@property (assign,nonatomic) unsigned long long lastEdgeLocation;                                                          //@synthesize lastEdgeLocation=_lastEdgeLocation - In the implementation block
@property (nonatomic,readonly) BOOL shouldPauseBackgroundUpdates;                                                          //@synthesize shouldPauseBackgroundUpdates=_shouldPauseBackgroundUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteViewHosting> paletteViewHosting;                                           //@synthesize paletteViewHosting=_paletteViewHosting - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteViewInternalDelegate> internalDelegate;                                    //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (assign,getter=isBackgroundMaterialUpdatingPaused,nonatomic) BOOL backgroundMaterialUpdatingPaused; 
@property (assign,nonatomic) unsigned long long autoHideCorner;                                                            //@synthesize autoHideCorner=_autoHideCorner - In the implementation block
@property (assign,getter=isToolPreviewMinimized,nonatomic) BOOL toolPreviewMinimized;                                      //@synthesize toolPreviewMinimized=_toolPreviewMinimized - In the implementation block
@property (nonatomic,readonly) UIView * clippingView;                                                                      //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) PKPaletteContainerView * containerView;                                                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerWidthConstraint;                                         //@synthesize paletteContainerWidthConstraint=_paletteContainerWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerHeightConstraint;                                        //@synthesize paletteContainerHeightConstraint=_paletteContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCenterXConstraint;                                       //@synthesize paletteContainerCenterXConstraint=_paletteContainerCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCenterYConstraint;                                       //@synthesize paletteContainerCenterYConstraint=_paletteContainerCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactTopConstraint;                                    //@synthesize paletteContainerCompactTopConstraint=_paletteContainerCompactTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactBottomConstraint;                                 //@synthesize paletteContainerCompactBottomConstraint=_paletteContainerCompactBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactLeftConstraint;                                   //@synthesize paletteContainerCompactLeftConstraint=_paletteContainerCompactLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactRightConstraint;                                  //@synthesize paletteContainerCompactRightConstraint=_paletteContainerCompactRightConstraint - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPreview * toolPreview;                                                         //@synthesize toolPreview=_toolPreview - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewCenterXConstraint;                                            //@synthesize toolPreviewCenterXConstraint=_toolPreviewCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewCenterYConstraint;                                            //@synthesize toolPreviewCenterYConstraint=_toolPreviewCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewWidthConstraint;                                              //@synthesize toolPreviewWidthConstraint=_toolPreviewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewHeightConstraint;                                             //@synthesize toolPreviewHeightConstraint=_toolPreviewHeightConstraint - In the implementation block
@property (nonatomic,readonly) BOOL paletteIsCompactSize;                                                                  //@synthesize paletteIsCompactSize=_paletteIsCompactSize - In the implementation block
@property (nonatomic,readonly) BOOL paletteHasLayoutSubviews;                                                              //@synthesize paletteHasLayoutSubviews=_paletteHasLayoutSubviews - In the implementation block
@property (nonatomic,readonly) unsigned long long paletteViewType; 
@property (nonatomic,readonly) unsigned long long lastPaletteEdgePositionWhileDragging;                                    //@synthesize lastPaletteEdgePositionWhileDragging=_lastPaletteEdgePositionWhileDragging - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteViewDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long palettePosition;                                                                  //@synthesize palettePosition=_palettePosition - In the implementation block
@property (nonatomic,readonly) double paletteScaleFactor;                                                                  //@synthesize paletteScaleFactor=_paletteScaleFactor - In the implementation block
@property (assign,nonatomic) double paletteContentAlpha; 
@property (assign,nonatomic,__weak) UIViewController * presentationController;                                             //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,readonly) MTMaterialView * backgroundMaterialView;                                                    //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets palettePopoverLayoutSceneMargins;                                                //@synthesize palettePopoverLayoutSceneMargins=_palettePopoverLayoutSceneMargins - In the implementation block
@property (nonatomic,readonly) BOOL useCompactSize; 
@property (nonatomic,readonly) double compactPaletteHeight;                                                                //@synthesize compactPaletteHeight=_compactPaletteHeight - In the implementation block
@property (nonatomic,readonly) CGRect adjustedWindowSceneBounds;                                                           //@synthesize adjustedWindowSceneBounds=_adjustedWindowSceneBounds - In the implementation block
@property (nonatomic,readonly) PKPaletteScaleFactorPolicy * paletteScaleFactorPolicy;                                      //@synthesize paletteScaleFactorPolicy=_paletteScaleFactorPolicy - In the implementation block
@property (assign,getter=isAutoHideEnabled,nonatomic) BOOL autoHideEnabled;                                                //@synthesize autoHideEnabled=_autoHideEnabled - In the implementation block
@property (getter=isToolPreviewInstalled,nonatomic,readonly) BOOL toolPreviewInstalled; 
@property (nonatomic,readonly) BOOL shouldStartUpMinimized;                                                                //@synthesize shouldStartUpMinimized=_shouldStartUpMinimized - In the implementation block
@property (nonatomic,readonly) BOOL shouldExpandFromCorner;                                                                //@synthesize shouldExpandFromCorner=_shouldExpandFromCorner - In the implementation block
@property (nonatomic,readonly) double shadowOpacity;                                                                       //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                                                                        //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,readonly) BOOL shouldAdjustShadowRadiusForMinimized;                                                  //@synthesize shouldAdjustShadowRadiusForMinimized=_shouldAdjustShadowRadiusForMinimized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * palettePopoverPresentingController;                                        //@synthesize palettePopoverPresentingController=_palettePopoverPresentingController - In the implementation block
+(id)makeBackgroundView;
-(double)shadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)shadowOpacity;
-(id<PKPaletteViewDelegate>)delegate;
-(void)setPresentationController:(UIViewController *)arg1 ;
-(double)scalingFactor;
-(BOOL)useCompactSize;
-(id<PKPaletteViewInternalDelegate>)internalDelegate;
-(UIView *)clippingView;
-(void)setDelegate:(id<PKPaletteViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(PKPaletteContainerView *)containerView;
-(UIViewController *)presentationController;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setInternalDelegate:(id<PKPaletteViewInternalDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)paletteScaleFactor;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(void)_installClippingViewInView:(id)arg1 ;
-(void)_installBackgroundViewInView:(id)arg1 ;
-(void)_installContainerViewInView:(id)arg1 ;
-(BOOL)_loadOptions;
-(CGSize)paletteSizeForEdge:(unsigned long long)arg1 ;
-(void)setPaletteContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerCompactTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerCompactBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerCompactLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteContainerCompactRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paletteContainerCenterXConstraint;
-(NSLayoutConstraint *)paletteContainerCenterYConstraint;
-(NSLayoutConstraint *)paletteContainerWidthConstraint;
-(NSLayoutConstraint *)paletteContainerHeightConstraint;
-(PKPaletteToolPreview *)toolPreview;
-(void)setToolPreviewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPreviewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toolPreviewWidthConstraint;
-(NSLayoutConstraint *)toolPreviewHeightConstraint;
-(void)setToolPreviewCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPreviewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toolPreviewCenterXConstraint;
-(NSLayoutConstraint *)toolPreviewCenterYConstraint;
-(void)_updateToolPreviewScalingAnimated:(BOOL)arg1 ;
-(MTMaterialView *)backgroundMaterialView;
-(void)_didChangeAutoHideEnabled;
-(BOOL)isAutoHideEnabled;
-(unsigned long long)paletteViewType;
-(void)_updateToolPreviewVisibility;
-(BOOL)_isPaletteContentViewHidden;
-(BOOL)paletteIsCompactSize;
-(BOOL)paletteHasLayoutSubviews;
-(void)didChangePalettePosition;
-(long long)palettePosition;
-(void)_updateContainerSizeConstraintsForEdge:(unsigned long long)arg1 ;
-(BOOL)isToolPreviewInstalled;
-(NSLayoutConstraint *)paletteContainerCompactTopConstraint;
-(NSLayoutConstraint *)paletteContainerCompactBottomConstraint;
-(NSLayoutConstraint *)paletteContainerCompactLeftConstraint;
-(NSLayoutConstraint *)paletteContainerCompactRightConstraint;
-(unsigned long long)lastPaletteEdgePositionWhileDragging;
-(void)_willDockPaletteToEdge:(unsigned long long)arg1 prepareForExpansion:(BOOL)arg2 isPaletteChangingOrientation:(BOOL)arg3 ;
-(void)_willDockPaletteToCorner:(unsigned long long)arg1 ;
-(void)setPalettePosition:(long long)arg1 ;
-(void)setAdjustedWindowSceneBounds:(CGRect)arg1 ;
-(void)_setPaletteScaleFactor:(double)arg1 notifyDidChange:(BOOL)arg2 ;
-(void)didChangePaletteScaleFactor;
-(void)_updateContainerSizeConstraints;
-(void)setLastEdgeLocation:(unsigned long long)arg1 ;
-(unsigned long long)_nextAutoHideCorner;
-(BOOL)isPalettePresentingPopover;
-(unsigned long long)autoHideCorner;
-(UIViewController *)palettePopoverPresentingController;
-(id<PKPaletteViewHosting>)paletteViewHosting;
-(BOOL)wantsCustomPalettePopoverPresentationSource;
-(UIEdgeInsets)palettePopoverLayoutSceneMargins;
-(void)updatePopoverUI;
-(id)palettePopoverSourceView;
-(UIEdgeInsets)palettePopoverLayoutMargins;
-(void)setToolPreviewMinimized:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isToolPreviewMinimized;
-(unsigned long long)lastEdgeLocation;
-(id)_stateDictionary;
-(void)_saveOptions;
-(void)hostView:(id)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(BOOL)arg3 ;
-(void)hostView:(id)arg1 didDockPaletteToPosition:(long long)arg2 ;
-(void)paletteHostingWindowSceneDidChangeBounds:(id)arg1 ;
-(BOOL)shouldPalettePresentPopover;
-(id)palettePopoverPassthroughViews;
-(unsigned long long)palettePopoverPermittedArrowDirections;
-(CGRect)palettePopoverSourceRect;
-(void)updatePalettePopover:(id)arg1 ;
-(void)setPalettePopoverPresentingController:(UIViewController *)arg1 ;
-(void)_installToolPreviewInView:(id)arg1 ;
-(void)_uninstallToolPreview;
-(BOOL)wantsToolPreviewForTraitCollection:(id)arg1 ;
-(BOOL)isBackgroundMaterialUpdatingPaused;
-(void)setBackgroundMaterialUpdatingPaused:(BOOL)arg1 ;
-(void)setAutoHideEnabled:(BOOL)arg1 ;
-(double)paletteContentAlpha;
-(void)setPaletteContentAlpha:(double)arg1 ;
-(id)borderColorForTraitCollection:(id)arg1 ;
-(double)borderWidthForTraitCollection:(id)arg1 ;
-(double)responseForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(CGPoint)arg3 ;
-(double)dampingRatioForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(CGPoint)arg3 ;
-(void)setPaletteScaleFactor:(double)arg1 ;
-(void)setPalettePopoverLayoutSceneMargins:(UIEdgeInsets)arg1 ;
-(id)toolPreviewView;
-(void)setToolPreviewMinimized:(BOOL)arg1 ;
-(void)configureForDockedAtCorner;
-(void)configureForDockedAtEdge:(unsigned long long)arg1 ;
-(void)willStartAppearanceAnimation;
-(void)didEndAppearanceAnimation;
-(CGSize)minimizedPaletteSize;
-(unsigned long long)edgeLocationToDockFromCorner:(unsigned long long)arg1 ;
-(void)saveOptionsIfNecessary;
-(double)compactPaletteHeight;
-(CGRect)adjustedWindowSceneBounds;
-(PKPaletteScaleFactorPolicy *)paletteScaleFactorPolicy;
-(BOOL)shouldStartUpMinimized;
-(BOOL)shouldExpandFromCorner;
-(BOOL)shouldAdjustShadowRadiusForMinimized;
-(BOOL)shouldPauseBackgroundUpdates;
-(void)setPaletteViewHosting:(id<PKPaletteViewHosting>)arg1 ;
-(void)setAutoHideCorner:(unsigned long long)arg1 ;
@end
