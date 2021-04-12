/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGGraphStore.h>

@class NSUUID, KGEntityDescription, NSURL, NSMutableDictionary, NSString;

@interface KGMemoryGraphStore : NSObject <KGGraphStore> {

	BOOL _hasMarker;
	os_unfair_lock_s _lock;
	NSUUID* _graphIdentifier;
	unsigned long long _graphVersion;
	KGEntityDescription* _entityDescription;
	NSURL* _url;
	unsigned long long _nextNodeIdentifier;
	NSMutableDictionary* _memoryNodeByIdentifier;
	NSMutableDictionary* _memoryNodesByLabel;
	unsigned long long _nextEdgeIdentifier;
	NSMutableDictionary* _memoryEdgeByIdentifier;
	NSMutableDictionary* _memoryEdgesByLabel;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memoryNodeByIdentifier;              //@synthesize memoryNodeByIdentifier=_memoryNodeByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memoryNodesByLabel;                  //@synthesize memoryNodesByLabel=_memoryNodesByLabel - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memoryEdgeByIdentifier;              //@synthesize memoryEdgeByIdentifier=_memoryEdgeByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memoryEdgesByLabel;                  //@synthesize memoryEdgesByLabel=_memoryEdgesByLabel - In the implementation block
@property (assign,nonatomic) unsigned long long nextNodeIdentifier;                       //@synthesize nextNodeIdentifier=_nextNodeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long nextEdgeIdentifier;                       //@synthesize nextEdgeIdentifier=_nextEdgeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMarker;                                            //@synthesize hasMarker=_hasMarker - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) KGEntityDescription * entityDescription;                   //@synthesize entityDescription=_entityDescription - In the implementation block
@property (assign,nonatomic) unsigned long long graphVersion;                             //@synthesize graphVersion=_graphVersion - In the implementation block
@property (nonatomic,readonly) NSUUID * graphIdentifier;                                  //@synthesize graphIdentifier=_graphIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)persistentStoreFileExtension;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)hasMarkerForDiskRepresentationAtURL:(id)arg1 ;
+(BOOL)setMarkerForDiskRepresentationAtURL:(id)arg1 ;
+(void)deleteMarkerForDiskRepresentationAtURL:(id)arg1 ;
-(void)beginTransaction;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(id)init;
-(void)close;
-(void)commitTransaction;
-(os_unfair_lock_s)lock;
-(id)edgeLabels;
-(NSURL *)url;
-(BOOL)hasMarker;
-(NSUUID *)graphIdentifier;
-(KGEntityDescription *)entityDescription;
-(void)deleteMarker;
-(id)nodeLabels;
-(void)setMarker;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)graphVersion;
-(unsigned long long)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)openWithMode:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)arrayOfNodesWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)arrayOfEdgesWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)nodesForIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)edgesForIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 error:(id*)arg3 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 error:(id*)arg3 ;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeNodeForIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removeEdgeForIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removeNodesForIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeEdgesForIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3 ;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3 ;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
-(id)nodeForIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)edgeForIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)edgeIdentifiersForNodeIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initForSubclasses;
-(id)insertEdgeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNodeIdentifier:(unsigned long long)arg5 targetNodeIdentifier:(unsigned long long)arg6 error:(id*)arg7 ;
-(unsigned long long)_addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)insertNodeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)_addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4 ;
-(id)_lock_snapshotEdgeForIdentifier:(unsigned long long)arg1 reusableNode:(id)arg2 ;
-(id)_lock_arrayOfNodesWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_lock_arrayOfEdgesWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_lock_snapshotNodeForIdentifier:(unsigned long long)arg1 ;
-(id)_edgeIdentifiersForNodeIdentifier:(unsigned long long)arg1 ;
-(BOOL)_removeMemoryEdge:(id)arg1 fromSourNode:(BOOL)arg2 fromTargetNode:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_removeEdgesForMemoryNode:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeNode:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)nextNodeIdentifier;
-(void)setNextNodeIdentifier:(unsigned long long)arg1 ;
-(NSMutableDictionary *)memoryNodeByIdentifier;
-(NSMutableDictionary *)memoryNodesByLabel;
-(unsigned long long)nextEdgeIdentifier;
-(void)setNextEdgeIdentifier:(unsigned long long)arg1 ;
-(NSMutableDictionary *)memoryEdgeByIdentifier;
-(NSMutableDictionary *)memoryEdgesByLabel;
@end

