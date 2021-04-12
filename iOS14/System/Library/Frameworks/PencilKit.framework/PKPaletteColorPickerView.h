/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKPaletteColorPickerControllerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteQuickColorPicking.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteColorPickerViewDelegate, PKPaletteColorPickerController;
@class UICollectionView, NSArray, PKPaletteMulticolorSwatch, UILongPressGestureRecognizer, UIColor, NSString;

@interface PKPaletteColorPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKPaletteColorPickerControllerDelegate, PKEdgeLocatable, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> _delegate;
	long long _colorUserInterfaceStyle;
	long long _colorPickerMode;
	UICollectionView* _collectionView;
	NSArray* _swatches;
	PKPaletteMulticolorSwatch* _multicolorSwatch;
	NSArray* _swatchColors;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	id<PKPaletteColorPickerController> _colorPickerController;
	UIColor* _analyticsInitialColor;
	long long _analyticsColorChangeCount;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * swatches;                                                                            //@synthesize swatches=_swatches - In the implementation block
@property (nonatomic,retain) PKPaletteMulticolorSwatch * multicolorSwatch;                                                  //@synthesize multicolorSwatch=_multicolorSwatch - In the implementation block
@property (nonatomic,retain) NSArray * swatchColors;                                                                        //@synthesize swatchColors=_swatchColors - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                                     //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) id<PKPaletteColorPickerController> colorPickerController;                                      //@synthesize colorPickerController=_colorPickerController - In the implementation block
@property (nonatomic,retain) UIColor * analyticsInitialColor;                                                               //@synthesize analyticsInitialColor=_analyticsInitialColor - In the implementation block
@property (assign,nonatomic) long long analyticsColorChangeCount;                                                           //@synthesize analyticsColorChangeCount=_analyticsColorChangeCount - In the implementation block
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                             //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
@property (assign,nonatomic) long long colorPickerMode;                                                                     //@synthesize colorPickerMode=_colorPickerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                               //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                          //@synthesize scalingFactor=_scalingFactor - In the implementation block
+(id)collectionViewFlowLayoutWithItemSize:(CGSize)arg1 minimumLineSpacing:(double)arg2 minimumInteritemSpacing:(double)arg3 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didChangePreferredContentSize:(id)arg1 ;
-(id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(double)scalingFactor;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate>)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(UIColor *)selectedColor;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_updateUI;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(NSArray *)swatches;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)setColorPickerMode:(long long)arg1 ;
-(long long)colorPickerMode;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)toggleColorSelectionPopover;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePopoverUI;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(CGSize)swatchSize;
-(id)_swatchColorsForTraitCollection:(id)arg1 ;
-(void)setSwatchColors:(NSArray *)arg1 ;
-(void)_swatchLongPressHandler:(id)arg1 ;
-(void)_enableOrDisableLongPressGesture;
-(NSArray *)swatchColors;
-(void)setMulticolorSwatch:(PKPaletteMulticolorSwatch *)arg1 ;
-(PKPaletteMulticolorSwatch *)multicolorSwatch;
-(void)setSwatches:(NSArray *)arg1 ;
-(unsigned long long)_multicolorSwatchIndexForEdge:(unsigned long long)arg1 ;
-(void)_showExtendedColorPicker;
-(id<PKPaletteColorPickerController>)colorPickerController;
-(long long)analyticsColorChangeCount;
-(void)_reloadSwatchColorsForTraitCollection:(id)arg1 ;
-(BOOL)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)arg1 ;
-(id)_selectedSwatch;
-(BOOL)_colorPickerAllowsColorSelection;
-(id)swatchWithColor:(id)arg1 ;
-(void)_setMulticolorSwatchColor:(id)arg1 ;
-(void)setColorPickerController:(id<PKPaletteColorPickerController>)arg1 ;
-(CGRect)_popoverPresentingSourceRect;
-(id)_popoverPresentingSourceview;
-(void)setAnalyticsColorChangeCount:(long long)arg1 ;
-(void)setAnalyticsInitialColor:(UIColor *)arg1 ;
-(UIColor *)analyticsInitialColor;
-(void)reloadColorsForCurrentColorPickerMode;
-(id)swatchWithIdentifier:(id)arg1 ;
-(id)traitCollectionWithCurrentInterfaceStyle;
-(void)colorPickerControllerDidChangeSelectedColor:(id)arg1 ;
-(id)colorAtPoint:(CGPoint)arg1 ;
@end

