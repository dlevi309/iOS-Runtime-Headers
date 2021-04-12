/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@protocol AVLayoutViewItem;
@class AVLayoutItemAttributes, NSArray, NSString, NSMutableArray, AVCustomStackLayout, AVCABackdropLayerView, UIVisualEffectView, UIView;

@interface AVLayoutView : AVView <AVPlaybackControlsViewItem> {

	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _collapsedOrExcluded;
	BOOL _collapsed;
	BOOL _included;
	BOOL _prefersLowQualityEffects;
	BOOL _layoutDirty;
	BOOL _stackLayoutNeedsUpdate;
	AVLayoutItemAttributes* _layoutAttributes;
	NSArray* _arrangedSubviews;
	unsigned long long _shapeStyle;
	NSString* _debugIdentifier;
	NSMutableArray* _flattenedArrangedSubviewsInLayoutOrder;
	AVCustomStackLayout* _currentStackLayout;
	AVCABackdropLayerView* _backdropLayerView;
	UIVisualEffectView* _secondaryMaterialOverlayView;
	UIView*<AVLayoutViewItem> _targetViewForSecondaryMaterialOverlayView;
	CGSize _extrinsicContentSize;

}

@property (nonatomic,retain) NSMutableArray * flattenedArrangedSubviewsInLayoutOrder;                          //@synthesize flattenedArrangedSubviewsInLayoutOrder=_flattenedArrangedSubviewsInLayoutOrder - In the implementation block
@property (nonatomic,retain) AVCustomStackLayout * currentStackLayout;                                         //@synthesize currentStackLayout=_currentStackLayout - In the implementation block
@property (assign,getter=isLayoutDirty,nonatomic) BOOL layoutDirty;                                            //@synthesize layoutDirty=_layoutDirty - In the implementation block
@property (nonatomic,retain) AVCABackdropLayerView * backdropLayerView;                                        //@synthesize backdropLayerView=_backdropLayerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryMaterialOverlayView;                                //@synthesize secondaryMaterialOverlayView=_secondaryMaterialOverlayView - In the implementation block
@property (assign,nonatomic) BOOL stackLayoutNeedsUpdate;                                                      //@synthesize stackLayoutNeedsUpdate=_stackLayoutNeedsUpdate - In the implementation block
@property (nonatomic,retain) UIView*<AVLayoutViewItem> targetViewForSecondaryMaterialOverlayView;              //@synthesize targetViewForSecondaryMaterialOverlayView=_targetViewForSecondaryMaterialOverlayView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arrangedSubviews;                                                //@synthesize arrangedSubviews=_arrangedSubviews - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentLayoutMargins; 
@property (assign,nonatomic) unsigned long long shapeStyle;                                                    //@synthesize shapeStyle=_shapeStyle - In the implementation block
@property (assign,nonatomic) BOOL prefersLowQualityEffects;                                                    //@synthesize prefersLowQualityEffects=_prefersLowQualityEffects - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                                         //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize;                                                      //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                                    //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                                //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                                  //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded;                          //@synthesize collapsedOrExcluded=_collapsedOrExcluded - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                                      //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                                     //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                                      //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)reevaluateHiddenStateOfAllItems;
-(void)setContentLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)isRemoved;
-(void)setPrefersLowQualityEffects:(BOOL)arg1 ;
-(NSArray *)arrangedSubviews;
-(AVLayoutItemAttributes *)layoutAttributes;
-(UIVisualEffectView *)secondaryMaterialOverlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGSize)extrinsicContentSize;
-(void)setShapeStyle:(unsigned long long)arg1 ;
-(BOOL)isIncluded;
-(NSString *)debugIdentifier;
-(NSDirectionalEdgeInsets)contentLayoutMargins;
-(void)_applyShapeStyle;
-(BOOL)isLayoutDirty;
-(BOOL)stackLayoutNeedsUpdate;
-(NSMutableArray *)flattenedArrangedSubviewsInLayoutOrder;
-(void)layoutAttributesDidChange;
-(NSString *)debugDescription;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(id)backgroundColor;
-(AVCustomStackLayout *)currentStackLayout;
-(BOOL)prefersLowQualityEffects;
-(AVCABackdropLayerView *)backdropLayerView;
-(void)layoutSubviews;
-(void)setIncluded:(BOOL)arg1 ;
-(id)prioritizedSizeThatFitsSize:(CGSize)arg1 ;
-(BOOL)hasAlternateAppearance;
-(void)_removeArrangedSubview:(id)arg1 ;
-(UIView*<AVLayoutViewItem>)targetViewForSecondaryMaterialOverlayView;
-(void)setFlattenedArrangedSubviewsInLayoutOrder:(NSMutableArray *)arg1 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)_updateStackLayoutIfNeeded;
-(BOOL)isCollapsedOrExcluded;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)arg1 ;
-(BOOL)hasVisibleArrangedSubview;
-(void)setLayoutDirty:(BOOL)arg1 ;
-(void)setBackdropLayerView:(AVCABackdropLayerView *)arg1 ;
-(void)setRowSpacing:(double)arg1 afterRow:(unsigned long long)arg2 ;
-(void)_insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasFullScreenAppearance;
-(void)setSecondaryMaterialOverlayView:(UIVisualEffectView *)arg1 ;
-(void)setStackLayoutNeedsUpdate:(BOOL)arg1 ;
-(void)setNeedsLayout;
-(unsigned long long)shapeStyle;
-(void)setCurrentStackLayout:(AVCustomStackLayout *)arg1 ;
-(void)setTargetViewForSecondaryMaterialOverlayView:(UIView*<AVLayoutViewItem>)arg1 ;
@end

