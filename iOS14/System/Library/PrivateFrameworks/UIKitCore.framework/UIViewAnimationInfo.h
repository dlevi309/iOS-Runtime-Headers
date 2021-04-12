/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class UIView, NSMutableDictionary, NSObject;

@interface UIViewAnimationInfo : NSObject {

	UIView* _owningView;
	/*^block*/id _invalidationBlock;
	NSMutableDictionary* _animatableProperties;
	NSMutableDictionary* _presentationModifiers;
	NSMutableDictionary* _modifierGroupRequestHandlers;
	NSMutableDictionary* _isPartOfHigherOrderProperty;
	NSObject*<OS_dispatch_queue> _lockingQueue;

}

@property (__weak) UIView * owningView;                                                       //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                                              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animatableProperties;                      //@synthesize animatableProperties=_animatableProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * presentationModifiers;                     //@synthesize presentationModifiers=_presentationModifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifierGroupRequestHandlers;              //@synthesize modifierGroupRequestHandlers=_modifierGroupRequestHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * isPartOfHigherOrderProperty;               //@synthesize isPartOfHigherOrderProperty=_isPartOfHigherOrderProperty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockingQueue;                       //@synthesize lockingQueue=_lockingQueue - In the implementation block
-(id)animatablePropertyKeys;
-(void)setOwningView:(UIView *)arg1 ;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)setAnimatableProperties:(NSMutableDictionary *)arg1 ;
-(void)setAnimatableProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setModifierGroupRequestHandlers:(NSMutableDictionary *)arg1 ;
-(id)invalidationBlock;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)isPartOfHigherOrderProperty;
-(UIView *)owningView;
-(void)_invalidateIfPossible;
-(BOOL)_canInvalidate;
-(NSMutableDictionary *)animatableProperties;
-(void)setIsPartOfHigherOrderProperty:(NSMutableDictionary *)arg1 ;
-(id)modifierGroupRequestHandlerForKey:(id)arg1 ;
-(void)setLockingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)presentationModifiers;
-(NSObject*<OS_dispatch_queue>)lockingQueue;
-(void)setPresentationModifiers:(NSMutableDictionary *)arg1 ;
-(id)presentationModifierForKey:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(NSMutableDictionary *)modifierGroupRequestHandlers;
-(void)setPresentationModifier:(id)arg1 forKey:(id)arg2 ;
-(void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2 ;
-(id)animatablePropertyForKey:(id)arg1 createIfNecessary:(BOOL)arg2 ;
@end

