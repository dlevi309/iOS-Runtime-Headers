/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol PFCloudKitSerializerDelegate;
@class CKRecordZone, NSMutableDictionary, NSString, NSCloudKitMirroringDelegateOptions, NSObject, NSMutableArray, PFCloudKitMetadataCache, NSDictionary, NSArray;

@interface PFCloudKitSerializer : NSObject {

	CKRecordZone* _recordZone;
	NSMutableDictionary* _manyToManyRecordNameToRecord;
	NSString* _recordNamePrefix;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	NSObject*<PFCloudKitSerializerDelegate> _delegate;
	NSMutableArray* _writtenAssetURLs;
	PFCloudKitMetadataCache* _metadataCache;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * manyToManyRecordNameToRecord; 
@property (assign,nonatomic,__weak) NSObject*<PFCloudKitSerializerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                          //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) NSArray * writtenAssetURLs; 
@property (nonatomic,readonly) NSString * recordNamePrefix;                                        //@synthesize recordNamePrefix=_recordNamePrefix - In the implementation block
+(BOOL)isPrivateAttribute:(id)arg1 ;
+(id)recordTypeForEntity:(id)arg1 ;
+(unsigned long long)estimateByteSizeOfRecordID:(id)arg1 ;
+(id)mtmKeyForObjectWithRecordName:(id)arg1 relatedToObjectWithRecordName:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4 ;
+(id)assetStorageDirectoryURLForStore:(id)arg1 ;
+(id)newSetOfRecordKeysForAttribute:(id)arg1 includeCKAssetsForFileBackedFutures:(BOOL)arg2 ;
+(id)newSetOfRecordKeysForEntitiesInConfiguration:(id)arg1 inManagedObjectModel:(id)arg2 includeCKAssetsForFileBackedFutures:(BOOL)arg3 ;
+(id)assetsOnRecord:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)isMirroredRelationshipRecordType:(id)arg1 ;
+(id)newArchivedDataForSystemFieldsOfRecord:(id)arg1 ;
+(id)applyCDPrefixToName:(id)arg1 ;
+(BOOL)isVariableLengthAttributeType:(unsigned long long)arg1 ;
+(unsigned long long)sizeOfVariableLengthAttribute:(id)arg1 withValue:(id)arg2 ;
+(BOOL)shouldTrackAttribute:(id)arg1 ;
+(id)ckAssetAttributeNameForAttributeName:(id)arg1 ;
+(id)generateCKAssetFileURLForObjectInStore:(id)arg1 ;
+(BOOL)shouldTrackRelationship:(id)arg1 ;
+(id)entityNameForRecordType:(id)arg1 ;
+(unsigned long long)estimatedByteSizeOfValue:(id)arg1 andKey:(id)arg2 ;
+(id)newSetOfRecordKeysForEntity:(id)arg1 includeCKAssetsForFileBackedFutures:(BOOL)arg2 ;
+(id)newSetOfRecordKeysForRelationship:(id)arg1 ;
+(BOOL)shouldTrackProperty:(id)arg1 ;
+(unsigned long long)estimateByteSizeOfRecord:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<PFCloudKitSerializerDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFCloudKitSerializerDelegate>)arg1 ;
-(CKRecordZone *)recordZone;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(id)initWithZone:(id)arg1 mirroringOptions:(id)arg2 metadataCache:(id)arg3 recordNamePrefix:(id)arg4 ;
-(BOOL)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 onlyUpdatingAttributes:(id)arg5 andRelationships:(id)arg6 error:(id*)arg7 ;
-(NSArray *)writtenAssetURLs;
-(id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(BOOL)arg2 includeRelationships:(BOOL)arg3 error:(id*)arg4 ;
-(id)getRecordMetadataForObject:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 usingEncryption:(BOOL)arg3 onRecord:(id)arg4 ;
-(BOOL)shouldEncryptValueForAttribute:(id)arg1 ;
-(id)getValueStoreForRecord:(id)arg1 ;
-(id)getValueFromRecord:(id)arg1 forKey:(id)arg2 isEncrypted:(BOOL)arg3 ;
-(void)updateAttributes:(id)arg1 andRelationships:(id)arg2 onManagedObject:(id)arg3 fromRecord:(id)arg4 withRecordMetadata:(id)arg5 importContext:(id)arg6 ;
-(NSDictionary *)manyToManyRecordNameToRecord;
-(void)setMtmRecord:(id)arg1 toMtmRecordName:(id)arg2 ;
-(void)addURLToWrittenAssetURLs:(id)arg1 ;
-(id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(NSString *)recordNamePrefix;
@end

