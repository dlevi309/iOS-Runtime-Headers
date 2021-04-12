/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKColorPickerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteToolPreviewDelegate;
@class PKPaletteToolView, PKColorPicker, NSLayoutConstraint, UILayoutGuide, UIColor, NSString;

@interface PKPaletteToolPreview : UIView <UIPopoverPresentationControllerDelegate, PKColorPickerDelegate, PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	BOOL _toolViewVisible;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> _delegate;
	long long _colorUserInterfaceStyle;
	PKPaletteToolView* _tool;
	PKColorPicker* _colorPickerPopover;
	NSLayoutConstraint* _toolViewTopAnchor;
	NSLayoutConstraint* _toolViewHeightAnchor;
	UILayoutGuide* _layoutGuide;
	NSLayoutConstraint* _layoutGuideTopConstraint;
	NSLayoutConstraint* _layoutGuideWidthConstraint;
	NSLayoutConstraint* _layoutGuideHeightConstraint;
	NSLayoutConstraint* _layoutGuideCenterXConstraint;

}

@property (nonatomic,retain) PKPaletteToolView * tool;                                                                  //@synthesize tool=_tool - In the implementation block
@property (nonatomic,retain) PKColorPicker * colorPickerPopover;                                                        //@synthesize colorPickerPopover=_colorPickerPopover - In the implementation block
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
@property (nonatomic,readonly) UIColor * toolColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                           //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                      //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate>)delegate;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UILayoutGuide *)layoutGuide;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(double)scalingFactor;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)showPreviewForToolWithInk:(id)arg1 animated:(BOOL)arg2 ;
-(UIColor *)toolColor;
-(void)toggleColorSelectionPopover;
-(void)colorPickerDidChangeSelectedColor:(id)arg1 ;
-(PKColorPicker *)colorPickerPopover;
-(void)setColorPickerPopover:(PKColorPicker *)arg1 ;
-(void)setTool:(PKPaletteToolView *)arg1 ;
-(void)_showColorSelectionPopover;
-(CGRect)_popoverPresentingSourceRect;
-(id)_popoverPresentingSourceview;
-(void)_updateLayoutGuideConstraints;
-(NSLayoutConstraint *)layoutGuideCenterXConstraint;
-(NSLayoutConstraint *)layoutGuideWidthConstraint;
-(void)setLayoutGuideWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)layoutGuideHeightConstraint;
-(void)setLayoutGuideHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLayoutGuideCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(PKPaletteToolView *)tool;
-(void)_replaceCurrentToolWithToolWithInkIdentifier:(id)arg1 ;
-(void)_updateInkingToolAttributesFromInk:(id)arg1 ;
-(void)_animateToolViewToVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isToolViewVisible;
-(void)setToolViewVisible:(BOOL)arg1 ;
-(double)_toolViewTopSpacing;
-(NSLayoutConstraint *)layoutGuideTopConstraint;
-(void)setToolViewTopAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setToolViewHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toolViewTopAnchor;
-(NSLayoutConstraint *)toolViewHeightAnchor;
-(void)showPreviewForToolWithInk:(id)arg1 ;
-(void)setLayoutGuideTopConstraint:(NSLayoutConstraint *)arg1 ;
@end

