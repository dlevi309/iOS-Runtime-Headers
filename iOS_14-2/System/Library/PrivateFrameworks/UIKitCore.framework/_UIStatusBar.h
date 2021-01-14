/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol _UIStatusBarVisualProvider, _UIStatusBarActionable;
@class UIScreen, NSDictionary, UIColor, _UIStatusBarData, UIGestureRecognizer, NSArray, NSMutableDictionary, UIView, UIPointerInteraction, UIAccessibilityHUDGestureManager, _UIStatusBarDataAggregator, _UIStatusBarStyleAttributes, _UIStatusBarAction, NSString, NSSet;

@interface _UIStatusBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, UIPointerInteractionDelegate> {

	id<_UIStatusBarVisualProvider> _visualProvider;
	BOOL _needsLayoutUpdateForPartFrames;
	UIScreen* _targetScreen;
	NSDictionary* _visualProviderInfo;
	long long _style;
	UIColor* _foregroundColor;
	long long _mode;
	long long _orientation;
	_UIStatusBarData* _currentData;
	UIGestureRecognizer* _actionGestureRecognizer;
	NSArray* _enabledPartIdentifiers;
	NSMutableDictionary* _items;
	NSMutableDictionary* _displayItemStates;
	/*^block*/id _updateCompletionHandler;
	UIView* _foregroundView;
	id<_UIStatusBarActionable> _targetActionable;
	UIPointerInteraction* _pointerInteraction;
	id<_UIStatusBarActionable> _hoveredActionable;
	UIAccessibilityHUDGestureManager* _accessibilityHUDGestureManager;
	Class _visualProviderClass;
	NSDictionary* _regions;
	_UIStatusBarDataAggregator* _dataAggregator;
	_UIStatusBarData* _currentAggregatedData;
	_UIStatusBarStyleAttributes* _styleAttributes;
	_UIStatusBarAction* _action;
	/*^block*/id _regionActionValidationBlock;
	CGRect _avoidanceFrame;

}

