/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPaletteViewStateObserving.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteToolPickerViewDelegate, PKPaletteViewStateObservable;
@class UIScrollView, UIStackView, PKPaletteToolPickerOverlayView, NSArray, NSLayoutConstraint, NSMutableArray, PKPaletteToolView, UIViewController, PKInk, NSString;

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewStateObserving, PKPaletteViewSizeScaling> {

	BOOL _isRulerActive;
	BOOL _usingShortestToolSpacing;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate> _delegate;
	long long _colorUserInterfaceStyle;
	id<PKPaletteViewStateObservable> _paletteViewState;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	PKPaletteToolPickerOverlayView* _overlayView;
	NSArray* _tools;
	NSLayoutConstraint* _stackViewWidthConstraint;
	NSMutableArray* _toolsWidthConstraints;
	NSMutableArray* _toolsHeightConstraints;
	NSMutableArray* _toolsWidthCompactConstraints;
	PKPaletteToolView* _lastSelectedTool;
	UIViewController* _presentedAttributePickerPopover;

}

@property (assign,nonatomic,__weak) id<PKPaletteViewStateObservable> paletteViewState;                                     //@synthesize paletteViewState=_paletteViewState - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerOverlayView * overlayView;                                                 //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSArray * tools;                                                                              //@synthesize tools=_tools - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewWidthConstraint;                                                //@synthesize stackViewWidthConstraint=_stackViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolsWidthConstraints;                                                       //@synthesize toolsWidthConstraints=_toolsWidthConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolsHeightConstraints;                                                      //@synthesize toolsHeightConstraints=_toolsHeightConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolsWidthCompactConstraints;                                                //@synthesize toolsWidthCompactConstraints=_toolsWidthCompactConstraints - In the implementation block
@property (nonatomic,retain) PKPaletteToolView * lastSelectedTool;                                                         //@synthesize lastSelectedTool=_lastSelectedTool - In the implementation block
@property (nonatomic,retain) UIViewController * presentedAttributePickerPopover;                                           //@synthesize presentedAttributePickerPopover=_presentedAttributePickerPopover - In the implementation block
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKInk * selectedToolInk; 
@property (assign,nonatomic) BOOL isRulerActive;                                                                           //@synthesize isRulerActive=_isRulerActive - In the implementation block
@property (nonatomic,copy) NSArray * toolIdentifiers; 
@property (nonatomic,copy) NSArray * toolProperties; 
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                            //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) BOOL selectedToolSupportsDisplayingSelectedColor; 
@property (nonatomic,readonly) BOOL selectedToolSupportsChangingColor; 
@property (assign,getter=isUsingShortestToolSpacing,nonatomic) BOOL usingShortestToolSpacing;                              //@synthesize usingShortestToolSpacing=_usingShortestToolSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                              //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                         //@synthesize scalingFactor=_scalingFactor - In the implementation block
+(id)defaultToolIdentifiers;
-(id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate>)delegate;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(UIStackView *)stackView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setOverlayView:(PKPaletteToolPickerOverlayView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(PKPaletteToolPickerOverlayView *)overlayView;
-(void)_updateUI;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(PKInk *)selectedToolInk;
-(double)scalingFactor;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRulerActive;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(NSArray *)tools;
-(void)_installStackView;
-(id)initWithPaletteViewStateObservable:(id)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(id<PKPaletteViewStateObservable>)paletteViewState;
-(void)setUsingShortestToolSpacing:(BOOL)arg1 ;
-(void)didChangeAnnotationSupport:(id)arg1 ;
-(void)setPaletteViewState:(id<PKPaletteViewStateObservable>)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)updatePopoverUI;
-(void)setSelectedToolInk:(PKInk *)arg1 ;
-(void)setIsRulerActive:(BOOL)arg1 ;
-(void)setSelectedToolInkColor:(id)arg1 ;
-(BOOL)selectedToolSupportsDisplayingSelectedColor;
-(id)_selectedToolView;
-(void)setToolIdentifiers:(NSArray *)arg1 ;
-(void)setToolProperties:(NSArray *)arg1 ;
-(void)setSelectedToolIdentifier:(id)arg1 ;
-(id)selectedToolIdentifier;
-(NSArray *)toolIdentifiers;
-(NSArray *)toolProperties;
-(void)toggleBetweenLastSelectedToolAndEraser;
-(void)toggleBetweenLastSelectedToolAndCurrentlySelectedTool;
-(void)_installScrollView;
-(id)toolsFromToolIdentifiers:(id)arg1 ;
-(void)_installTools;
-(void)_installOverlayView;
-(void)setToolsWidthConstraints:(NSMutableArray *)arg1 ;
-(void)setToolsHeightConstraints:(NSMutableArray *)arg1 ;
-(void)setToolsWidthCompactConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)toolsWidthConstraints;
-(NSMutableArray *)toolsHeightConstraints;
-(NSMutableArray *)toolsWidthCompactConstraints;
-(void)_toolTapGestureRecognizer:(id)arg1 ;
-(void)_updateToolsScaleFactor;
-(void)_showToolAttributesPopover;
-(id)_selectedTool;
-(void)setLastSelectedTool:(PKPaletteToolView *)arg1 ;
-(void)setPresentedAttributePickerPopover:(UIViewController *)arg1 ;
-(UIViewController *)presentedAttributePickerPopover;
-(void)_toolAttributesDidChange:(id)arg1 ;
-(CGRect)sourceRectForPopoverPresentationForTool:(id)arg1 ;
-(id)sourceViewForPopoverPresentationForTool:(id)arg1 ;
-(BOOL)isUsingShortestToolSpacing;
-(id)_eraserTool;
-(PKPaletteToolView *)lastSelectedTool;
-(id)_firstInkingTool;
-(BOOL)selectedToolSupportsChangingColor;
-(void)setTools:(NSArray *)arg1 ;
-(NSLayoutConstraint *)stackViewWidthConstraint;
-(void)setStackViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

