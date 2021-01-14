/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UILAPropertySource.h>

@class NSMutableSet, NSMutableArray, _UILAConfigurationHistory, _UILayoutSpacer, UIView, NSSet, NSArray, NSString;

@interface _UILayoutArrangement : NSObject <_UILAPropertySource> {

	NSMutableSet* _incomingItems;
	NSMutableSet* _outgoingItems;
	NSMutableSet* _hiddenItems;
	NSMutableSet* _newlyHiddenItems;
	NSMutableSet* _newlyUnhiddenItems;
	NSMutableSet* _invalidBaselineConstraints;
	NSMutableArray* _canvasConnectionConstraints;
	BOOL _awaitingAnimationLayoutPass;
	BOOL _layoutFillsCanvas;
	BOOL _layoutUsesCanvasMarginsWhenFilling;
	_UILAConfigurationHistory* _unanimatedConfigurationTarget;
	NSMutableArray* _mutableItems;
	_UILayoutSpacer* _spanningLayoutGuide;
	_UILAConfigurationHistory* _configurationHistory;
	UIView* _canvas;
	long long _axis;

}

@property (setter=_setMutableItems:,nonatomic,retain) NSMutableArray * _mutableItems;                                                           //@synthesize mutableItems=_mutableItems - In the implementation block
@property (nonatomic,readonly) NSSet * _hiddenItems; 
@property (nonatomic,readonly) NSSet * _incomingItems; 
@property (nonatomic,readonly) NSSet * _outgoingItems; 
@property (setter=_setUnanimatedConfigurationTarget:,nonatomic,retain) _UILAConfigurationHistory * _unanimatedConfigurationTarget;              //@synthesize unanimatedConfigurationTarget=_unanimatedConfigurationTarget - In the implementation block
@property (nonatomic,readonly) BOOL _awaitingAnimationLayoutPass;                                                                               //@synthesize awaitingAnimationLayoutPass=_awaitingAnimationLayoutPass - In the implementation block
@property (nonatomic,readonly) id<_UILAPropertySource> _propertySource; 
@property (nonatomic,retain,readonly) _UILayoutSpacer * _spanningLayoutGuide;                                                                   //@synthesize spanningLayoutGuide=_spanningLayoutGuide - In the implementation block
@property (nonatomic,retain,readonly) _UILAConfigurationHistory * _configurationHistory;                                                        //@synthesize configurationHistory=_configurationHistory - In the implementation block
@property (assign,nonatomic) BOOL layoutFillsCanvas;                                                                                            //@synthesize layoutFillsCanvas=_layoutFillsCanvas - In the implementation block
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;                                                                           //@synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling - In the implementation block
@property (assign,nonatomic,__weak) UIView * canvas;                                                                                            //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic) long long axis;                                                                                                    //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints;                                                                              //@synthesize invalidBaselineConstraints=_invalidBaselineConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_configurationHistoryClass;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(NSSet *)invalidBaselineConstraints;
-(void)setAxis:(long long)arg1 ;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(NSSet *)_newlyHiddenItems;
-(void)_invalidateBaselineConstraint:(id)arg1 ;
-(NSSet *)_newlyUnhiddenItems;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(long long)axis;
-(void)_updateArrangementConstraints;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg1 ;
-(id)_spanningLayoutGuideCreateIfNecessary;
-(id)_viewOrGuideForLocationAttribute:(long long)arg1 ;
-(void)_removeSpanningLayoutGuide;
-(id)_baselineDependentConstraints;
-(BOOL)_hasStaleConfiguration;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(id)init;
-(NSSet *)_hiddenItems;
-(_UILAConfigurationHistory *)_unanimatedConfigurationTarget;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateCanvasConnectionConstraintsIfNecessary;
-(void)setCanvas:(UIView *)arg1 ;
-(void)_clearAllConstraintsArrays;
-(BOOL)_usesCenteringConnectionConstraint;
-(void)_createSpanningLayoutGuide;
-(long long)_axisForSpanningLayoutGuide;
-(NSMutableArray *)_mutableItems;
-(void)_setAxis:(long long)arg1 notify:(BOOL)arg2 ;
-(NSSet *)_incomingItems;
-(id)_identifierForSpanningLayoutGuide;
-(void)_updateSpanningLayoutGuideConstraintsIfNecessary;
-(NSArray *)items;
-(_UILAConfigurationHistory *)_configurationHistory;
-(long long)_minAttributeForCanvasConnections;
-(BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
-(void)_didEvaluateMultilineHeightForView:(id)arg1 ;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(void)_setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_hasBaselineChangedNotification:(id)arg1 ;
-(void)_setLayoutFillsCanvas:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_registerAnimationRequest;
-(BOOL)_requiresNotificationForHasBaselinePropertyChanges;
-(BOOL)_awaitingAnimationLayoutPass;
-(void)_clearCanvasConnectionConstraints;
-(id)initWithItems:(id)arg1 onAxis:(long long)arg2 ;
-(float)_spanningLayoutGuideFittingPriority;
-(NSSet *)_outgoingItems;
-(void)_trackChangesWithConfigBlock:(/*^block*/id)arg1 ;
-(void)_createUnanimatedConfigurationTargetIfNecessary;
-(BOOL)_allItemsHidden;
-(void)_setUnanimatedConfigurationTarget:(id)arg1 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1 ;
-(void)_setMutableItems:(id)arg1 ;
-(id<_UILAPropertySource>)_propertySource;
-(void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4 ;
-(void)_visibilityParameterChangedForItem:(id)arg1 ;
-(BOOL)_spanningLayoutGuideAlwaysUsesFittingConstraint;
-(_UILayoutSpacer *)_spanningLayoutGuide;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)_hasBaselineChangedNotificationRequirementDidChange;
-(BOOL)_itemWantsLayoutAsIfVisible:(id)arg1 ;
-(BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1 ;
-(long long)_centerAttributeForCanvasConnections;
-(void)_updateConfigurationHistory;
-(UIView *)canvas;
-(BOOL)layoutFillsCanvas;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1 ;
-(long long)_dimensionAttributeForCurrentAxis;
-(long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1 ;
@end

