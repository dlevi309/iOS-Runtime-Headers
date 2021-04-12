/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AKToolsListViewControllerDelegate.h>
#import <libobjc.A.dylib/AKAttributePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/AKSignaturesViewControllerDelegate.h>
#import <libobjc.A.dylib/AKSignatureCreationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaletteViewAnnotationDelegate.h>
#import <libobjc.A.dylib/PKPaletteViewPrivateDelegate.h>
#import <libobjc.A.dylib/PKToolPickerObserverPrivate.h>

@protocol AKToolbarViewOpacityEditingDelegate;
@class UIToolbar, AKToolbarBackgroundView, UIBarButtonItem, NSLayoutConstraint, UIAlertController, AKTextAttributesViewController, AKSignaturesViewController_iOS, AKSignatureCreationViewController_iOS, AKToolsListViewController, AKAttributePickerViewController, AKAttributesPickerButton, AKController, PKToolPicker, NSString;

@interface AKToolbarView : UIView <AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteViewAnnotationDelegate, PKPaletteViewPrivateDelegate, PKToolPickerObserverPrivate> {

	UIToolbar* _toolbar;
	AKToolbarBackgroundView* _backgroundView;
	UIBarButtonItem* _undoButton;
	UIBarButtonItem* _redoButton;
	UIBarButtonItem* _shareButton;
	UIBarButtonItem* _shapesPickerButton;
	UIBarButtonItem* _attributesPickerBarButton;
	UIBarButtonItem* _undoRedoFixedSpace;
	UIBarButtonItem* _attributesAddShapeFixedSpace;
	NSLayoutConstraint* _toolbarBottomConstraint;
	NSLayoutConstraint* _heightConstraint;
	UIAlertController* _signaturesAlertController;
	UIAlertController* _undoAlertController;
	AKTextAttributesViewController* _textAttributesViewController;
	AKSignaturesViewController_iOS* _signaturesSheetViewController;
	AKSignatureCreationViewController_iOS* _signaturesCreationController;
	AKToolsListViewController* _toolsListViewController;
	AKAttributePickerViewController* _attributePickerViewController;
	BOOL _showAttributePicker;
	BOOL _didSetupToolPicker;
	BOOL _shouldUseCachedSafeAreaInsets;
	UIEdgeInsets _cachedSafeAreaInsets;
	AKAttributesPickerButton* _attributesPickerButton;
	NSLayoutConstraint* _attributesPickerButtonWidthConstraint;
	NSLayoutConstraint* _attributesPickerButtonHeigthConstraint;
	BOOL _supportsOpacityEditing;
	BOOL _undoRedoButtonsHidden;
	BOOL _alwaysShowUndoButton;
	BOOL _shareButtonHidden;
	BOOL _translucent;
	BOOL _contentsHidden;
	BOOL _wantsClearBackgroundColorInCompactSize;
	AKController* _annotationController;
	PKToolPicker* _toolPicker;
	id<AKToolbarViewOpacityEditingDelegate> _opacityEditingDelegate;

}

