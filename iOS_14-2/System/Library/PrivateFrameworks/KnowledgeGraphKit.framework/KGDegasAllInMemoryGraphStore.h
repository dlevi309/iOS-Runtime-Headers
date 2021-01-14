/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KGMemoryGraphStore.h>

@class KGDatabase, NSURL;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {

	KGDatabase* _database;
	unsigned long long _transactionCounter;
	NSURL* _url;

}
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(id)persistentStoreFileExtension;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)hasMarkerForDiskRepresentationAtURL:(id)arg1 ;
+(BOOL)setMarkerForDiskRepresentationAtURL:(id)arg1 ;
+(void)deleteMarkerForDiskRepresentationAtURL:(id)arg1 ;
-(void)beginTransaction;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(id)_markerFilePath;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(void)commitTransaction;
-(id)url;
-(BOOL)hasMarker;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(id)graphIdentifier;
-(void)deleteMarker;
-(void)setMarker;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)graphVersion;
-(unsigned long long)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)openWithMode:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3 ;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3 ;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
@end