@property (nonatomic,retain) NSMutableDictionary * items;                                                                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * displayItemStates;                                                                             //@synthesize displayItemStates=_displayItemStates - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                                                                                            //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
@property (nonatomic,retain) UIView * foregroundView;                                                                                             //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic,__weak) id<_UIStatusBarActionable> targetActionable;                                                                  //@synthesize targetActionable=_targetActionable - In the implementation block
@property (nonatomic,retain) UIPointerInteraction * pointerInteraction;                                                                           //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<_UIStatusBarActionable> hoveredActionable;                                                                 //@synthesize hoveredActionable=_hoveredActionable - In the implementation block
@property (nonatomic,retain) UIAccessibilityHUDGestureManager * accessibilityHUDGestureManager;                                                   //@synthesize accessibilityHUDGestureManager=_accessibilityHUDGestureManager - In the implementation block
@property (setter=_setVisualProviderClassName:,getter=_visualProviderClassName,nonatomic,retain) NSString * visualProviderClassName; 
@property (setter=_setVisualProviderClass:,getter=_visualProviderClass,nonatomic,retain) Class visualProviderClass;                               //@synthesize visualProviderClass=_visualProviderClass - In the implementation block
@property (nonatomic,readonly) id<_UIStatusBarVisualProvider> visualProvider; 
@property (nonatomic,readonly) NSDictionary * regions;                                                                                            //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDataAggregator * dataAggregator;                                                                       //@synthesize dataAggregator=_dataAggregator - In the implementation block
@property (nonatomic,readonly) _UIStatusBarData * currentAggregatedData;                                                                          //@synthesize currentAggregatedData=_currentAggregatedData - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) unsigned animationContextId; 
@property (getter=areAnimationsEnabled,nonatomic,readonly) BOOL animationsEnabled; 
@property (nonatomic,retain) _UIStatusBarStyleAttributes * styleAttributes;                                                                       //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,retain) _UIStatusBarAction * action;                                                                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id regionActionValidationBlock;                                                                                        //@synthesize regionActionValidationBlock=_regionActionValidationBlock - In the implementation block
@property (nonatomic,retain) UIScreen * targetScreen;                                                                                             //@synthesize targetScreen=_targetScreen - In the implementation block
@property (nonatomic,retain) NSDictionary * visualProviderInfo;                                                                                   //@synthesize visualProviderInfo=_visualProviderInfo - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIColor * foregroundColor;                                                                                             //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) long long mode;                                                                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) _UIStatusBarData * currentData;                                                                                    //@synthesize currentData=_currentData - In the implementation block
@property (nonatomic,readonly) NSSet * dependentDataEntryKeys; 
@property (nonatomic,copy) _UIStatusBarData * overlayData; 
@property (nonatomic,readonly) UIGestureRecognizer * actionGestureRecognizer;                                                                     //@synthesize actionGestureRecognizer=_actionGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSArray * enabledPartIdentifiers;                                                                                      //@synthesize enabledPartIdentifiers=_enabledPartIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect avoidanceFrame;                                                                                               //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(BOOL)arg3 ;
+(CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(BOOL)arg3 isAzulBLinked:(BOOL)arg4 ;
+(id)sensorActivityIndicator;
+(id)stringForStatusBarStyle:(long long)arg1 ;
+(id)sensorActivityIndicatorPartIdentifier;
+(void)setSensorActivityIndicator:(id)arg1 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(UIPointerInteraction *)pointerInteraction;
-(void)setStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)resetVisualProvider;
-(long long)mode;
-(_UIStatusBarStyleAttributes *)styleAttributes;
-(CGSize)intrinsicContentSize;
-(void)setOffset:(UIOffset)arg1 forPartWithIdentifier:(id)arg2 ;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(id)_regionsForPartWithIdentifier:(id)arg1 includeInternalItems:(BOOL)arg2 ;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1 ;
-(void)_updateActionGestureRecognizerAllowableTouchTypesIfNeeded;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)regionActionValidationBlock;
-(void)_fixupDisplayItemAttributes;
-(UIColor *)foregroundColor;
-(void)_prepareVisualProviderIfNeeded;
-(void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(void)setStyle:(long long)arg1 forPartWithIdentifier:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(CGRect)avoidanceFrame;
-(BOOL)_forceLayoutEngineSolutionInRationalEdges;
-(id)_statusBarWindowForAccessibilityHUD;
-(void)updateWithData:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(id)displayItemWithIdentifier:(id)arg1 ;
-(id)updateCompletionHandler;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIOffset)offsetForPartWithIdentifier:(id)arg1 ;
-(UIView *)foregroundView;
-(UIAccessibilityHUDGestureManager *)accessibilityHUDGestureManager;
-(NSDictionary *)regions;
-(_UIStatusBarDataAggregator *)dataAggregator;
-(_UIStatusBarAction *)action;
-(id)itemsDependingOnKeys:(id)arg1 ;
-(long long)styleForPartWithIdentifier:(id)arg1 ;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(CGRect)_pressFrameForActionable:(id)arg1 ;
-(CGRect)frameForDisplayItemWithIdentifier:(id)arg1 ;
-(void)updateWithAnimations:(id)arg1 ;
-(void)setAccessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 ;
-(void)_setVisualProviderClass:(Class)arg1 ;
-(void)_updateWithAggregatedData:(id)arg1 ;
-(void)_prepareAnimations:(id)arg1 ;
-(NSMutableDictionary *)items;
-(id<_UIStatusBarActionable>)hoveredActionable;
-(id)_effectiveTargetScreen;
-(void)setDisplayItemStates:(NSMutableDictionary *)arg1 ;
-(void)setRegionActionValidationBlock:(id)arg1 ;
-(BOOL)_cursorLocation:(CGPoint)arg1 isInsideHoverableActionable:(id)arg2 ;
-(CGRect)_frameForActionable:(id)arg1 actionInsets:(UIEdgeInsets)arg2 ;
-(NSSet *)dependentDataEntryKeys;
-(void)_setVisualProviderClassName:(id)arg1 ;
-(void)_rearrangeOverflowedItems;
-(void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2 ;
-(CGRect)_extendedHoverFrameForActionable:(id)arg1 ;
-(NSString *)description;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(CGRect)frameForPartWithIdentifier:(id)arg1 includeInternalItems:(BOOL)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2 ;
-(void)setForegroundView:(UIView *)arg1 ;
-(UIView *)containerView;
-(id)stateForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarData *)overlayData;
-(NSArray *)enabledPartIdentifiers;
-(id)dataEntryKeysForItemsWithIdentifiers:(id)arg1 ;
-(id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1 ;
-(id)_actionablesForPartWithIdentifier:(id)arg1 includeInternalItems:(BOOL)arg2 onlyVisible:(BOOL)arg3 ;
-(id)regionWithIdentifier:(id)arg1 ;
-(void)_performWithInheritedAnimation:(/*^block*/id)arg1 ;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
-(BOOL)areAnimationsEnabled;
-(void)setUpdateCompletionHandler:(id)arg1 ;
-(void)setEnabledPartIdentifiers:(NSArray *)arg1 ;
-(UIGestureRecognizer *)actionGestureRecognizer;
-(void)setHoveredActionable:(id<_UIStatusBarActionable>)arg1 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(long long)orientation;
-(Class)_visualProviderClass;
-(BOOL)_gestureRecognizer:(id)arg1 pressInsideActionable:(id)arg2 ;
-(id)itemWithIdentifier:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)statusBarGesture:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_cursorLocation:(CGPoint)arg1 isInsideActionable:(id)arg2 ;
-(void)setOverlayData:(_UIStatusBarData *)arg1 ;
-(void)_updateStyleAttributes;
-(_UIStatusBarData *)currentData;
-(BOOL)_gestureRecognizer:(id)arg1 isInsideActionable:(id)arg2 ;
-(unsigned)animationContextId;
-(void)setStyle:(long long)arg1 ;
-(void)_updateWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)displayItemStates;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)setTargetScreen:(UIScreen *)arg1 ;
-(void)_performAnimations:(id)arg1 ;
-(void)setTargetActionable:(id<_UIStatusBarActionable>)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 touchInsideActionable:(id)arg2 ;
-(NSDictionary *)visualProviderInfo;
-(long long)_effectiveStyleFromStyle:(long long)arg1 ;
-(id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setVisualProviderInfo:(NSDictionary *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2 ;
-(_UIStatusBarData *)currentAggregatedData;
-(id<_UIStatusBarActionable>)targetActionable;
-(id<_UIStatusBarVisualProvider>)visualProvider;
-(void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3 ;
-(UIScreen *)targetScreen;
-(double)alphaForPartWithIdentifier:(id)arg1 ;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(id)_itemWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(long long)style;
-(void)_updateRegionItems;
-(CGRect)_frameForActionable:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(CGPoint)arg2 ;
-(id)_visualProviderClassName;
@end

