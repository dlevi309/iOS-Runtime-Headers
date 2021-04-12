/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlColorPaletteViewInteractionDelegate;
@class HUQuickControlColorViewProfile, NSIndexPath, HFColorPalette, HFColorPaletteColor, UICollectionView, UICollectionViewFlowLayout, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator, NSString;

@interface HUColorLinearPaletteView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	HUQuickControlColorViewProfile* _profile;
	id<HUQuickControlColorPaletteViewInteractionDelegate> _interactionDelegate;
	unsigned long long _reachabilityState;
	unsigned long long _mode;
	NSIndexPath* _selectedColorIndexPath;
	HFColorPalette* _colorPalette;
	HFColorPalette* _calibratedColorPalette;
	HFColorPaletteColor* _selectedColor;
	NSIndexPath* _prevSelectedColorIndexPath;
	UICollectionView* _colorSwatchCollectionView;
	UICollectionViewFlowLayout* _collectionViewFlowLayout;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;

}

@property (nonatomic,retain) HFColorPalette * calibratedColorPalette;                                                       //@synthesize calibratedColorPalette=_calibratedColorPalette - In the implementation block
@property (nonatomic,retain) HFColorPaletteColor * selectedColor;                                                           //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) NSIndexPath * prevSelectedColorIndexPath;                                                      //@synthesize prevSelectedColorIndexPath=_prevSelectedColorIndexPath - In the implementation block
@property (nonatomic,retain) UICollectionView * colorSwatchCollectionView;                                                  //@synthesize colorSwatchCollectionView=_colorSwatchCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewFlowLayout;                                         //@synthesize collectionViewFlowLayout=_collectionViewFlowLayout - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;                                     //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;                                           //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,copy) HUQuickControlColorViewProfile * profile;                                                        //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                       //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                                     //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedColorIndexPath;                                                          //@synthesize selectedColorIndexPath=_selectedColorIndexPath - In the implementation block
@property (nonatomic,retain) HFColorPalette * colorPalette;                                                                 //@synthesize colorPalette=_colorPalette - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                                          //@synthesize reachabilityState=_reachabilityState - In the implementation block
-(void)setMode:(unsigned long long)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(unsigned long long)mode;
-(HUQuickControlColorViewProfile *)profile;
-(void)setProfile:(HUQuickControlColorViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlColorPaletteViewInteractionDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(id<HUQuickControlColorPaletteViewInteractionDelegate>)interactionDelegate;
-(void)setCollectionViewFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewFlowLayout;
-(void)setColorPalette:(HFColorPalette *)arg1 ;
-(HFColorPalette *)colorPalette;
-(HFColorPaletteColor *)selectedColor;
-(void)setSelectedColor:(HFColorPaletteColor *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(id)initWithProfile:(id)arg1 colorPalette:(id)arg2 ;
-(void)updateSelectedColorIndexPathToIndexPath:(id)arg1 ;
-(NSIndexPath *)selectedColorIndexPath;
-(void)setSelectedColorIndexPath:(NSIndexPath *)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)_actuateSelectionTapticFeedback;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)_updateCalibratedColorPalette;
-(void)_setColorPalette:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(UICollectionView *)colorSwatchCollectionView;
-(NSIndexPath *)prevSelectedColorIndexPath;
-(void)setPrevSelectedColorIndexPath:(NSIndexPath *)arg1 ;
-(HFColorPalette *)calibratedColorPalette;
-(unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(BOOL)arg2 ;
-(void)_setSelectedColor:(id)arg1 notifyDelegate:(BOOL)arg2 selectionChanged:(BOOL)arg3 ;
-(void)_actuateImpactTapticFeedback;
-(void)setCalibratedColorPalette:(HFColorPalette *)arg1 ;
-(void)setColorSwatchCollectionView:(UICollectionView *)arg1 ;
@end

