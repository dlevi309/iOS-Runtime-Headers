/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKToolbarViewController.h>
#import <libobjc.A.dylib/AKSignaturesViewControllerDelegate.h>
#import <libobjc.A.dylib/AKSignatureCreationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIColor, UIView, UIBarButtonItem, NSArray, UIAlertController, AKSignaturesViewController_iOS, AKLineStylesViewController, AKTextAttributesViewController, AKColorPickerViewController, AKFloatingAttributePickerViewController, NSLayoutConstraint, NSString;

@interface AKToolbarViewController_iOS : AKToolbarViewController <AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate> {

	UIColor* _barTintColor;
	UIColor* _tintColor;
	UIView* _floatingAttributeToolbarContainer;
	UIBarButtonItem* _richSketchButton;
	UIBarButtonItem* _sketchButton;
	UIBarButtonItem* _inkButton;
	UIBarButtonItem* _textButton;
	UIBarButtonItem* _loupeButton;
	UIBarButtonItem* _signatureButton;
	UIBarButtonItem* _undoButton;
	UIBarButtonItem* _redoButton;
	UIBarButtonItem* _textStyleButton;
	UIBarButtonItem* _lineStyleButton;
	UIBarButtonItem* _strokeColorButton;
	NSArray* _staticToolbarItems;
	UIAlertController* _signaturesAlertController;
	UIAlertController* _undoAlertController;
	AKSignaturesViewController_iOS* _signaturesSheetViewController;
	AKLineStylesViewController* _lineStylesViewController;
	AKTextAttributesViewController* _textAttributesViewController;
	AKColorPickerViewController* _colorPickerPopoverViewController;
	AKFloatingAttributePickerViewController* _attributeToolbarViewController;
	NSLayoutConstraint* _attributeToolbarViewControllerConstraint;

}

