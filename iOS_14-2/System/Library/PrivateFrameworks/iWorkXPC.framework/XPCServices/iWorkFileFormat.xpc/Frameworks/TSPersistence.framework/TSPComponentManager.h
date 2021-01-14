/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPComponentDelegate.h>
#import <TSPersistence/TSPObjectModifyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSCache, TSPComponent, TSPObjectContext, NSString;

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate> {

	Ai _ignoreCachedObjectEvictionCount;
	BOOL _isTornDown;
	NSObject*<OS_dispatch_queue> _componentQueue;
	NSHashTable* _components;
	NSMapTable* _componentDictionary;
	NSCache* _componentCache;
	TSPComponent* _viewStateComponent;
	NSObject*<OS_dispatch_queue> _readFlushedComponentQueue;
	TSPObjectContext* _context;
	TSPComponent* _packageMetadataComponent;

}

@property (nonatomic,__weak,readonly) TSPObjectContext * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) TSPComponent * packageMetadataComponent;                      //@synthesize packageMetadataComponent=_packageMetadataComponent - In the implementation block
@property (nonatomic,readonly) TSPComponent * documentComponent; 
@property (nonatomic,readonly) TSPComponent * documentObjectContainerComponent; 
@property (nonatomic,readonly) TSPComponent * documentMetadataComponent; 
@property (nonatomic,readonly) BOOL isDocumentComponentTreeModified; 
@property (nonatomic,readonly) TSPComponent * supportComponent; 
@property (nonatomic,readonly) TSPComponent * supportObjectContainerComponent; 
@property (nonatomic,readonly) TSPComponent * supportMetadataComponent; 
@property (retain) TSPComponent * viewStateComponent; 
@property (nonatomic,readonly) BOOL isSupportComponentTreeModified; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentManagersPerformingCacheOperationOnCurrentThread;
-(void)tearDown;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isActive;
-(TSPObjectContext *)context;
-(id)objectForIdentifier:(long long)arg1 ;
-(void)dealloc;
-(void)beginIgnoringCachedObjectEviction;
-(void)endIgnoringCachedObjectEviction;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)willModifyObject:(id)arg1 options:(unsigned long long)arg2 ;
-(void)discardOrphanedComponents;
-(void)enumerateComponents:(/*^block*/id)arg1 ;
-(TSPComponent *)supportComponent;
-(BOOL)isDocumentComponentTreeModified;
-(BOOL)isSupportComponentTreeModified;
-(id)componentForRootObjectOfLazyReference:(id)arg1 ;
-(id)componentForRootObjectIdentifier:(long long)arg1 ;
-(unsigned long long)objectTargetType;
-(TSPComponent *)documentComponent;
-(void)loadFromPackage:(id)arg1 metadata:(id)arg2 ;
-(TSPComponent *)packageMetadataComponent;
-(TSPComponent *)documentObjectContainerComponent;
-(TSPComponent *)documentMetadataComponent;
-(TSPComponent *)supportObjectContainerComponent;
-(TSPComponent *)supportMetadataComponent;
-(void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dirtyComponents:(id)arg1 ;
-(void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1 ;
-(void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2 ;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2 ;
-(void)continueCacheOperationUsingBlock:(/*^block*/id)arg1 ;
-(void)performCacheOperationUsingBlock:(/*^block*/id)arg1 ;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2 ;
-(void)loadComponent:(const ComponentInfo*)arg1 package:(id)arg2 ;
-(id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(id)documentComponentImpl;
-(id)supportComponentImpl;
-(id)componentForRootObjectOfLazyReferenceImpl:(id)arg1 ;
-(void)traverseComponentTreeFromRoot:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(BOOL)isPerformingCacheOperation;
-(TSPComponent *)viewStateComponent;
-(void)setViewStateComponent:(TSPComponent *)arg1 ;
-(id)rootComponentForPackageIdentifier:(unsigned char)arg1 ;
-(void)evictAllCachedObjects;
@end

