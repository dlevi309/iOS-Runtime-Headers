/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIDynamicAnimator, NSMutableArray, NSArray;

@interface UIDynamicBehavior : NSObject {

	UIDynamicAnimator* _context;
	NSMutableArray* _items;
	NSMutableArray* _behaviors;
	NSMutableArray* _addedBehaviors;
	/*^block*/id _action;

}

@property (nonatomic,copy,readonly) NSArray * childBehaviors; 
@property (nonatomic,copy) id action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIDynamicAnimator * dynamicAnimator; 
+(void)initialize;
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(void)_setContext:(id)arg1 ;
-(id)_context;
-(id)action;
-(id)items;
-(id)_items;
-(void)_step;
-(void)setAction:(id)arg1 ;
-(NSArray *)childBehaviors;
-(void)removeChildBehavior:(id)arg1 ;
-(void)addChildBehavior:(id)arg1 ;
-(UIDynamicAnimator *)dynamicAnimator;
-(void)_setItems:(id)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)_removeItem:(id)arg1 ;
-(void)_changedParameterForBody:(id)arg1 ;
-(id)_itemsDescription;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(BOOL)allowsAnimatorToStop;
-(void)_reattachAutolayoutToItemIfNecessary:(id)arg1 ;
-(void)_detachAutolayoutFromItemIfNecessary:(id)arg1 ;
-(void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg1 detach:(BOOL)arg2 ;
@end