@property (nonatomic,retain) UIBarButtonItem * richSketchButton;                                                    //@synthesize richSketchButton=_richSketchButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sketchButton;                                                        //@synthesize sketchButton=_sketchButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * inkButton;                                                           //@synthesize inkButton=_inkButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * textButton;                                                          //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loupeButton;                                                         //@synthesize loupeButton=_loupeButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signatureButton;                                                     //@synthesize signatureButton=_signatureButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * undoButton;                                                          //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * redoButton;                                                          //@synthesize redoButton=_redoButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * textStyleButton;                                                     //@synthesize textStyleButton=_textStyleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * lineStyleButton;                                                     //@synthesize lineStyleButton=_lineStyleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * strokeColorButton;                                                   //@synthesize strokeColorButton=_strokeColorButton - In the implementation block
@property (nonatomic,retain) NSArray * staticToolbarItems;                                                          //@synthesize staticToolbarItems=_staticToolbarItems - In the implementation block
@property (nonatomic,retain) UIAlertController * signaturesAlertController;                                         //@synthesize signaturesAlertController=_signaturesAlertController - In the implementation block
@property (nonatomic,retain) UIAlertController * undoAlertController;                                               //@synthesize undoAlertController=_undoAlertController - In the implementation block
@property (nonatomic,retain) AKSignaturesViewController_iOS * signaturesSheetViewController;                        //@synthesize signaturesSheetViewController=_signaturesSheetViewController - In the implementation block
@property (nonatomic,retain) AKLineStylesViewController * lineStylesViewController;                                 //@synthesize lineStylesViewController=_lineStylesViewController - In the implementation block
@property (nonatomic,retain) AKTextAttributesViewController * textAttributesViewController;                         //@synthesize textAttributesViewController=_textAttributesViewController - In the implementation block
@property (nonatomic,retain) AKColorPickerViewController * colorPickerPopoverViewController;                        //@synthesize colorPickerPopoverViewController=_colorPickerPopoverViewController - In the implementation block
@property (nonatomic,retain) AKFloatingAttributePickerViewController * attributeToolbarViewController;              //@synthesize attributeToolbarViewController=_attributeToolbarViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * attributeToolbarViewControllerConstraint;                         //@synthesize attributeToolbarViewControllerConstraint=_attributeToolbarViewControllerConstraint - In the implementation block
@property (nonatomic,retain) UIView * floatingAttributeToolbarContainer;                                            //@synthesize floatingAttributeToolbarContainer=_floatingAttributeToolbarContainer - In the implementation block
@property (nonatomic,readonly) double visibleHeightOfAttributeBar; 
@property (nonatomic,readonly) double heightIncludingAdditionalVisibleBars; 
@property (nonatomic,retain) UIColor * barTintColor;                                                                //@synthesize barTintColor=_barTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                   //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIBarButtonItem *)textButton;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(id)initWithController:(id)arg1 ;
-(void)setTextButton:(UIBarButtonItem *)arg1 ;
-(void)_undoManagerNotification:(id)arg1 ;
-(void)revalidateItems;
-(void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showTextStylePopover:(id)arg1 ;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg1 ;
-(void)signaturesViewControllerContinueToManageSignatures:(id)arg1 ;
-(void)signaturesViewControllerDidCancel:(id)arg1 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg1 ;
-(BOOL)isPresentingPopovers;
-(BOOL)isPresentingPopover;
-(void)dismissPresentedPopovers;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(UIBarButtonItem *)undoButton;
-(void)_buildBasicItems;
-(void)_peripheralAvailabilityDidUpdate:(id)arg1 ;
-(void)dismissAttributeToolbarForSelectedAnnotations;
-(void)setFloatingAttributeToolbarContainer:(UIView *)arg1 ;
-(UIView *)floatingAttributeToolbarContainer;
-(BOOL)_legacyDoodlesEnabled;
-(id)_barButtonForToolbarType:(unsigned long long)arg1 ;
-(void)setSketchButton:(UIBarButtonItem *)arg1 ;
-(void)setInkButton:(UIBarButtonItem *)arg1 ;
-(void)setSignatureButton:(UIBarButtonItem *)arg1 ;
-(void)setLoupeButton:(UIBarButtonItem *)arg1 ;
-(void)setUndoButton:(UIBarButtonItem *)arg1 ;
-(void)setRedoButton:(UIBarButtonItem *)arg1 ;
-(void)setTextStyleButton:(UIBarButtonItem *)arg1 ;
-(void)setLineStyleButton:(UIBarButtonItem *)arg1 ;
-(void)setStrokeColorButton:(UIBarButtonItem *)arg1 ;
-(void)_layoutToolbarForTraitCollection:(id)arg1 ;
-(UIBarButtonItem *)inkButton;
-(UIBarButtonItem *)loupeButton;
-(UIBarButtonItem *)signatureButton;
-(UIBarButtonItem *)strokeColorButton;
-(UIBarButtonItem *)lineStyleButton;
-(UIBarButtonItem *)textStyleButton;
-(UIBarButtonItem *)sketchButton;
-(void)setStaticToolbarItems:(NSArray *)arg1 ;
-(AKFloatingAttributePickerViewController *)attributeToolbarViewController;
-(void)_updateToggleButton:(id)arg1 withTraitCollection:(id)arg2 ;
-(NSArray *)staticToolbarItems;
-(id)_doodleModeToolbarImage;
-(UIBarButtonItem *)richSketchButton;
-(UIBarButtonItem *)redoButton;
-(void)dismissAttributeToolbarImmediately;
-(void)showAttributeToolbarForSelectedAnnotations:(id)arg1 andToolMode:(unsigned long long)arg2 ;
-(void)syncUIToSelectedColor;
-(AKColorPickerViewController *)colorPickerPopoverViewController;
-(id)_createNewToggleToolbarButtonWithImage:(id)arg1 tag:(long long)arg2 target:(id)arg3 selector:(SEL)arg4 autoUpdatesColor:(BOOL)arg5 ;
-(void)_showSignaturesPopover:(id)arg1 ;
-(void)_undoLongPressAction:(id)arg1 ;
-(id)_createNewCustomViewToolbarButtonWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)_showLineStylePopover:(id)arg1 ;
-(void)_showColorPickerPopover:(id)arg1 ;
-(id)_createNewColorPickerToolbarButtonWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(double)visibleHeightOfAttributeBar;
-(UIAlertController *)signaturesAlertController;
-(AKSignaturesViewController_iOS *)signaturesSheetViewController;
-(AKLineStylesViewController *)lineStylesViewController;
-(AKTextAttributesViewController *)textAttributesViewController;
-(UIAlertController *)undoAlertController;
-(void)_showUndoAlert:(id)arg1 ;
-(id)_buildUndoAlertController;
-(void)_undoButtonAction:(id)arg1 ;
-(void)_undoAllButtonAction:(id)arg1 ;
-(void)setSignaturesAlertController:(UIAlertController *)arg1 ;
-(void)signaturesViewControllerEnterSignatureMode:(id)arg1 ;
-(void)_setupPassthroughViewsForViewController:(id)arg1 ;
-(void)setLineStylesViewController:(AKLineStylesViewController *)arg1 ;
-(void)setTextAttributesViewController:(AKTextAttributesViewController *)arg1 ;
-(void)setColorPickerPopoverViewController:(AKColorPickerViewController *)arg1 ;
-(long long)_attributeTagForCurrentSelectionState;
-(void)setSignaturesSheetViewController:(AKSignaturesViewController_iOS *)arg1 ;
-(void)setUndoAlertController:(UIAlertController *)arg1 ;
-(void)setAttributeToolbarViewControllerConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)attributeToolbarViewControllerConstraint;
-(void)_layoutAttributeContainer;
-(void)setAttributeToolbarViewController:(AKFloatingAttributePickerViewController *)arg1 ;
-(unsigned long long)_workaroundToolbarPopoverPositioningBug26744300;
-(void)_deleteSelectedItems:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 ;
-(double)heightIncludingAdditionalVisibleBars;
-(void)_redoButtonAction:(id)arg1 ;
-(BOOL)_validateUndoButton;
-(void)setRichSketchButton:(UIBarButtonItem *)arg1 ;
@end
