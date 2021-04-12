/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarContentView.h>

@class _UIButtonBar, _UIPointerInteractionAssistant, NSLayoutConstraint, NSMapTable, _UIBarButtonItemData;

@interface _UIToolbarContentView : _UIBarContentView {

	_UIButtonBar* _buttonBar;
	_UIPointerInteractionAssistant* _assistant;
	NSLayoutConstraint* _buttonBarLeadingConstraint;
	NSLayoutConstraint* _buttonBarTrailingConstraint;
	NSMapTable* _absorptionTable;
	double _standardEdgeSpacing;
	BOOL _compactMetrics;
	long long _itemDistribution;
	_UIBarButtonItemData* _plainItemAppearance;
	_UIBarButtonItemData* _doneItemAppearance;
	NSDirectionalEdgeInsets _padding;

}

@property (assign,nonatomic) NSDirectionalEdgeInsets padding;                       //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long itemDistribution;                            //@synthesize itemDistribution=_itemDistribution - In the implementation block
@property (assign,nonatomic) BOOL compactMetrics;                                   //@synthesize compactMetrics=_compactMetrics - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * plainItemAppearance;              //@synthesize plainItemAppearance=_plainItemAppearance - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * doneItemAppearance;               //@synthesize doneItemAppearance=_doneItemAppearance - In the implementation block
-(void)_appearanceChanged;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(_UIBarButtonItemData *)plainItemAppearance;
-(void)updateContent;
-(_UIBarButtonItemData *)doneItemAppearance;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(long long)itemDistribution;
-(void)setItemDistribution:(long long)arg1 ;
-(void)layoutMarginsDidChange;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)tintColorDidChange;
-(void)setCompactMetrics:(BOOL)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(id)_computeEdgeAbsorptionForItems:(id)arg1 ;
-(double)defaultEdgeSpacing;
-(void)_setButtonBarLeadingInset:(double)arg1 trailingInset:(double)arg2 ;
-(NSDirectionalEdgeInsets)_directionalSafeArea;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(void)_updateThreeUpFlagsForItems:(id)arg1 ;
-(void)updateConstraints;
-(void)_ensureButtonBar;
-(double)absorptionForItem:(id)arg1 ;
-(double)defaultTextPadding;
-(NSDirectionalEdgeInsets)padding;
-(void)reloadWithItems:(id)arg1 ;
-(void)setPadding:(NSDirectionalEdgeInsets)arg1 ;
-(long long)barType;
-(BOOL)compactMetrics;
@end

