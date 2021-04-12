/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDynamicAnimator.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {

	/*^block*/id _invalidationHandler;
	NSMutableDictionary* _itemBehaviors;

}

@property (nonatomic,readonly) NSArray * visibleItems; 
@property (nonatomic,readonly) NSArray * visibleItemBehaviors; 
@property (nonatomic,readonly) NSSet * visibleItemIdentifiers; 
-(id)behaviorForIdentifier:(id)arg1 ;
-(void)addItemBehavior:(id)arg1 ;
-(NSSet *)visibleItemIdentifiers;
-(void)removeItemBehaviorForIdentifier:(id)arg1 ;
-(NSArray *)visibleItems;
-(NSArray *)visibleItemBehaviors;
-(void)updateAllItemsFromCurrentState;
-(id)initWithReferenceSystem:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(BOOL)_animatorStep:(double)arg1 ;
@end

