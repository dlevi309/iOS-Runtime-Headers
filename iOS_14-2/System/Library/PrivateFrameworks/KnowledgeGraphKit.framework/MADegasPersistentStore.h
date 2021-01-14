/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(id)persistentStoreFileExtension;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1 ;
+(id)errorForKGDBReturnCode:(int)arg1 description:(id)arg2 ;
+(void)deleteClosedDatabaseFilesAtStoreURL:(id)arg1 ;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(void)deleteMarkerAtURL:(id)arg1 ;
+(void)performBitmapTest;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)save:(/*^block*/id)arg1 ;
-(void)removeModelNodesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)leaveTransaction;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)setDegasLabelByLabelName:(NSMutableDictionary *)arg1 ;
-(void)loadLabelsAndDomains;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1 ;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_markerFilePath;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(id)propertyValueForCursor:(AttributeValueCursor*)arg1 ;
-(void)loadPropertyNames;
-(void)leaveBatch;
-(NSMutableDictionary *)labelNameByDegasLabel;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)attrIdByPropertyName;
-(NSMutableDictionary *)degasLabelByLabelName;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1 ;
-(void)setDomainByDegasLabel:(NSMutableDictionary *)arg1 ;
-(void)setPropertyNameByAttrId:(NSMutableDictionary *)arg1 ;
-(void)_enumerateModelNodesForCursor:(NodeCursor*)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)doesCascadeEdgeDelete;
-(BOOL)hasMarker;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)setEdgeWeight:(float)arg1 forIdentifier:(long long)arg2 ;
-(NSURL *)fileURL;
-(NSUUID *)graphIdentifier;
-(void)removePreviousPersistenceStore;
-(void)enterBatch;
-(id)propertyNameForAttrId:(unsigned long long)arg1 ;
-(void)invalidateMemoryCaches;
-(unsigned long long)degasLabelIdForLabelName:(id)arg1 ;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumeratePropertiesForCursor:(AttributeValueCursor*)arg1 block:(/*^block*/id)arg2 ;
-(void)deleteMarker;
-(NSMutableDictionary *)propertyNameByAttrId;
-(void)_setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)closePersistentStore;
-(id)localLabelNameForDegasLabel:(unsigned long long)arg1 ;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)setDegasLabelByDomain:(NSMutableDictionary *)arg1 ;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)setLabel:(id)arg1 forDegasLabel:(unsigned long long)arg2 ;
-(void)checkTransaction;
-(void)leaveTransactionWithRollback;
-(void)setLabelNameByDegasLabel:(NSMutableDictionary *)arg1 ;
-(void)setNodeWeight:(float)arg1 forIdentifier:(long long)arg2 ;
-(void)removeModelEdgesForIdentifiers:(id)arg1 ;
-(id)labelforDegasLabelId:(unsigned long long)arg1 ;
-(void)beginTransactionIfNeeded;
-(void)setMarker;
-(void)setAttrIdByPropertyName:(NSMutableDictionary *)arg1 ;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
-(Database*)database;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2 ;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(short)matisseDomainForDegasLabel:(unsigned long long)arg1 ;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1 ;
-(void)invalidatePersistentStores;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1 ;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(NSMutableDictionary *)domainByDegasLabel;
-(id)returnLabelAndDomain:(short*)arg1 forDegasLabels:(Bitmap*)arg2 ;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)attrIdForPropertyName:(id)arg1 sampleValue:(id)arg2 ;
-(unsigned long long)degasLabelIdForMatisseDomain:(unsigned short)arg1 ;
-(void)_enumerateModelEdgesForCursor:(EdgeCursor*)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)graphVersion;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1 ;
-(NSMutableDictionary *)degasLabelByDomain;
@end

