/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBChainableModifierQuery.h>
#import <libobjc.A.dylib/SBChainableModifierContext.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBChainableModifierDelegate;
@class SBModifierMethodCache, NSString, SBModifierCacheCoordinator;

@interface SBChainableModifier : NSObject <SBChainableModifierQuery, SBChainableModifierContext, BSDescriptionProviding> {

	SBModifierMethodCache* _queryCache;
	SBModifierMethodCache* _contextCache;
	BOOL _hasNotifiedChildrenDidMoveToParent;
	SBChainableModifier* _parentModifier;
	id<SBChainableModifierDelegate> _delegate;
	SBChainableModifier* _previousContextModifier;
	SBChainableModifier* _nextQueryModifier;
	long long _modifierLevel;
	NSString* _key;

}

@property (assign,nonatomic) SBChainableModifier * parentModifier;                              //@synthesize parentModifier=_parentModifier - In the implementation block
@property (assign,nonatomic) SBChainableModifier * previousContextModifier;                     //@synthesize previousContextModifier=_previousContextModifier - In the implementation block
@property (nonatomic,retain) SBChainableModifier * nextQueryModifier;                           //@synthesize nextQueryModifier=_nextQueryModifier - In the implementation block
@property (assign,nonatomic) long long modifierLevel;                                           //@synthesize modifierLevel=_modifierLevel - In the implementation block
@property (nonatomic,copy) NSString * key;                                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) SBModifierCacheCoordinator * queryCacheCoordinator; 
@property (nonatomic,retain) SBModifierCacheCoordinator * contextCacheCoordinator; 
@property (assign,nonatomic,__weak) id<SBChainableModifierDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)queryProtocol;
+(id)contextProtocol;
+(void)initalizeIMPCaching;
+(id)newQueryCache;
+(id)newContextCache;
+(id)baseClassForQueryProtocol;
+(id)querySelectors;
+(id)newCacheWithSelectorList:(id)arg1 subsequentMethodCacheFunc:(/*function pointer*/void*)arg2 cachingDictionary:(id)arg3 ;
+(id)contextSelectors;
+(void)verifyIsFloorModifier;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)key;
-(id<SBChainableModifierDelegate>)delegate;
-(void)setDelegate:(id<SBChainableModifierDelegate>)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)enumerateChildModifiersWithBlock:(/*^block*/id)arg1 ;
-(SBChainableModifier *)parentModifier;
-(void)performTransactionWithTemporaryChildModifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_nextDynamicQueryModifier;
-(void)_addImplementation:(id)arg1 forClass:(Class)arg2 selector:(SEL)arg3 protocol:(id)arg4 ;
-(id)_previousDynamicContextModifier;
-(id)_createAndConfigureDynamicModifierWithName:(id)arg1 ;
-(void)_insertModifier:(id)arg1 afterModifier:(id)arg2 queryAction:(unsigned long long)arg3 contextAction:(unsigned long long)arg4 ;
-(SBChainableModifier *)previousContextModifier;
-(void)provideNextQueryImplementation:(id)arg1 forSelector:(SEL)arg2 ;
-(void)providePreviousContextImplementation:(id)arg1 forSelector:(SEL)arg2 ;
-(void)addChildModifier:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(void)addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3 ;
-(void)removeChildModifiers:(id)arg1 ;
-(void)removeChildModifier:(id)arg1 ;
-(unsigned long long)childModifierCount;
-(id)childModifierByKey:(id)arg1 ;
-(BOOL)containsChildModifier:(id)arg1 ;
-(void)setParentModifier:(SBChainableModifier *)arg1 ;
-(SBChainableModifier *)nextQueryModifier;
-(void)setPreviousContextModifier:(SBChainableModifier *)arg1 ;
-(void)_notifyChildrenDidMoveToParentIfNeeded;
-(void)_addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3 queryAction:(unsigned long long)arg4 contextAction:(unsigned long long)arg5 ;
-(BOOL)_anyDescendentImplementsAnyQueryMethod;
-(BOOL)_anyDescendentImplementsAnyContextMethod;
-(long long)modifierLevel;
-(void)setModifierLevel:(long long)arg1 ;
-(id)_lastDeepChildModifier;
-(void)_removeChildModifier:(id)arg1 queryAction:(unsigned long long)arg2 contextAction:(unsigned long long)arg3 ;
-(void)setNextQueryModifier:(SBChainableModifier *)arg1 ;
-(SBModifierCacheCoordinator *)queryCacheCoordinator;
-(SBModifierCacheCoordinator *)contextCacheCoordinator;
-(void)_addChildModifier:(id)arg1 queryAction:(unsigned long long)arg2 contextAction:(unsigned long long)arg3 ;
-(void)setQueryCacheCoordinator:(SBModifierCacheCoordinator *)arg1 ;
-(void)setContextCacheCoordinator:(SBModifierCacheCoordinator *)arg1 ;
-(BOOL)respondsToSelectorWithoutForwarding:(SEL)arg1 ;
@end

