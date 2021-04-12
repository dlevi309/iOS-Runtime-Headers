/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBChainableModifier, SBModifierCacheCoordinator;

@interface SBModifierMethodCache : NSObject <NSCopying> {

	SBChainableModifier* _modifier;
	SEL* _selectors;
	long long _selectorCount;
	/*function pointer*/void** _imps;
	unsigned long long _genCount;
	SBModifierCacheCoordinator* _cacheCoordinator;
	SBModifierCacheDispatchData* _dispatchCache;
	/*function pointer*/void* _nextFunc;

}

@property (assign,nonatomic) SBChainableModifier * modifier;                             //@synthesize modifier=_modifier - In the implementation block
@property (nonatomic,retain) SBModifierCacheCoordinator * cacheCoordinator;              //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL hasNonTrampolineIMPs; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBChainableModifier *)modifier;
-(void)setModifier:(SBChainableModifier *)arg1 ;
-(SBModifierCacheCoordinator *)cacheCoordinator;
-(void)setCacheCoordinator:(SBModifierCacheCoordinator *)arg1 ;
-(id)initWithIMPs:(/*function pointer*/void**)arg1 selectorList:(id)arg2 subsequentMethodCacheFunc:(/*function pointer*/void*)arg3 ;
-(BOOL)hasNonTrampolineIMPs;
-(id)unimplementedMethods;
@end

