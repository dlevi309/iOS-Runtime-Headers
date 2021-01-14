/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarDisplayItem, _UIStatusBarIdentifier, _UIStatusBar, _UIStatusBarItem, NSMutableArray, _UIStatusBarStyleAttributes, _UIStatusBarAnimation, NSMutableSet, _UIStatusBarDisplayItemPlacementState, NSArray;

@interface _UIStatusBarDisplayItemState : NSObject <_UIStatusBarPrioritized> {

	BOOL _wasEnabled;
	BOOL _wasVisible;
	BOOL _dataEnabled;
	BOOL _floating;
	_UIStatusBarDisplayItem* _displayItem;
	_UIStatusBarIdentifier* _identifier;
	_UIStatusBar* _statusBar;
	_UIStatusBarItem* _item;
	NSMutableArray* _placementStates;
	long long _preferredPlacementStateIndex;
	long long _currentPlacementStateIndex;
	_UIStatusBarStyleAttributes* _overriddenStyleAttributes;
	long long _previousPlacementStateIndex;
	long long _dataUpdateStatus;
	long long _placementUpdateStatus;
	long long _enabilityStatus;
	long long _visibilityStatus;
	_UIStatusBarAnimation* _addingAnimation;
	_UIStatusBarAnimation* _removingAnimation;
	NSMutableSet* _animations;

}

