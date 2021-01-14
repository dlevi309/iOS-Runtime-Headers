/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSMapTable;

@interface AVBehaviorStorage : NSObject {

	id _AVKitOwner;
	NSMapTable* _behaviorsAndBehaviorContexts;

}

@property (assign,nonatomic,__weak) id AVKitOwner;                                     //@synthesize AVKitOwner=_AVKitOwner - In the implementation block
@property (nonatomic,readonly) NSMapTable * behaviorsAndBehaviorContexts;              //@synthesize behaviorsAndBehaviorContexts=_behaviorsAndBehaviorContexts - In the implementation block
-(id)behaviors;
-(id)initWithAVKitOwner:(id)arg1 ;
-(id)behaviorOfClass:(Class)arg1 ;
-(void)enumerateAllBehaviorsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllBehaviorsConformingToProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)behaviorContextOfClass:(Class)arg1 ;
-(void)enumerateAllBehaviorContextsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg1 forProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setAVKitOwner:(id)arg1 ;
-(NSMapTable *)behaviorsAndBehaviorContexts;
-(void)addBehavior:(id)arg1 ;
-(id)AVKitOwner;
-(void)removeBehavior:(id)arg1 ;
@end

