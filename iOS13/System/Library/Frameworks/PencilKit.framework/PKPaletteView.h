/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteUndoRedoViewDelegate.h>
#import <libobjc.A.dylib/PKPaletteToolPickerViewDelegate.h>
#import <libobjc.A.dylib/PKPaletteColorPickerViewDelegate.h>
#import <libobjc.A.dylib/PKPaletteAdditionalOptionsViewDelegate.h>
#import <libobjc.A.dylib/PKPaletteToolPreviewDelegate.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPalettePopoverPresenting.h>
#import <libobjc.A.dylib/PKPaletteViewStateObservable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>
#import <libobjc.A.dylib/PKPaletteHostViewDelegate.h>
#import <UIKit/UIPencilInteractionDelegate.h>

@protocol PKPaletteViewDelegate, PKPaletteViewInternalDelegate, PKPaletteViewAnnotationDelegate;
@class NSUndoManager, UIViewController, PKPaletteUndoRedoView, UIView, MTMaterialView, PKPaletteContainerView, PKPaletteContentView, PKPaletteToolPreview, NSLayoutConstraint, UIPencilInteraction, PKInk, NSString;

@interface PKPaletteView : UIView <PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverUpdating, PKPalettePopoverPresenting, PKPaletteViewStateObservable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteHostViewDelegate, UIPencilInteractionDelegate> {

	NSUndoManager* _undoManager;
	BOOL _autoHideEnabled;
	BOOL _paletteIsCompactSize;
	BOOL _paletteHasLayoutSubviews;
	BOOL _wantsUndoRedoButtonsInCompactSize;
	BOOL _isEditingOpacity;
	BOOL _supportsOpacityEditing;
	BOOL _wantsClearBackgroundColorInCompactSize;
	BOOL _toolPreviewMinimized;
	BOOL _settingSelectedColor;
	unsigned long long _autoHideCorner;
	double _scalingFactor;
	UIViewController* _presentationController;
	id<PKPaletteViewDelegate> _delegate;
	long long _palettePosition;
	long long _colorUserInterfaceStyle;
	id<PKPaletteViewInternalDelegate> _internalDelegate;
	PKPaletteUndoRedoView* _undoRedoCompactView;
	UIView* _clippingView;
	MTMaterialView* _backgroundView;
	PKPaletteContainerView* _containerView;
	PKPaletteContentView* _contentView;
	PKPaletteToolPreview* _toolPreview;
	UIView* _bottomThinSeparator;
	unsigned long long _lastEdgeLocation;
	NSLayoutConstraint* _toolPreviewCenterXConstraint;
	NSLayoutConstraint* _toolPreviewCenterYConstraint;
	NSLayoutConstraint* _toolPreviewWidthConstraint;
	NSLayoutConstraint* _toolPreviewHeightConstraint;
	NSLayoutConstraint* _paletteContainerWidthConstraint;
	NSLayoutConstraint* _paletteContainerHeightConstraint;
	NSLayoutConstraint* _paletteContainerCenterXConstraint;
	NSLayoutConstraint* _paletteContainerCenterYConstraint;
	NSLayoutConstraint* _paletteContainerCompactTopConstraint;
	NSLayoutConstraint* _paletteContainerCompactBottomConstraint;
	NSLayoutConstraint* _paletteContainerCompactLeftConstraint;
	NSLayoutConstraint* _paletteContainerCompactRightConstraint;
	unsigned long long _lastPaletteEdgePositionWhileDragging;
	MTMaterialView* _backgroundMaterialView;
	id<PKPaletteViewAnnotationDelegate> _annotationDelegate;
	UIView* _opacityEditingView;
	UIPencilInteraction* _pencilInteraction;
	UIViewController* _popoverPresentingController;
	UIEdgeInsets _palettePopoverLayoutSceneMargins;

}