@property (nonatomic,copy) _UIStatusBarIdentifier * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                                                  //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarItem * item;                                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarDisplayItem * displayItem;                                     //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * placementStates;                                                 //@synthesize placementStates=_placementStates - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementState * currentPlacementState; 
@property (assign,nonatomic) long long preferredPlacementStateIndex;                                           //@synthesize preferredPlacementStateIndex=_preferredPlacementStateIndex - In the implementation block
@property (assign,nonatomic) long long currentPlacementStateIndex;                                             //@synthesize currentPlacementStateIndex=_currentPlacementStateIndex - In the implementation block
@property (nonatomic,retain) _UIStatusBarStyleAttributes * overriddenStyleAttributes;                          //@synthesize overriddenStyleAttributes=_overriddenStyleAttributes - In the implementation block
@property (assign,nonatomic) BOOL wasEnabled;                                                                  //@synthesize wasEnabled=_wasEnabled - In the implementation block
@property (assign,nonatomic) BOOL wasVisible;                                                                  //@synthesize wasVisible=_wasVisible - In the implementation block
@property (assign,nonatomic) long long previousPlacementStateIndex;                                            //@synthesize previousPlacementStateIndex=_previousPlacementStateIndex - In the implementation block
@property (getter=_animationType,nonatomic,readonly) long long animationType; 
@property (assign,nonatomic) long long dataUpdateStatus;                                                       //@synthesize dataUpdateStatus=_dataUpdateStatus - In the implementation block
@property (assign,nonatomic) long long placementUpdateStatus;                                                  //@synthesize placementUpdateStatus=_placementUpdateStatus - In the implementation block
@property (getter=isEnabledIgnoringAnimations,nonatomic,readonly) BOOL enabledIgnoringAnimations; 
@property (assign,nonatomic) BOOL dataEnabled;                                                                 //@synthesize dataEnabled=_dataEnabled - In the implementation block
@property (assign,nonatomic) BOOL floating;                                                                    //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) long long enabilityStatus;                                                        //@synthesize enabilityStatus=_enabilityStatus - In the implementation block
@property (assign,nonatomic) long long visibilityStatus;                                                       //@synthesize visibilityStatus=_visibilityStatus - In the implementation block
@property (nonatomic,retain) _UIStatusBarAnimation * addingAnimation;                                          //@synthesize addingAnimation=_addingAnimation - In the implementation block
@property (nonatomic,retain) _UIStatusBarAnimation * removingAnimation;                                        //@synthesize removingAnimation=_removingAnimation - In the implementation block
@property (nonatomic,readonly) NSMutableSet * animations;                                                      //@synthesize animations=_animations - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,copy,readonly) NSArray * potentialPlacementRegionIdentifiers; 
@property (nonatomic,readonly) long long priority; 
+(void)setupRelationsBetweenDisplayItemStates:(id)arg1 visualProvider:(id)arg2 ;
+(id)stateForDisplayItemWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)setOverriddenStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(_UIStatusBarDisplayItem *)displayItem;
-(NSMutableSet *)animations;
-(long long)placementUpdateStatus;
-(_UIStatusBarStyleAttributes *)overriddenStyleAttributes;
-(_UIStatusBar *)statusBar;
-(_UIStatusBarDisplayItemPlacementState *)currentPlacementState;
-(BOOL)isCurrentPlacement:(id)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)updateToNextEnabledPlacement;
-(long long)_animationType;
-(void)_cancelObsoleteAnimations;
-(BOOL)floating;
-(id)placementStateForPlacement:(id)arg1 ;
-(void)setRemovingAnimation:(_UIStatusBarAnimation *)arg1 ;
-(void)addPlacement:(id)arg1 inRegion:(id)arg2 ;
-(_UIStatusBarItem *)item;
-(_UIStatusBarAnimation *)addingAnimation;
-(BOOL)updatePlacement;
-(NSArray *)potentialPlacementRegionIdentifiers;
-(BOOL)_updatePlacementWithRecursionBlock:(/*^block*/id)arg1 ;
-(BOOL)dataEnabled;
-(NSMutableArray *)placementStates;
-(BOOL)hasRunningAnimations;
-(void)setItem:(_UIStatusBarItem *)arg1 ;
-(void)setDisplayItem:(_UIStatusBarDisplayItem *)arg1 ;
-(void)setPlacementStates:(NSMutableArray *)arg1 ;
-(BOOL)wasVisible;
-(id)description;
-(void)setWasEnabled:(BOOL)arg1 ;
-(void)prepareForDataUpdate;
-(BOOL)isEnabledIgnoringAnimations;
-(id)_animationWithUpdateAnimation:(id)arg1 ;
-(void)setEnabilityStatus:(long long)arg1 ;
-(void)setPreviousPlacementStateIndex:(long long)arg1 ;
-(long long)currentPlacementStateIndex;
-(id)updateWithData:(id)arg1 styleAttributes:(id)arg2 ;
-(long long)dataUpdateStatus;
-(id)_updateForUpdatedData:(id)arg1 updatedStyleAttributes:(id)arg2 updatedEnability:(id)arg3 ;
-(void)setWasVisible:(BOOL)arg1 ;
-(BOOL)_resolveDependentItemStatesWithBlock:(/*^block*/id)arg1 ;
-(_UIStatusBarAnimation *)removingAnimation;
-(id)_updateForItem:(id)arg1 data:(id)arg2 styleAttributes:(id)arg3 ;
-(void)setCurrentPlacementStateIndex:(long long)arg1 ;
-(BOOL)wasEnabled;
-(void)setIdentifier:(_UIStatusBarIdentifier *)arg1 ;
-(BOOL)isEnabled;
-(void)setPlacementUpdateStatus:(long long)arg1 ;
-(_UIStatusBarIdentifier *)identifier;
-(long long)preferredPlacementStateIndex;
-(long long)enabilityStatus;
-(void)resetToPreferredPlacement;
-(void)_updateStatuses;
-(void)setAddingAnimation:(_UIStatusBarAnimation *)arg1 ;
-(void)setDataUpdateStatus:(long long)arg1 ;
-(void)setVisibilityStatus:(long long)arg1 ;
-(BOOL)_updateToNextPlacementStateIfNeeded;
-(long long)visibilityStatus;
-(long long)priority;
-(long long)previousPlacementStateIndex;
-(void)setDataEnabled:(BOOL)arg1 ;
-(void)setPreferredPlacementStateIndex:(long long)arg1 ;
-(id)_effectiveStyleAttributesFromStyleAttributes:(id)arg1 data:(id)arg2 styleAttributesChanged:(BOOL*)arg3 ;
-(BOOL)prepareAnimation:(id)arg1 ;
@end

