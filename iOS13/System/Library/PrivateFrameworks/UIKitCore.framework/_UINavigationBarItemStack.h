/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UINavigationItemChangeObserver;
@class NSArray, NSMutableArray, _UINavigationBarTransitionAssistant, _UINavigationBarItemStackEntry, UINavigationItem;

@interface _UINavigationBarItemStack : NSObject {

	NSArray* _previousItems;
	NSMutableArray* _items;
	int _state;
	id<_UINavigationItemChangeObserver> _changeObserver;
	_UINavigationBarTransitionAssistant* _transitionAssistant;

}

@property (assign,nonatomic,__weak) id<_UINavigationItemChangeObserver> changeObserver;                //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) int state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) _UINavigationBarTransitionAssistant * transitionAssistant;              //@synthesize transitionAssistant=_transitionAssistant - In the implementation block
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * topEntry; 
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * backEntry; 
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * previousTopEntry; 
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * previousBackEntry; 
@property (nonatomic,readonly) UINavigationItem * topItem; 
@property (nonatomic,readonly) UINavigationItem * backItem; 
@property (nonatomic,readonly) UINavigationItem * previousTopItem; 
@property (nonatomic,readonly) UINavigationItem * previousBackItem; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long itemCount; 
@property (getter=isPushingOrPopping,nonatomic,readonly) BOOL pushingOrPopping; 
@property (getter=isPushing,nonatomic,readonly) BOOL pushing; 
@property (getter=isPopping,nonatomic,readonly) BOOL popping; 
-(id)init;
-(id)description;
-(int)state;
-(NSArray *)items;
-(UINavigationItem *)topItem;
-(UINavigationItem *)backItem;
-(long long)itemCount;
-(id)initWithItems:(id)arg1 ;
-(BOOL)stackItemsAreEqualTo:(id)arg1 ;
-(void)iterateItems:(/*^block*/id)arg1 ;
-(void)setItems:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(void)completeOperation;
-(_UINavigationBarTransitionAssistant *)transitionAssistant;
-(void)beginInteractiveTransition;
-(void)endInteractiveTransition;
-(UINavigationItem *)previousTopItem;
-(void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(id)_shim_popNestedNavigationItem;
-(void)_shim_pushNestedNavigationItem:(id)arg1 ;
-(void)popItemWithTransitionAssistant:(id)arg1 ;
-(void)iterateEntries:(/*^block*/id)arg1 ;
-(UINavigationItem *)previousBackItem;
-(void)cancelOperation;
-(BOOL)isPushingOrPopping;
-(_UINavigationBarItemStackEntry *)topEntry;
-(BOOL)isPushing;
-(BOOL)isPopping;
-(_UINavigationBarItemStackEntry *)backEntry;
-(_UINavigationBarItemStackEntry *)previousTopEntry;
-(_UINavigationBarItemStackEntry *)previousBackEntry;
-(void)_updateChangeObserversFor:(id)arg1 ;
-(void)_prepareTransitionWithAssistant:(id)arg1 ;
-(void)_cleanupTransitionAssistant;
-(void)_completeTransition;
-(long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2 ;
-(void)setChangeObserver:(id<_UINavigationItemChangeObserver>)arg1 ;
-(long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1 ;
-(long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1 ;
-(id<_UINavigationItemChangeObserver>)changeObserver;
@end

