/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@protocol KGGraphStore, OS_dispatch_queue;
@class KGPerformChangesRequest, NSObject, NSString;

@interface KGGraph : NSObject {

	id<KGGraphStore> _store;
	KGPerformChangesRequest* _request;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSString* _name;

}

@property (nonatomic,retain) id<KGGraphStore> store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) KGPerformChangesRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
+(id)graphForCurrentTransaction;
-(void)setStore:(id<KGGraphStore>)arg1 ;
-(id)edgeForIdentifier:(unsigned long long)arg1 ;
-(id<KGGraphStore>)store;
-(void)setRequest:(KGPerformChangesRequest *)arg1 ;
-(BOOL)performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(id)edgeLabels;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(KGPerformChangesRequest *)request;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)performChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)nodeLabels;
-(id)nodesForIdentifiers:(id)arg1 ;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)nodeForIdentifier:(unsigned long long)arg1 ;
-(id)initGraphWithStore:(id)arg1 ;
-(id)initializeSnapshotNodeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)initializeSnapshotEdgeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 ;
-(id)_nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 ;
-(id)_edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 ;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(id)arg3 ;
-(void)_prepareForChanges;
-(BOOL)_finalizeChanges:(id*)arg1 ;
-(void)_cancelChanges:(/*^block*/id)arg1 ;
@end

