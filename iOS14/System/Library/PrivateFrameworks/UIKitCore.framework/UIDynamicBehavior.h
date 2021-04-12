/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_items;
-(id)init;
-(void)_step;
-(id)action;
-(void)_removeItem:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(UIDynamicAnimator *)dynamicAnimator;
-(id)items;
-(void)_changedParameterForBody:(id)arg1 ;
-(id)_itemsDescription;
-(id)description;
-(void)_addItem:(id)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(BOOL)allowsAnimatorToStop;
-(void)_reattachAutolayoutToItemIfNecessary:(id)arg1 ;
-(void)_detachAutolayoutFromItemIfNecessary:(id)arg1 ;
-(void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg1 detach:(BOOL)arg2 ;
-(void)_associate;
-(NSArray *)childBehaviors;
-(void)_dissociate;
-(void)addChildBehavior:(id)arg1 ;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(void)removeChildBehavior:(id)arg1 ;
-(void)_setItems:(id)arg1 ;
-(id)_context;
-(void)_setContext:(id)arg1 ;
@end

