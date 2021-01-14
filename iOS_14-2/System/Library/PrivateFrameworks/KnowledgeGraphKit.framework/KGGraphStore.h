/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

@class NSURL, KGEntityDescription, NSUUID;


@protocol KGGraphStore <NSObject>
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) KGEntityDescription * entityDescription; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@required
+(id)persistentStoreFileExtension;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+(BOOL)hasMarkerForDiskRepresentationAtURL:(id)arg1;
+(BOOL)setMarkerForDiskRepresentationAtURL:(id)arg1;
+(void)deleteMarkerForDiskRepresentationAtURL:(id)arg1;
-(void)beginTransaction;
-(void)setGraphVersion:(unsigned long long)arg1;
-(void)close;
-(void)commitTransaction;
-(id)edgeLabels;
-(NSURL *)url;
-(BOOL)hasMarker;
-(NSUUID *)graphIdentifier;
-(KGEntityDescription *)entityDescription;
-(void)deleteMarker;
-(id)nodeLabels;
-(void)setMarker;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2;
-(unsigned long long)graphVersion;
-(unsigned long long)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4;
-(unsigned long long)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6;
-(BOOL)openWithMode:(unsigned long long)arg1 error:(id*)arg2;
-(id)arrayOfNodesWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)arrayOfEdgesWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)nodesForIdentifiers:(id)arg1 error:(id*)arg2;
-(id)edgesForIdentifiers:(id)arg1 error:(id*)arg2;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 error:(id*)arg3;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 error:(id*)arg3;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 error:(id*)arg3;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(id)arg3 error:(id*)arg4;
-(BOOL)removeNodeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)removeEdgeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)removeNodesForIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)removeEdgesForIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3;

@end

