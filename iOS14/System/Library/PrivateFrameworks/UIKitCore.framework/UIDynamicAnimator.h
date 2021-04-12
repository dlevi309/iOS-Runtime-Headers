/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIDynamicReferenceSystem, UIDynamicAnimatorDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class PKExtendedPhysicsWorld, CADisplayLink, UIDynamicsDebug, NSMutableDictionary, NSMutableArray, NSMutableSet, NSMutableIndexSet, UIDynamicAnimatorTicker, UIView, NSArray;

@interface UIDynamicAnimator : NSObject {

	PKExtendedPhysicsWorld* _world;
	CADisplayLink* _displaylink;
	double _elapsedTime;
	double _realElapsedTime;
	double _lastUpdateTime;
	double _lastInterval;
	long long _ticks;
	UIDynamicsDebug* _dynamicsDebug;
	NSMutableDictionary* _bodies;
	NSMutableArray* _topLevelBehaviors;
	NSMutableSet* _registeredBehaviors;
	NSMutableSet* _behaviorsToRemove;
	NSMutableSet* _behaviorsToAdd;
	NSMutableIndexSet* _availableFieldCategories;
	NSMutableArray* _postSolverActions;
	NSMutableArray* _beginContacts;
	NSMutableArray* _endContacts;
	BOOL _isInWorldStepMethod;
	BOOL _needsLocalBehaviorReevaluation;
	BOOL _stopping;
	unsigned long long _referenceSystemType;
	unsigned long long _integralization;
	SCD_Struct_UI36 _stateFlags;
	double _accuracy;
	int _registeredCollisionGroups;
	int _registeredImplicitBounds;
	CGRect _referenceSystemBounds;
	id<_UIDynamicReferenceSystem> _referenceSystem;
	int _debugInterval;
	BOOL _debugEnabled;
	/*^block*/id _action;
	id<UIDynamicAnimatorDelegate> _delegate;
	BOOL _disableDisplayLink;
	double _speed;
	UIDynamicAnimatorTicker* _ticker;

}

@property (nonatomic,retain) UIDynamicAnimatorTicker * ticker;                           //@synthesize ticker=_ticker - In the implementation block
@property (nonatomic,readonly) UIView * referenceView; 
@property (nonatomic,copy,readonly) NSArray * behaviors; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) double elapsedTime; 
@property (assign,nonatomic,__weak) id<UIDynamicAnimatorDelegate> delegate; 
+(void)initialize;
+(void)_unregisterAnimator:(id)arg1 ;
+(void)_registerAnimator:(id)arg1 ;
+(void)_referenceViewSizeChanged:(id)arg1 ;
+(void)_clearReferenceViewFromAnimators:(id)arg1 ;
+(id)_allDynamicAnimators;
-(id)_delegate;
-(NSArray *)behaviors;
-(BOOL)isDebugEnabled;
-(id)_world;
-(UIDynamicAnimatorTicker *)ticker;
-(double)_speed;
-(long long)_ticks;
-(void)_tickle;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_setRunning:(BOOL)arg1 ;
-(id)init;
-(id<UIDynamicAnimatorDelegate>)delegate;
-(id)recursiveDescription;
-(void)_start;
-(id)_bodyForItem:(id)arg1 ;
-(id)_registerBodyForItem:(id)arg1 ;
-(void)_unregisterBodyForItem:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)_setupWorld;
-(int)_registerCollisionGroup;
-(void)_registerImplicitBounds;
-(void)_unregisterCollisionGroup;
-(void)_unregisterImplicitBounds;
-(CGRect)_referenceSystemBounds;
-(void)setDelegate:(id<UIDynamicAnimatorDelegate>)arg1 ;
-(double)elapsedTime;
-(id)_keyForItem:(id)arg1 ;
-(id)description;
-(id)itemsInRect:(CGRect)arg1 ;
-(double)_ptmRatio;
-(id)_referenceSystem;
-(void)_checkBehavior:(id)arg1 ;
-(BOOL)_containsBehavior:(id)arg1 ;
-(id)initWithReferenceView:(id)arg1 ;
-(void)removeAllBehaviors;
-(BOOL)_isWorldActive;
-(void)_clearReferenceView;
-(void)_traverseBehaviorHierarchy:(/*^block*/id)arg1 ;
-(void)_registerBehavior:(id)arg1 ;
-(void)_unregisterBehavior:(id)arg1 ;
-(void)_preSolverStep;
-(void)_registerFieldCategoryForFieldBehavior:(id)arg1 ;
-(void)didEndContact:(id)arg1 ;
-(void)_shouldReevaluateLocalBehaviors;
-(void)_unregisterFieldCategoryForFieldBehavior:(id)arg1 ;
-(void)_runBlockPostSolverIfNeeded:(/*^block*/id)arg1 ;
-(unsigned long long)debugFrameInterval;
-(void)updateItemUsingCurrentState:(id)arg1 ;
-(void)setDebugFrameInterval:(unsigned long long)arg1 ;
-(id)_newBodyForItem:(id)arg1 inItemGroup:(id)arg2 ;
-(void)_evaluateLocalBehaviors;
-(void)_defaultMapper:(id)arg1 position:(CGPoint)arg2 angle:(double)arg3 itemType:(unsigned long long)arg4 ;
-(int)_debugInterval;
-(void)_reevaluateImplicitBounds;
-(void)_reportBeginContacts;
-(void)_reportEndContacts;
-(void)_postSolverStep;
-(void)didBeginContact:(id)arg1 ;
-(void)_setReferenceSystem:(id)arg1 ;
-(void)setDebugAnimationSpeed:(double)arg1 ;
-(void)_setAnimatorIntegralization:(unsigned long long)arg1 ;
-(unsigned long long)_animatorIntegralization;
-(id)layoutAttributesForCellAtIndexPath:(id)arg1 ;
-(void)_setDebugInterval:(int)arg1 ;
-(double)debugAnimationSpeed;
-(void)_setDebugEnabled:(BOOL)arg1 ;
-(double)_realElapsedTime;
-(void)_setAlwaysDisableDisplayLink:(BOOL)arg1 ;
-(double)_animatorInterval;
-(BOOL)_alwaysDisableDisplayLink;
-(unsigned long long)_referenceSystemType;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)_stop;
-(void)_setSpeed:(double)arg1 ;
-(void)setTicker:(UIDynamicAnimatorTicker *)arg1 ;
-(void)addBehavior:(id)arg1 ;
-(BOOL)isRunning;
-(void)setReferenceView:(UIView *)arg1 ;
-(void)_setAction:(/*^block*/id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)_animatorStep:(double)arg1 ;
-(void)removeBehavior:(id)arg1 ;
-(UIView *)referenceView;
-(void)_displayLinkTick:(id)arg1 ;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(id)initWithReferenceSystem:(id)arg1 ;
-(void)updateItemFromCurrentState:(id)arg1 ;
-(BOOL)_debugEnabled;
-(void)dealloc;
@end

