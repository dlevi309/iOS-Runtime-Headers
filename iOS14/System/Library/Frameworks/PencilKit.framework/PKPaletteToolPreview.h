/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaletteColorPickerControllerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteToolPreviewDelegate, PKPaletteColorPickerController;
@class NSString, PKPaletteToolView, NSLayoutConstraint, UILayoutGuide, UIColor;

@interface PKPaletteToolPreview : UIView <UIPopoverPresentationControllerDelegate, PKPaletteColorPickerControllerDelegate, PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	BOOL _toolViewVisible;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> _delegate;
	long long _colorUserInterfaceStyle;
	NSString* _localeIdentifier;
	PKPaletteToolView* _toolView;
	id<PKPaletteColorPickerController> _colorPickerController;
	NSLayoutConstraint* _toolViewTopAnchor;
	NSLayoutConstraint* _toolViewHeightAnchor;
	UILayoutGuide* _layoutGuide;
	NSLayoutConstraint* _layoutGuideTopConstraint;
	NSLayoutConstraint* _layoutGuideWidthConstraint;
	NSLayoutConstraint* _layoutGuideHeightConstraint;
	NSLayoutConstraint* _layoutGuideCenterXConstraint;

}

@property (nonatomic,retain) PKPaletteToolView * toolView;                                                              //@synthesize toolView=_toolView - In the implementation block
@property (nonatomic,retain) id<PKPaletteColorPickerController> colorPickerController;                                  //@synthesize colorPickerController=_colorPickerController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolViewTopAnchor;                                                    //@synthesize toolViewTopAnchor=_toolViewTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolViewHeightAnchor;                                                 //@synthesize toolViewHeightAnchor=_toolViewHeightAnchor - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                                                               //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * layoutGuideTopConstraint;                                             //@synthesize layoutGuideTopConstraint=_layoutGuideTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * layoutGuideWidthConstraint;                                           //@synthesize layoutGuideWidthConstraint=_layoutGuideWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * layoutGuideHeightConstraint;                                          //@synthesize layoutGuideHeightConstraint=_layoutGuideHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * layoutGuideCenterXConstraint;                                         //@synthesize layoutGuideCenterXConstraint=_layoutGuideCenterXConstraint - In the implementation block
@property (assign,getter=isToolViewVisible,nonatomic) BOOL toolViewVisible;                                             //@synthesize toolViewVisible=_toolViewVisible - In the implementation block
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                         //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                                                                 //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) UIColor * toolColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                           //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                      //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(NSString *)localeIdentifier;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILayoutGuide *)layoutGuide;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate>)delegate;
-(double)scalingFactor;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate>)arg1 ;
-(void)updateConstraints;
-(void)_updateUI;
-(void)setScalingFactor:(double)arg1 ;
-(PKPaletteToolView *)toolView;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)toggleColorSelectionPopover;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)showPreviewForTool:(id)arg1 animated:(BOOL)arg2 ;
-(id<PKPaletteColorPickerController>)colorPickerController;
-(void)setColorPickerController:(id<PKPaletteColorPickerController>)arg1 ;
-(CGRect)_popoverPresentingSourceRect;
-(id)_popoverPresentingSourceview;
-(void)colorPickerControllerDidChangeSelectedColor:(id)arg1 ;
-(void)_updateLayoutGuideConstraints;
-(NSLayoutConstraint *)layoutGuideCenterXConstraint;
-(NSLayoutConstraint *)layoutGuideWidthConstraint;
-(void)setLayoutGuideWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)layoutGuideHeightConstraint;
-(void)setLayoutGuideHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLayoutGuideCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_replaceCurrentToolWithToolWithIdentifier:(id)arg1 ;
-(void)_updateToolViewInkingToolAttributesFromTool:(id)arg1 ;
-(void)_animateToolViewToVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isToolViewVisible;
-(void)setToolViewVisible:(BOOL)arg1 ;
-(double)_toolViewTopSpacing;
-(NSLayoutConstraint *)layoutGuideTopConstraint;
-(void)setToolView:(PKPaletteToolView *)arg1 ;
-(void)setToolViewTopAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setToolViewHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toolViewTopAnchor;
-(NSLayoutConstraint *)toolViewHeightAnchor;
-(void)_showColorSelectionPopover;
-(UIColor *)toolColor;
-(void)setLayoutGuideTopConstraint:(NSLayoutConstraint *)arg1 ;
@end

