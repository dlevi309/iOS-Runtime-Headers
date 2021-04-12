/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>

@class HUGridCellLayoutOptions, UIVisualEffect, HUGridCellBackgroundView, HFItem, UIVisualEffectView, UIPointerInteraction, UIView, NSString;

@interface HUGridCell : UICollectionViewCell <UIPointerInteractionDelegate, HUGridCellProtocol> {

	BOOL _cellContentsHidden;
	BOOL _rearranging;
	BOOL _pointerInteractionEnabled;
	HUGridCellLayoutOptions* _layoutOptions;
	double _pointerRegionMargin;
	long long _primaryState;
	UIVisualEffect* _contentEffect;
	UIVisualEffect* _secondaryContentEffect;
	double _secondaryContentDimmingFactor;
	HUGridCellBackgroundView* _gridBackgroundView;
	HFItem* _item;
	UIVisualEffectView* _gridForegroundView;
	UIPointerInteraction* _pointerInteraction;

}

@property (assign,nonatomic) long long primaryState;                                                         //@synthesize primaryState=_primaryState - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundView * gridBackgroundView;                                  //@synthesize gridBackgroundView=_gridBackgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * gridForegroundView;                                        //@synthesize gridForegroundView=_gridForegroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * contentEffect;                                                 //@synthesize contentEffect=_contentEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * secondaryContentEffect;                                        //@synthesize secondaryContentEffect=_secondaryContentEffect - In the implementation block
@property (assign,nonatomic) double secondaryContentDimmingFactor;                                           //@synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor - In the implementation block
@property (nonatomic,retain) UIPointerInteraction * pointerInteraction;                                      //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundState; 
@property (nonatomic,readonly) UIView * gridForegroundContentView; 
@property (nonatomic,readonly) unsigned long long iconDisplayStyle; 
@property (nonatomic,readonly) BOOL managesOwnBackgroundViewLayout; 
@property (nonatomic,retain) HFItem * item;                                                                  //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;                           //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions;                                        //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging;                                          //@synthesize rearranging=_rearranging - In the implementation block
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled;              //@synthesize pointerInteractionEnabled=_pointerInteractionEnabled - In the implementation block
@property (assign,nonatomic) double pointerRegionMargin;                                                     //@synthesize pointerRegionMargin=_pointerRegionMargin - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(Class)layoutOptionsClass;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimationWithAspectRatio:(double)arg1 ;
-(UIPointerInteraction *)pointerInteraction;
-(id)initWithFrame:(CGRect)arg1 ;
-(HFItem *)item;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(BOOL)isPointerInteractionEnabled;
-(void)setPrimaryState:(long long)arg1 ;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(HUGridCellLayoutOptions *)layoutOptions;
-(long long)primaryState;
-(void)setPointerInteractionEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)displayStyleDidChange;
-(HUGridCellBackgroundView *)gridBackgroundView;
-(unsigned long long)iconDisplayStyle;
-(double)secondaryContentDimmingFactor;
-(UIVisualEffect *)secondaryContentEffect;
-(void)layoutOptionsDidChange;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1 ;
-(double)pointerRegionMargin;
-(void)setPointerRegionMargin:(double)arg1 ;
-(UIVisualEffect *)contentEffect;
-(UIView *)gridForegroundContentView;
-(unsigned long long)backgroundState;
-(void)setContentEffect:(UIVisualEffect *)arg1 ;
-(void)_setupCommonCellAppearance;
-(void)setGridBackgroundView:(HUGridCellBackgroundView *)arg1 ;
-(void)setGridForegroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)gridForegroundView;
-(BOOL)managesOwnBackgroundViewLayout;
-(void)_updateForegroundStyle;
-(void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2 ;
-(void)setSecondaryContentEffect:(UIVisualEffect *)arg1 ;
-(void)setSecondaryContentDimmingFactor:(double)arg1 ;
@end

