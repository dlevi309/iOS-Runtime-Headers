/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@protocol AKToolbarViewOpacityEditingDelegate;
@class UIToolbar, AKToolbarBackgroundView, PKPaletteHostView, PKPaletteView, UIBarButtonItem, NSLayoutConstraint, UIAlertController, AKTextAttributesViewController, AKSignaturesViewController_iOS, AKSignatureCreationViewController_iOS, AKToolsListViewController, AKAttributePickerViewController, AKAttributesPickerButton, PKToolPicker, AKController, NSString;

@interface AKToolbarView : UIView <AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteViewAnnotationDelegate, PKPaletteViewPrivateDelegate> {

	UIToolbar* _toolbar;
	AKToolbarBackgroundView* _backgroundView;
	PKPaletteHostView* _paletteHostView;
	PKPaletteView* _paletteView;
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
	BOOL _shouldUseCachedSafeAreaInsets;
	UIEdgeInsets _cachedSafeAreaInsets;
	AKAttributesPickerButton* _attributesPickerButton;
	NSLayoutConstraint* _attributesPickerButtonWidthConstraint;
	NSLayoutConstraint* _attributesPickerButtonHeigthConstraint;
	PKToolPicker* _toolPicker;
	BOOL _supportsOpacityEditing;
	BOOL _undoRedoButtonsHidden;
	BOOL _alwaysShowUndoButton;
	BOOL _shareButtonHidden;
	BOOL _translucent;
	BOOL _contentsHidden;
	BOOL _wantsClearBackgroundColorInCompactSize;
	AKController* _annotationController;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)undoButtonImage;
+(id)redoButtonImage;
+(id)undoButtonImageWithStyle:(unsigned long long)arg1 ;
+(id)redoButtonImageWithStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(id)presentedViewController;
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2 ;
-(AKController *)annotationController;
-(id)selectedAnnotations;
-(void)setShareButtonHidden:(BOOL)arg1 ;
-(void)setAnnotationController:(AKController *)arg1 ;
-(BOOL)contentsHidden;
-(void)setContentsHidden:(BOOL)arg1 ;
-(void)_undoManagerNotification:(id)arg1 ;
-(void)_annotationSelectionNotification:(id)arg1 ;
-(void)_textEffectsWindowIsHosted:(id)arg1 ;
-(void)_keyWindowDidBecomeActive:(id)arg1 ;
-(void)_undo:(id)arg1 ;
-(void)_undoLongPress:(id)arg1 ;
-(void)_redo:(id)arg1 ;
-(void)_showShapesPicker:(id)arg1 ;
-(void)_showTextAttributes:(id)arg1 ;
-(UIEdgeInsets)_safeAreaInsetsWithCachingIfNeeded;
-(void)_setupPaletteViewIfNecessary;
-(id)_selectedToolInk;
-(void)_updateAttributeControllerInk:(id)arg1 ;
-(void)_forceToolPickerVisibleForViewStateChange:(BOOL)arg1 ;
-(void)hideModernToolbarView;
-(id)popoverPresentingController;
-(void)_updatePalette;
-(BOOL)_setToolPickerVisible:(BOOL)arg1 forResponder:(id)arg2 ;
-(void)forceHideRuler;
-(BOOL)shouldHide;
-(void)setSupportsOpacityEditing:(BOOL)arg1 ;
-(void)revalidateItems;
-(BOOL)shouldUseCompactWidth;
-(BOOL)useNewFullscreenPalette;
-(BOOL)wantsClearBackgroundColorInCompactSize;
-(void)setWantsClearBackgroundColorInCompactSize:(BOOL)arg1 ;
-(void)setContentsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_saveCachedSafeAreaInsets;
-(void)_shouldUseCachedSafeAreaInsets:(BOOL)arg1 ;
-(void)_cleanupAfterUndoAlert;
-(void)_undoAll:(id)arg1 ;
-(void)_showShapeAttributes:(id)arg1 ;
-(void)_installAttributesPickerButtonInPaletteContextEditingViewIfNeeded;
-(void)_updateAttributesPickerButtonWithCurrentSelection:(id)arg1 ;
-(void)_showUndoAlertPopover:(id)arg1 ;
-(void)_showMarkupToolsPopover:(id)arg1 ;
-(void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showTextStylePopover:(id)arg1 ;
-(void)_showShapeAttributesPopover:(id)arg1 ;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg1 ;
-(void)signaturesViewControllerContinueToManageSignatures:(id)arg1 ;
-(void)signaturesViewControllerDidCancel:(id)arg1 ;
-(void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 ;
-(void)didDismissPopover;
-(void)_updateTraitCollectionForViewController:(id)arg1 ;
-(id)createUndoViewController;
-(void)_showSignaturesPopover:(id)arg1 fromSourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(id<AKToolbarViewOpacityEditingDelegate>)opacityEditingDelegate;
-(BOOL)supportsOpacityEditing;
-(void)endOpacityEditing;
-(CGRect)frameObscuredInView:(id)arg1 ;
-(void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2 ;
-(void)toolsListDidSelectOpacityItem:(id)arg1 ;
-(void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg1 ;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(void)paletteViewDidChangePosition:(id)arg1 ;
-(void)paletteViewDidSelectPlusButton:(id)arg1 ;
-(void)paletteViewDidSelectOpacityOption:(id)arg1 ;
-(id)paletteViewSelectedAnnotationColor:(id)arg1 ;
-(id)paletteViewUndoManager:(id)arg1 ;
-(void)paletteViewSelectedToolInkDidChange:(id)arg1 ;
-(void)paletteViewDidToggleRuler:(id)arg1 ;
-(BOOL)paletteView:(id)arg1 shouldSetSelectedToolColor:(id)arg2 ;
-(BOOL)setToolPickerVisible:(BOOL)arg1 forFirstResponder:(id)arg2 ;
-(unsigned long long)layoutForSize:(CGSize)arg1 ;
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
-(id)inkPicker;
-(BOOL)undoRedoButtonsHidden;
-(BOOL)alwaysShowUndoButton;
-(void)setAlwaysShowUndoButton:(BOOL)arg1 ;
-(BOOL)isShareButtonHidden;
-(void)setOpacityEditingDelegate:(id<AKToolbarViewOpacityEditingDelegate>)arg1 ;
@end

