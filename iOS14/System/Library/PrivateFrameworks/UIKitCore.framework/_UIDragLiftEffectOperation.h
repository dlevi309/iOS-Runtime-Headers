/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDragInteractionContext;
@class UIViewPropertyAnimator, NSSet, UIDragInteraction;

@interface _UIDragLiftEffectOperation : NSObject {

	UIViewPropertyAnimator* _propertyAnimator;
	id<UIDragInteractionContext> _context;
	NSSet* _items;
	UIDragInteraction* _interaction;

}

@property (nonatomic,retain) id<UIDragInteractionContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSSet * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIDragInteraction * interaction;                          //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
-(void)setItems:(NSSet *)arg1 ;
-(id<UIDragInteractionContext>)context;
-(UIViewPropertyAnimator *)propertyAnimator;
-(NSSet *)items;
-(UIDragInteraction *)interaction;
-(void)setInteraction:(UIDragInteraction *)arg1 ;
-(void)setContext:(id<UIDragInteractionContext>)arg1 ;
@end

