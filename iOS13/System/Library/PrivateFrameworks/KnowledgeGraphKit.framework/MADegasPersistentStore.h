/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/MAPersistentStoreProtocol.h>

@class NSUUID, NSURL, NSMutableDictionary, NSString;

@interface MADegasPersistentStore : NSObject <MAPersistentStoreProtocol> {

	Database* _database;
	unsigned long long _markerCounter;
	unsigned long long _batchCounter;
	os_unfair_lock_s _lock;
	unsigned long long _transactionCounter;
	NSURL* _fileURL;
	NSMutableDictionary* _degasLabelByLabelName;
	NSMutableDictionary* _labelNameByDegasLabel;
	NSMutableDictionary* _degasLabelByDomain;
	NSMutableDictionary* _domainByDegasLabel;
	NSMutableDictionary* _attrIdByPropertyName;
	NSMutableDictionary* _propertyNameByAttrId;

}

@property (nonatomic,retain) NSMutableDictionary * degasLabelByLabelName;              //@synthesize degasLabelByLabelName=_degasLabelByLabelName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labelNameByDegasLabel;              //@synthesize labelNameByDegasLabel=_labelNameByDegasLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * degasLabelByDomain;                 //@synthesize degasLabelByDomain=_degasLabelByDomain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * domainByDegasLabel;                 //@synthesize domainByDegasLabel=_domainByDegasLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attrIdByPropertyName;               //@synthesize attrIdByPropertyName=_attrIdByPropertyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyNameByAttrId;               //@synthesize propertyNameByAttrId=_propertyNameByAttrId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
+(id)persistentStoreFileExtension;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(void)deleteMarkerAtURL:(id)arg1 ;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1 ;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(id)errorForKGDBReturnCode:(int)arg1 description:(id)arg2 ;
+(void)deleteClosedDatabaseFilesAtStoreURL:(id)arg1 ;
+(void)performBitmapTest;
-(void)dealloc;
-(NSURL *)fileURL;
-(void)save:(/*^block*/id)arg1 ;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(unsigned long long)graphVersion;
-(void)invalidateMemoryCaches;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2 ;
-(void)invalidatePersistentStores;
-(void)closePersistentStore;
-(void)setMarker;
-(void)deleteMarker;
-(void)enterBatch;
-(void)leaveBatch;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1 ;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1 ;
-(void)removeModelNodesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgesForIdentifiers:(id)arg1 ;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1 ;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1 ;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1 ;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMarker;
-(NSUUID *)graphIdentifier;
-(BOOL)doesCascadeEdgeDelete;
-(void)removePreviousPersistenceStore;
-(void)checkTransaction;
-(void)beginTransactionIfNeeded;
-(void)leaveTransaction;
-(void)leaveTransactionWithRollback;
-(void)setLabel:(id)arg1 forDegasLabel:(unsigned long long)arg2 ;
-(id)localLabelNameForDegasLabel:(unsigned long long)arg1 ;
-(void)loadLabelsAndDomains;
-(void)loadPropertyNames;
-(unsigned long long)degasLabelIdForMatisseDomain:(unsigned short)arg1 ;
-(id)labelforDegasLabelId:(unsigned long long)arg1 ;
-(unsigned long long)degasLabelIdForLabelName:(id)arg1 ;
-(short)matisseDomainForDegasLabel:(unsigned long long)arg1 ;
-(unsigned long long)attrIdForPropertyName:(id)arg1 sampleValue:(id)arg2 ;
-(id)propertyNameForAttrId:(unsigned long long)arg1 ;
-(id)returnLabelAndDomain:(short*)arg1 forDegasLabels:(Bitmap*)arg2 ;
-(void)_enumerateModelNodesForCursor:(NodeCursor*)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_enumerateModelEdgesForCursor:(EdgeCursor*)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)appendPropertyValuesForElementId:(unsigned long long)arg1 cursors:(map<unsigned long long, degas::AttributeInstanceCursor, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, degas::AttributeInstanceCursor> > >*)arg2 dataTypes:(map<unsigned long long, degas::DataType, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, degas::DataType> > >*)arg3 dictionary:(id)arg4 ;
-(void)enumeratePropertiesForDataTypes:(map<unsigned long long, degas::DataType, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, degas::DataType> > >*)arg1 usingCursors:(map<unsigned long long, degas::AttributeInstanceCursor, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, degas::AttributeInstanceCursor> > >*)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)_setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(id)_markerFilePath;
-(NSMutableDictionary *)degasLabelByLabelName;
-(void)setDegasLabelByLabelName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)labelNameByDegasLabel;
-(void)setLabelNameByDegasLabel:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)degasLabelByDomain;
-(void)setDegasLabelByDomain:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)domainByDegasLabel;
-(void)setDomainByDegasLabel:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)attrIdByPropertyName;
-(void)setAttrIdByPropertyName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)propertyNameByAttrId;
-(void)setPropertyNameByAttrId:(NSMutableDictionary *)arg1 ;
@end

