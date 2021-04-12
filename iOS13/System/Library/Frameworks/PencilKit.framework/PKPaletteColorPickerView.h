/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PKColorPickerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteQuickColorPicking.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteColorPickerViewDelegate;
@class UICollectionView, NSArray, UILongPressGestureRecognizer, PKColorPicker, UIColor, NSString;

@interface PKPaletteColorPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, PKColorPickerDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKEdgeLocatable, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> _delegate;
	long long _colorUserInterfaceStyle;
	long long _colorPickerMode;
	UICollectionView* _collectionView;
	NSArray* _swatches;
	NSArray* _swatchColors;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	PKColorPicker* _colorPickerPopover;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * swatches;                                                                            //@synthesize swatches=_swatches - In the implementation block
@property (nonatomic,retain) NSArray * swatchColors;                                                                        //@synthesize swatchColors=_swatchColors - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                                     //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) PKColorPicker * colorPickerPopover;                                                            //@synthesize colorPickerPopover=_colorPickerPopover - In the implementation block
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
-(void)dealloc;
-(id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate>)delegate;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)didChangePreferredContentSize:(id)arg1 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(double)scalingFactor;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)updatePopoverUI;
-(void)toggleColorSelectionPopover;
-(void)colorPickerDidChangeSelectedColor:(id)arg1 ;
-(void)setColorPickerMode:(long long)arg1 ;
-(PKColorPicker *)colorPickerPopover;
-(void)setColorPickerPopover:(PKColorPicker *)arg1 ;
-(CGSize)swatchSize;
-(id)_swatchColorsForTraitCollection:(id)arg1 ;
-(void)setSwatchColors:(NSArray *)arg1 ;
-(void)_swatchLongPressHandler:(id)arg1 ;
-(void)_enableOrDisableLongPressGesture;
-(NSArray *)swatchColors;
-(void)setSwatches:(NSArray *)arg1 ;
-(id)_multicolorSwatch;
-(void)_showColorSelectionPopover;
-(void)_reloadSwatchColorsForTraitCollection:(id)arg1 ;
-(long long)colorPickerMode;
-(NSArray *)swatches;
-(BOOL)_isSwatchMulticolorSwatch:(id)arg1 ;
-(BOOL)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)arg1 ;
-(id)_selectedSwatch;
-(BOOL)_colorPickerAllowsColorSelection;
-(id)swatchWithColor:(id)arg1 ;
-(CGRect)_popoverPresentingSourceRect;
-(id)_popoverPresentingSourceview;
-(void)reloadColorsForCurrentColorPickerMode;
-(id)swatchWithIdentifier:(id)arg1 ;
-(id)traitCollectionWithCurrentInterfaceStyle;
-(id)colorAtPoint:(CGPoint)arg1 ;
@end

