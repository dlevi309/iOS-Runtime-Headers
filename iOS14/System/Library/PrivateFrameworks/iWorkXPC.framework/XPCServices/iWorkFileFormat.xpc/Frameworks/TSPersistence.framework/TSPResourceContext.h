/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, TSPDocumentResourceCache, TSPDocumentResourceRegistry, TSPDocumentResourceLegacyRegistry, NSSet;

@interface TSPResourceContext : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _progressAggregationQueue;
	NSHashTable* _accessQueue_resourceRequests;
	NSMapTable* _accessQueue_resourceRequestTable;
	TSPDocumentResourceCache* _documentResourceCache;
	TSPDocumentResourceRegistry* _documentResourceRegistry;
	TSPDocumentResourceLegacyRegistry* _sageDocumentResourceLegacyRegistry;
	TSPDocumentResourceLegacyRegistry* _tangierDocumentResourceLegacyRegistry;

}

@property (nonatomic,readonly) TSPDocumentResourceCache * documentResourceCache;                                       //@synthesize documentResourceCache=_documentResourceCache - In the implementation block
@property (nonatomic,readonly) TSPDocumentResourceRegistry * documentResourceRegistry;                                 //@synthesize documentResourceRegistry=_documentResourceRegistry - In the implementation block
@property (nonatomic,readonly) TSPDocumentResourceLegacyRegistry * sageDocumentResourceLegacyRegistry;                 //@synthesize sageDocumentResourceLegacyRegistry=_sageDocumentResourceLegacyRegistry - In the implementation block
@property (nonatomic,readonly) TSPDocumentResourceLegacyRegistry * tangierDocumentResourceLegacyRegistry;              //@synthesize tangierDocumentResourceLegacyRegistry=_tangierDocumentResourceLegacyRegistry - In the implementation block
@property (readonly) NSSet * resourceRequests; 
-(id)init;
-(NSSet *)resourceRequests;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TSPDocumentResourceRegistry *)documentResourceRegistry;
-(id)performResourceAccessUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addResourceRequests:(id)arg1 ;
-(id)newDataStorageForDocumentResourceInfo:(id)arg1 createResourceRequestIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(TSPDocumentResourceCache *)documentResourceCache;
-(TSPDocumentResourceLegacyRegistry *)tangierDocumentResourceLegacyRegistry;
-(id)initWithDocumentResourceCache:(id)arg1 documentResourceRegistry:(id)arg2 sageDocumentResourceLegacyRegistry:(id)arg3 tangierDocumentResourceLegacyRegistry:(id)arg4 ;
-(void)accessQueue_addResourceRequest:(id)arg1 ;
-(void)removeResourceRequests:(id)arg1 ;
-(TSPDocumentResourceLegacyRegistry *)sageDocumentResourceLegacyRegistry;
@end

