/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

@class NSUUID, NSURL;


@protocol MAPersistentStoreProtocol <NSObject>
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
@required
+(id)persistentStoreFileExtension;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1;
+(BOOL)hasMarker:(id)arg1;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+(void)deleteMarkerAtURL:(id)arg1;
+(BOOL)setMarkerAtURL:(id)arg1;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
-(void)save:(/*^block*/id)arg1;
-(void)removeModelNodesForIdentifiers:(id)arg1;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
-(void)setGraphVersion:(unsigned long long)arg1;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1;
-(void)leaveBatch;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2;
-(BOOL)doesCascadeEdgeDelete;
-(BOOL)hasMarker;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1;
-(void)setEdgeWeight:(float)arg1 forIdentifier:(long long)arg2;
-(NSURL *)fileURL;
-(NSUUID *)graphIdentifier;
-(void)enterBatch;
-(void)invalidateMemoryCaches;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)deleteMarker;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
-(void)closePersistentStore;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
-(void)setNodeWeight:(float)arg1 forIdentifier:(long long)arg2;
-(void)removeModelEdgesForIdentifiers:(id)arg1;
-(void)setMarker;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1;
-(void)invalidatePersistentStores;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1;
-(unsigned long long)graphVersion;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1;

@end