@property (assign,nonatomic) BOOL undoRedoButtonsHidden;                                                         //@synthesize undoRedoButtonsHidden=_undoRedoButtonsHidden - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowUndoButton;                                                          //@synthesize alwaysShowUndoButton=_alwaysShowUndoButton - In the implementation block
@property (assign,getter=isShareButtonHidden,nonatomic) BOOL shareButtonHidden;                                  //@synthesize shareButtonHidden=_shareButtonHidden - In the implementation block
@property (assign,nonatomic) id shareButtonTarget; 
@property (assign,nonatomic) SEL shareButtonAction; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;                                              //@synthesize translucent=_translucent - In the implementation block
@property (assign,nonatomic) BOOL contentsHidden;                                                                //@synthesize contentsHidden=_contentsHidden - In the implementation block
@property (nonatomic,readonly) BOOL useNewFullscreenPalette; 
@property (assign,nonatomic) BOOL supportsOpacityEditing; 
@property (assign,nonatomic,__weak) id<AKToolbarViewOpacityEditingDelegate> opacityEditingDelegate;              //@synthesize opacityEditingDelegate=_opacityEditingDelegate - In the implementation block
@property (assign,nonatomic) BOOL wantsClearBackgroundColorInCompactSize;                                        //@synthesize wantsClearBackgroundColorInCompactSize=_wantsClearBackgroundColorInCompactSize - In the implementation block
@property (assign,nonatomic,__weak) AKController * annotationController;                                         //@synthesize annotationController=_annotationController - In the implementation block
@property (nonatomic,retain) PKToolPicker * toolPicker;                                                          //@synthesize toolPicker=_toolPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)undoButtonImage;
+(id)redoButtonImage;
+(id)undoButtonImageWithStyle:(unsigned long long)arg1 ;
+(id)redoButtonImageWithStyle:(unsigned long long)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)setAnnotationController:(AKController *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_undo:(id)arg1 ;
-(void)_redo:(id)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setInk:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(AKController *)annotationController;
-(unsigned long long)layoutForSize:(CGSize)arg1 ;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2 ;
-(id)selectedAnnotations;
-(BOOL)shouldHide;
-(void)setAlpha:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)presentedViewController;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(id)_paletteView;
-(void)toolPickerVisibilityDidChange:(id)arg1 ;
-(void)setWantsClearBackgroundColorInCompactSize:(BOOL)arg1 ;
-(id)paletteViewUndoManager:(id)arg1 ;
-(BOOL)paletteView:(id)arg1 shouldSetSelectedToolColor:(id)arg2 ;
-(void)paletteViewSelectedToolInkDidChange:(id)arg1 ;
-(void)paletteViewDidToggleRuler:(id)arg1 ;
-(void)_toolPicker:(id)arg1 didChangeColor:(id)arg2 ;
-(void)paletteViewDidChangePosition:(id)arg1 ;
-(CGRect)frameObscuredInView:(id)arg1 ;
-(void)_updatePaletteUI;
-(BOOL)contentsHidden;
-(void)setContentsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentsHidden:(BOOL)arg1 ;
-(BOOL)wantsClearBackgroundColorInCompactSize;
-(id)paletteViewSelectedAnnotationColor:(id)arg1 ;
-(void)paletteViewDidSelectPlusButton:(id)arg1 ;
-(void)endOpacityEditing;
-(BOOL)supportsOpacityEditing;
-(void)setSupportsOpacityEditing:(BOOL)arg1 ;
-(PKToolPicker *)toolPicker;
-(void)setToolPicker:(PKToolPicker *)arg1 ;
-(void)setShareButtonHidden:(BOOL)arg1 ;
-(void)_undoManagerNotification:(id)arg1 ;
-(void)_annotationSelectionNotification:(id)arg1 ;
-(void)_textEffectsWindowIsHosted:(id)arg1 ;
-(void)_undoLongPress:(id)arg1 ;
-(void)_showShapesPicker:(id)arg1 ;
-(void)_showTextAttributes:(id)arg1 ;
-(UIEdgeInsets)_safeAreaInsetsWithCachingIfNeeded;
-(void)_setupPaletteViewIfNecessary;
-(void)_forceToolPickerVisibleForViewStateChange:(BOOL)arg1 ;
-(void)hideModernToolbarView;
-(id)popoverPresentingController;
-(void)_updatePalette;
-(BOOL)_setToolPickerVisible:(BOOL)arg1 forResponder:(id)arg2 ;
-(void)_updateToolPickerResponderVisibilityWithCurrentOverlays;
-(void)_updateAttributeControllerInk:(id)arg1 ;
-(void)forceHideRuler;
-(void)revalidateItems;
-(BOOL)shouldUseCompactWidth;
-(BOOL)useNewFullscreenPalette;
-(void)_updateTraitCollectionForViewControllerIfNecessary:(id)arg1 ;
-(void)_saveCachedSafeAreaInsets;
-(void)_shouldUseCachedSafeAreaInsets:(BOOL)arg1 ;
-(id)createUndoViewControllerWithActionHandler:(/*^block*/id)arg1 ;
-(void)_cleanupAfterUndoAlert;
-(void)_undoAll:(id)arg1 ;
-(void)_showShapeAttributes:(id)arg1 ;
-(void)_installAttributesPickerButtonInPaletteContextEditingViewIfNeeded;
-(void)_showUndoAlertPopover:(id)arg1 ;
-(void)_showMarkupToolsPopover:(id)arg1 ;
-(void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showTextStylePopover:(id)arg1 ;
-(void)_showShapeAttributesPopover:(id)arg1 ;
-(void)dismissPresentedPopoversAnimated:(BOOL)arg1 ;
-(void)didDismissPopover;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg1 ;
-(void)signaturesViewControllerContinueToManageSignatures:(id)arg1 ;
-(void)signaturesViewControllerDidCancel:(id)arg1 ;
-(void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 ;
-(void)_clearPresentedPopoverPointers;
-(id)createUndoViewController;
-(void)didDismissPopoverAndRestorePalette;
-(void)_showSignaturesPopover:(id)arg1 fromSourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(id<AKToolbarViewOpacityEditingDelegate>)opacityEditingDelegate;
-(BOOL)_hasSelectedAnnotations;
-(void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2 ;
-(void)toolsListDidSelectOpacityItem:(id)arg1 ;
-(void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg1 ;
-(void)signatureCreationControllerDidDismiss:(id)arg1 ;
-(BOOL)setToolPickerVisible:(BOOL)arg1 forFirstResponder:(id)arg2 ;
-(void)endAnnotationEditing;
-(void)updateToolPickerResponderVisibilityWithCurrentOverlays;
-(BOOL)shouldUseCompactHeight;
-(void)resetToLastDrawingTool;
-(void)_showColorPicker:(id)arg1 ;
-(void)setUndoRedoButtonsHidden:(BOOL)arg1 ;
-(void)setShareButtonAction:(SEL)arg1 ;
-(SEL)shareButtonAction;
-(void)setShareButtonTarget:(id)arg1 ;
-(id)shareButtonTarget;
-(BOOL)isPresentingPopovers;
-(BOOL)isPresentingPopover;
-(void)dismissPresentedPopovers;
-(long long)tagForPKPaletteAnnotationType:(long long)arg1 ;
-(BOOL)undoRedoButtonsHidden;
-(BOOL)alwaysShowUndoButton;
-(void)setAlwaysShowUndoButton:(BOOL)arg1 ;
-(BOOL)isShareButtonHidden;
-(void)setOpacityEditingDelegate:(id<AKToolbarViewOpacityEditingDelegate>)arg1 ;
@end

