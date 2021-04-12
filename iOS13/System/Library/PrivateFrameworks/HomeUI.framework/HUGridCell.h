/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>

@class HUGridCellLayoutOptions, UIVisualEffect, HUGridCellBackgroundView, HFItem, UIVisualEffectView, UIView, NSString;

@interface HUGridCell : UICollectionViewCell <HUGridCellProtocol> {

	BOOL _cellContentsHidden;
	BOOL _rearranging;
	HUGridCellLayoutOptions* _layoutOptions;
	long long _primaryState;
	UIVisualEffect* _contentEffect;
	UIVisualEffect* _secondaryContentEffect;
	double _secondaryContentDimmingFactor;
	HUGridCellBackgroundView* _gridBackgroundView;
	HFItem* _item;
	UIVisualEffectView* _gridForegroundView;

}

@property (assign,nonatomic) long long primaryState;                                            //@synthesize primaryState=_primaryState - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundView * gridBackgroundView;                     //@synthesize gridBackgroundView=_gridBackgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * gridForegroundView;                           //@synthesize gridForegroundView=_gridForegroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * contentEffect;                                    //@synthesize contentEffect=_contentEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * secondaryContentEffect;                           //@synthesize secondaryContentEffect=_secondaryContentEffect - In the implementation block
@property (assign,nonatomic) double secondaryContentDimmingFactor;                              //@synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundState; 
@property (nonatomic,readonly) UIView * gridForegroundContentView; 
@property (nonatomic,readonly) unsigned long long iconDisplayStyle; 
@property (nonatomic,retain) HFItem * item;                                                     //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;              //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions;                           //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging;                             //@synthesize rearranging=_rearranging - In the implementation block
+(Class)layoutOptionsClass;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimationWithAspectRatio:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(HUGridCellLayoutOptions *)layoutOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1 ;
-(long long)primaryState;
-(void)setPrimaryState:(long long)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1 ;
-(void)layoutOptionsDidChange;
-(double)secondaryContentDimmingFactor;
-(UIVisualEffect *)contentEffect;
-(UIView *)gridForegroundContentView;
-(unsigned long long)iconDisplayStyle;
-(unsigned long long)backgroundState;
-(void)setContentEffect:(UIVisualEffect *)arg1 ;
-(void)_setupCommonCellAppearance;
-(HUGridCellBackgroundView *)gridBackgroundView;
-(void)setGridBackgroundView:(HUGridCellBackgroundView *)arg1 ;
-(void)setGridForegroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)gridForegroundView;
-(void)_updateForegroundStyle;
-(void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2 ;
-(void)setSecondaryContentEffect:(UIVisualEffect *)arg1 ;
-(void)setSecondaryContentDimmingFactor:(double)arg1 ;
-(void)displayStyleDidChange;
-(UIVisualEffect *)secondaryContentEffect;
@end

