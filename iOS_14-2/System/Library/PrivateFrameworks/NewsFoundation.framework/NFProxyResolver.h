/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFResolver.h>
#import <libobjc.A.dylib/NFValidationResolver.h>

@protocol NFDefinitionContainer;
@class NFContainerPool, NFCallbackStore, NFContext, NSString;

@interface NFProxyResolver : NSObject <NFResolver, NFValidationResolver> {

	id<NFDefinitionContainer> _publicContainer;
	id<NFDefinitionContainer> _privateContainer;
	NFContainerPool* _pool;
	NFCallbackStore* _callbackStore;
	NFContext* _context;

}

@property (nonatomic,retain) id<NFDefinitionContainer> publicContainer;               //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,retain) id<NFDefinitionContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (nonatomic,retain) NFContainerPool * pool;                                  //@synthesize pool=_pool - In the implementation block
@property (nonatomic,readonly) NFCallbackStore * callbackStore;                       //@synthesize callbackStore=_callbackStore - In the implementation block
@property (nonatomic,retain) NFContext * context;                                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NFContainerPool *)pool;
-(id)resolveProtocol:(id)arg1 name:(id)arg2 ;
-(void)ensureClass:(Class)arg1 name:(id)arg2 ;
-(void)ensure:(id)arg1 ;
-(id<NFDefinitionContainer>)privateContainer;
-(id)createProxyResolverForPrivateContainer:(id)arg1 ;
-(NFContext *)context;
-(void)ensureProtocol:(id)arg1 ;
-(id)resolveForKey:(id)arg1 context:(id)arg2 ;
-(void)linkResolverWithLinkBlock:(/*^block*/id)arg1 ;
-(id)contextWithContextBlock:(/*^block*/id)arg1 ;
-(id)resolveForKey:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3 ;
-(id)resolveClass:(Class)arg1 ;
-(void)setPublicContainer:(id<NFDefinitionContainer>)arg1 ;
-(void)setPrivateContainer:(id<NFDefinitionContainer>)arg1 ;
-(id)resolveForKey:(id)arg1 context:(id)arg2 validateBlock:(/*^block*/id)arg3 ;
-(id<NFDefinitionContainer>)publicContainer;
-(id)resolveClass:(Class)arg1 contextBlock:(/*^block*/id)arg2 ;
-(id)resolveForKey:(id)arg1 ;
-(id)resolveProtocol:(id)arg1 ;
-(NFCallbackStore *)callbackStore;
-(id)resolveProtocol:(id)arg1 contextBlock:(/*^block*/id)arg2 ;
-(id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3 ;
-(void)setPool:(NFContainerPool *)arg1 ;
-(void)ensureClass:(Class)arg1 ;
-(id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 inPool:(id)arg3 callbackStore:(id)arg4 ;
-(void)ensureProtocol:(id)arg1 name:(id)arg2 ;
-(id)currentObjectGraphResolver:(unsigned long long)arg1 ;
-(id)resolveClass:(Class)arg1 name:(id)arg2 ;
-(void)setContext:(NFContext *)arg1 ;
@end

