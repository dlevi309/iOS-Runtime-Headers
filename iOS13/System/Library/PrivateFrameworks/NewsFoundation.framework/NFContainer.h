/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFDefinitionContainer.h>
#import <libobjc.A.dylib/NFRegistrationContainer.h>

@class NSMutableDictionary, NFContainerPool, NFCallbackStore, NFProxyResolver, NSString;

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer> {

	NSMutableDictionary* _definitions;
	NFContainerPool* _pool;
	NFCallbackStore* _callbackStore;
	NSMutableDictionary* _privateContainers;

}

@property (nonatomic,retain) NSMutableDictionary * definitions;                    //@synthesize definitions=_definitions - In the implementation block
@property (nonatomic,retain) NFContainerPool * pool;                               //@synthesize pool=_pool - In the implementation block
@property (nonatomic,retain) NFCallbackStore * callbackStore;                      //@synthesize callbackStore=_callbackStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * privateContainers;              //@synthesize privateContainers=_privateContainers - In the implementation block
@property (nonatomic,readonly) NFProxyResolver * proxyResolver; 
@property (nonatomic,readonly) id<NFResolver> resolver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(id<NFResolver>)resolver;
-(id)initWithFrameworkAssemblies:(id)arg1 assemblies:(id)arg2 ;
-(id)initWithBundleAssemblies:(id)arg1 ;
-(id)initWithBundleAssemblies:(id)arg1 assemblies:(id)arg2 ;
-(id)initAsPrivateContainer;
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)register:(id)arg1 createDefinitionBlock:(/*^block*/id)arg2 ;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerKey:(id)arg1 factory:(/*^block*/id)arg2 ;
-(NFProxyResolver *)proxyResolver;
-(id)definitionForKey:(id)arg1 ;
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)initWithAssemblies:(id)arg1 ;
-(id)initWithFrameworkAssemblies:(id)arg1 ;
-(void)validateDefinitionsWithProxyResolver:(id)arg1 ;
-(NSMutableDictionary *)definitions;
-(void)setDefinitions:(NSMutableDictionary *)arg1 ;
-(NFContainerPool *)pool;
-(void)setPool:(NFContainerPool *)arg1 ;
-(NFCallbackStore *)callbackStore;
-(void)setCallbackStore:(NFCallbackStore *)arg1 ;
-(NSMutableDictionary *)privateContainers;
-(void)setPrivateContainers:(NSMutableDictionary *)arg1 ;
@end

