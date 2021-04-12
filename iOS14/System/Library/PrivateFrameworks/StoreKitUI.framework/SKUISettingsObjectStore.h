/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSMutableOrderedSet;

@interface SKUISettingsObjectStore : NSObject {

	NSMutableOrderedSet* _allObjects;
	BOOL _dirty;
	NSMutableOrderedSet* _visibleObjects;

}
-(id)init;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)description;
-(unsigned long long)numberOfObjects;
-(void)removeObject:(id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(void)addObject:(id)arg1 hidden:(BOOL)arg2 ;
-(unsigned long long)numberOfVisibleObjects;
-(void)hideObject:(id)arg1 ;
-(unsigned long long)indexOfVisibleObject:(id)arg1 ;
-(BOOL)objectIsVisible:(id)arg1 ;
-(void)revealObject:(id)arg1 ;
-(id)visibleObjectAtIndex:(unsigned long long)arg1 ;
-(void)_updateVisibleOrder;
-(void)enumerateVisibleObjects:(/*^block*/id)arg1 ;
@end