@property (assign,nonatomic,__weak) id<PKPaletteViewInternalDelegate> internalDelegate;                                    //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (nonatomic,retain) PKPaletteUndoRedoView * undoRedoCompactView;                                                  //@synthesize undoRedoCompactView=_undoRedoCompactView - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                                                                        //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) PKPaletteContainerView * containerView;                                                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) PKPaletteContentView * contentView;                                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPreview * toolPreview;                                                           //@synthesize toolPreview=_toolPreview - In the implementation block
@property (nonatomic,retain) UIView * bottomThinSeparator;                                                                 //@synthesize bottomThinSeparator=_bottomThinSeparator - In the implementation block
@property (assign,nonatomic) long long palettePosition;                                                                    //@synthesize palettePosition=_palettePosition - In the implementation block
@property (assign,nonatomic) BOOL paletteIsCompactSize;                                                                    //@synthesize paletteIsCompactSize=_paletteIsCompactSize - In the implementation block
@property (assign,nonatomic) BOOL paletteHasLayoutSubviews;                                                                //@synthesize paletteHasLayoutSubviews=_paletteHasLayoutSubviews - In the implementation block
@property (assign,nonatomic) BOOL wantsUndoRedoButtonsInCompactSize;                                                       //@synthesize wantsUndoRedoButtonsInCompactSize=_wantsUndoRedoButtonsInCompactSize - In the implementation block
@property (assign,nonatomic) BOOL isEditingOpacity;                                                                        //@synthesize isEditingOpacity=_isEditingOpacity - In the implementation block
@property (assign,nonatomic) unsigned long long lastEdgeLocation;                                                          //@synthesize lastEdgeLocation=_lastEdgeLocation - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewCenterXConstraint;                                            //@synthesize toolPreviewCenterXConstraint=_toolPreviewCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewCenterYConstraint;                                            //@synthesize toolPreviewCenterYConstraint=_toolPreviewCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewWidthConstraint;                                              //@synthesize toolPreviewWidthConstraint=_toolPreviewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPreviewHeightConstraint;                                             //@synthesize toolPreviewHeightConstraint=_toolPreviewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerWidthConstraint;                                         //@synthesize paletteContainerWidthConstraint=_paletteContainerWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerHeightConstraint;                                        //@synthesize paletteContainerHeightConstraint=_paletteContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCenterXConstraint;                                       //@synthesize paletteContainerCenterXConstraint=_paletteContainerCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCenterYConstraint;                                       //@synthesize paletteContainerCenterYConstraint=_paletteContainerCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactTopConstraint;                                    //@synthesize paletteContainerCompactTopConstraint=_paletteContainerCompactTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactBottomConstraint;                                 //@synthesize paletteContainerCompactBottomConstraint=_paletteContainerCompactBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactLeftConstraint;                                   //@synthesize paletteContainerCompactLeftConstraint=_paletteContainerCompactLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteContainerCompactRightConstraint;                                  //@synthesize paletteContainerCompactRightConstraint=_paletteContainerCompactRightConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long lastPaletteEdgePositionWhileDragging;                                      //@synthesize lastPaletteEdgePositionWhileDragging=_lastPaletteEdgePositionWhileDragging - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundMaterialView;                                                      //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteViewAnnotationDelegate> annotationDelegate;                                //@synthesize annotationDelegate=_annotationDelegate - In the implementation block
@property (nonatomic,readonly) UIView * contextualEditingView; 
@property (assign,nonatomic) BOOL supportsOpacityEditing;                                                                  //@synthesize supportsOpacityEditing=_supportsOpacityEditing - In the implementation block
@property (nonatomic,readonly) UIView * opacityEditingView;                                                                //@synthesize opacityEditingView=_opacityEditingView - In the implementation block
@property (assign,nonatomic) BOOL wantsClearBackgroundColorInCompactSize;                                                  //@synthesize wantsClearBackgroundColorInCompactSize=_wantsClearBackgroundColorInCompactSize - In the implementation block
@property (assign,nonatomic) long long contextEditingMode; 
@property (assign,nonatomic) UIEdgeInsets palettePopoverLayoutSceneMargins;                                                //@synthesize palettePopoverLayoutSceneMargins=_palettePopoverLayoutSceneMargins - In the implementation block
@property (nonatomic,readonly) UIPencilInteraction * pencilInteraction;                                                    //@synthesize pencilInteraction=_pencilInteraction - In the implementation block
@property (assign,getter=isToolPreviewMinimized,nonatomic) BOOL toolPreviewMinimized;                                      //@synthesize toolPreviewMinimized=_toolPreviewMinimized - In the implementation block
@property (nonatomic,retain) UIViewController * popoverPresentingController;                                               //@synthesize popoverPresentingController=_popoverPresentingController - In the implementation block
@property (nonatomic,readonly) unsigned long long autoHideCorner;                                                          //@synthesize autoHideCorner=_autoHideCorner - In the implementation block
@property (getter=isAutoHideEnabled,nonatomic,readonly) BOOL autoHideEnabled; 
@property (assign,getter=isBackgroundMaterialUpdatingPaused,nonatomic) BOOL backgroundMaterialUpdatingPaused; 
@property (assign,nonatomic) double paletteContentAlpha; 
@property (assign,getter=isSettingSelectedColor,nonatomic) BOOL settingSelectedColor;                                      //@synthesize settingSelectedColor=_settingSelectedColor - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentationController;                                             //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteViewDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKInk * selectedToolInk; 
@property (assign,nonatomic) BOOL isRulerActive; 
@property (nonatomic,readonly) BOOL useCompactSize; 
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                            //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnnotationSupportEnabled,nonatomic,readonly) BOOL annotationSupportEnabled; 
@property (assign,nonatomic) double scalingFactor;                                                                         //@synthesize scalingFactor=_scalingFactor - In the implementation block
+(id)makeBackgroundView;
-(void)dealloc;
-(id<PKPaletteViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteViewDelegate>)arg1 ;
-(void)setUndoManager:(id)arg1 ;
-(PKPaletteContentView *)contentView;
-(void)setContentView:(PKPaletteContentView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PKPaletteContainerView *)containerView;
-(void)setContainerView:(PKPaletteContainerView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(MTMaterialView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIViewController *)presentationController;
-(void)safeAreaInsetsDidChange;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(void)_releaseUndoManager;
-(id)undoManager;
-(void)_changeWasUndone:(id)arg1 ;
-(void)_changeWasRedone:(id)arg1 ;
-(void)_changeWasDone:(id)arg1 ;
-(void)setPresentationController:(UIViewController *)arg1 ;
-(void)pencilInteractionDidTap:(id)arg1 ;
-(id<PKPaletteViewInternalDelegate>)internalDelegate;
-(void)setInternalDelegate:(id<PKPaletteViewInternalDelegate>)arg1 ;
-(id<PKPaletteViewAnnotationDelegate>)annotationDelegate;
-(void)setAnnotationDelegate:(id<PKPaletteViewAnnotationDelegate>)arg1 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(UIViewController *)popoverPresentingController;
-(PKInk *)selectedToolInk;
-(void)setSupportsOpacityEditing:(BOOL)arg1 ;
-(BOOL)wantsClearBackgroundColorInCompactSize;
-(void)setWantsClearBackgroundColorInCompactSize:(BOOL)arg1 ;
-(double)scalingFactor;
-(void)setSelectedAnnotationType:(long long)arg1 ;
-(UIView *)contextualEditingView;
-(long long)palettePosition;
-(unsigned long long)palettePopoverPermittedArrowDirections;
-(id)palettePopoverPassthroughViews;
-(UIEdgeInsets)palettePopoverLayoutMargins;
-(void)startOpacityEditing;
-(UIView *)opacityEditingView;
-(BOOL)supportsOpacityEditing;
-(CGRect)plusButtonFrame;
-(void)endOpacityEditing;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRulerActive;
-(void)shapesViewController:(id)arg1 didSelectShapeWithType:(long long)arg2 ;
-(long long)contextEditingMode;
-(void)setScalingFactor:(double)arg1 ;
-(void)setContextEditingMode:(long long)arg1 ;
-(BOOL)isAnnotationSupportEnabled;
-(void)_installClippingView;
-(void)_installBackgroundView;
-(void)_installContentView;
-(void)_installToolPreview;
-(void)_installUndoRedoButtonsViewAtTop;
-(void)_updateColorPickerSelectedColor;
-(void)setPalettePopoverLayoutSceneMargins:(UIEdgeInsets)arg1 ;
-(BOOL)_loadOptions;
-(void)_notifyPaletteDidChangePosition;
-(void)_updateUIForAnnotationSupportIfNeeded;
-(CGSize)_paletteSizeForEdge:(unsigned long long)arg1 ;
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
-(void)setBackgroundMaterialView:(MTMaterialView *)arg1 ;
-(void)setToolPreview:(PKPaletteToolPreview *)arg1 ;
-(long long)colorUserInterfaceStyle;
-(PKPaletteToolPreview *)toolPreview;
-(void)setToolPreviewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPreviewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toolPreviewWidthConstraint;
-(NSLayoutConstraint *)toolPreviewHeightConstraint;
-(void)setToolPreviewCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPreviewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toolPreviewCenterXConstraint;
-(NSLayoutConstraint *)toolPreviewCenterYConstraint;
-(void)_updateToolPreviewVisibility;
-(void)_updateToolPreviewScalingAnimated:(BOOL)arg1 ;
-(void)_updateContainerSizeConstraintsForEdge:(unsigned long long)arg1 ;
-(id)palettePopoverPresentingController;
-(BOOL)useCompactSize;
-(UIEdgeInsets)palettePopoverLayoutSceneMargins;
-(void)updatePopoverUI;
-(id)palettePopoverSourceView;
-(void)updateUndoRedo;
-(id)_clippingViewBackgroundColor;
-(MTMaterialView *)backgroundMaterialView;
-(BOOL)wantsUndoRedoButtonsInCompactSize;
-(PKPaletteUndoRedoView *)undoRedoCompactView;
-(UIView *)bottomThinSeparator;
-(BOOL)paletteIsCompactSize;
-(BOOL)paletteHasLayoutSubviews;
-(void)setPaletteIsCompactSize:(BOOL)arg1 ;
-(void)setPaletteHasLayoutSubviews:(BOOL)arg1 ;
-(void)_centerPaletteContainerSubviewToCurrentlySelectedToolForEdge:(unsigned long long)arg1 ;
-(void)setSelectedToolInk:(PKInk *)arg1 ;
-(void)_updateToolPreview;
-(void)setIsRulerActive:(BOOL)arg1 ;
-(void)_updateToolPreviewForEdge:(unsigned long long)arg1 ;
-(BOOL)isToolPreviewMinimized;
-(void)_setSelectedColor:(id)arg1 ;
-(void)_saveOptions;
-(void)setSettingSelectedColor:(BOOL)arg1 ;
-(unsigned long long)lastPaletteEdgePositionWhileDragging;
-(void)setLastPaletteEdgePositionWhileDragging:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)paletteContainerCompactTopConstraint;
-(NSLayoutConstraint *)paletteContainerCompactBottomConstraint;
-(NSLayoutConstraint *)paletteContainerCompactLeftConstraint;
-(NSLayoutConstraint *)paletteContainerCompactRightConstraint;
-(void)_willDockPaletteToEdge:(unsigned long long)arg1 prepareForExpansion:(BOOL)arg2 ;
-(void)_willDockPaletteToCorner:(unsigned long long)arg1 ;
-(void)setPalettePosition:(long long)arg1 ;
-(BOOL)isAutoHideEnabled;
-(BOOL)isToolDictionary:(id)arg1 ofTypeIdentifier:(id)arg2 ;
-(void)setLastEdgeLocation:(unsigned long long)arg1 ;
-(id)stateDictionary;
-(id)toolsArray;
-(unsigned long long)_nextAutoHideCorner;
-(unsigned long long)autoHideCorner;
-(BOOL)isEditingOpacity;
-(void)setIsEditingOpacity:(BOOL)arg1 ;
-(BOOL)isPalettePresentingPopover;
-(unsigned long long)lastEdgeLocation;
-(void)setToolPreviewMinimized:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)undoRedoViewDidTapUndo:(id)arg1 ;
-(void)undoRedoViewDidTapRedo:(id)arg1 ;
-(void)toolPickerDidChangeSelectedToolInk:(id)arg1 ;
-(void)toolPickerDidToggleRulerTool:(id)arg1 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg1 ;
-(BOOL)colorPickerShouldDisplayColorSelection:(id)arg1 ;
-(void)textOptionsViewController:(id)arg1 didSelectTextWithType:(long long)arg2 ;
-(void)additionalOptionsView:(id)arg1 didToggleAutoHideOption:(BOOL)arg2 ;
-(void)additionalOptionsViewDidSelectPlusButton:(id)arg1 ;
-(void)toolPreviewDidChangeToolColor:(id)arg1 ;
-(BOOL)shouldPalettePresentPopover;
-(BOOL)wantsCustomPalettePopoverPresentationSource;
-(CGRect)palettePopoverSourceRect;
-(void)updatePalettePopover:(id)arg1 ;
-(void)hostView:(id)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(BOOL)arg3 ;
-(void)hostView:(id)arg1 didDockPaletteToPosition:(long long)arg2 ;
-(id)initWithInternalDelegate:(id)arg1 ;
-(double)paletteContentAlpha;
-(void)setPaletteContentAlpha:(double)arg1 ;
-(void)setWantsUndoRedoButtonsInCompactSize:(BOOL)arg1 ;
-(void)saveOptionsIfNecessary;
-(void)configureForDockedAtCorner;
-(void)configureForDockedAtEdge:(unsigned long long)arg1 ;
-(void)willStartAppearanceAnimation;
-(void)didEndAppearanceAnimation;
-(unsigned long long)edgeLocationToDockFromCorner:(unsigned long long)arg1 ;
-(id)toolPreviewView;
-(void)setToolPreviewMinimized:(BOOL)arg1 ;
-(BOOL)isBackgroundMaterialUpdatingPaused;
-(void)setBackgroundMaterialUpdatingPaused:(BOOL)arg1 ;
-(void)setUndoRedoCompactView:(PKPaletteUndoRedoView *)arg1 ;
-(void)setBottomThinSeparator:(UIView *)arg1 ;
-(UIPencilInteraction *)pencilInteraction;
-(void)setPopoverPresentingController:(UIViewController *)arg1 ;
-(BOOL)isSettingSelectedColor;
@end

