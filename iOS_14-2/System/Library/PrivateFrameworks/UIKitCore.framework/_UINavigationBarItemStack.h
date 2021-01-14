/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItems:(id)arg1 ;
-(void)_completeTransition;
-(long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2 ;
-(void)completeOperation;
-(id)init;
-(_UINavigationBarItemStackEntry *)topEntry;
-(void)_cleanupTransitionAssistant;
-(UINavigationItem *)topItem;
-(BOOL)isPopping;
-(void)popItemWithTransitionAssistant:(id)arg1 ;
-(void)_updateChangeObserversFor:(id)arg1 ;
-(long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1 ;
-(void)_shim_pushNestedNavigationItem:(id)arg1 ;
-(long long)itemCount;
-(id<_UINavigationItemChangeObserver>)changeObserver;
-(NSArray *)items;
-(void)setItems:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(_UINavigationBarTransitionAssistant *)transitionAssistant;
-(void)beginInteractiveTransition;
-(id)description;
-(void)_prepareTransitionWithAssistant:(id)arg1 ;
-(UINavigationItem *)previousTopItem;
-(void)endInteractiveTransition;
-(BOOL)isPushingOrPopping;
-(UINavigationItem *)previousBackItem;
-(int)state;
-(void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(void)setChangeObserver:(id<_UINavigationItemChangeObserver>)arg1 ;
-(BOOL)stackItemsAreEqualTo:(id)arg1 ;
-(void)iterateEntries:(/*^block*/id)arg1 ;
-(_UINavigationBarItemStackEntry *)previousTopEntry;
-(_UINavigationBarItemStackEntry *)previousBackEntry;
-(long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1 ;
-(void)cancelOperation;
-(_UINavigationBarItemStackEntry *)backEntry;
-(id)_shim_popNestedNavigationItem;
-(void)iterateItems:(/*^block*/id)arg1 ;
-(UINavigationItem *)backItem;
-(void)reverseIterateEntries:(/*^block*/id)arg1 ;
-(BOOL)isPushing;
@end

