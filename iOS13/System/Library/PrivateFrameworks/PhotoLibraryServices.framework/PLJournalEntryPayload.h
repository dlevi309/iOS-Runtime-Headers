/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLJournalEntryPayload.h>
@class NSSet;


@protocol PLJournalEntryPayload <NSObject>
@property (nonatomic,readonly) id<PLJournalEntryPayloadID> payloadID; 
@property (nonatomic,readonly) unsigned payloadVersion; 
@property (nonatomic,readonly) NSSet * nilProperties; 
@required
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(id)payloadWithData:(id)arg1 forPayloadID:(id)arg2 version:(unsigned)arg3 andNilProperties:(id)arg4 error:(id*)arg5;
-(unsigned)payloadVersion;
-(id<PLJournalEntryPayloadID>)payloadID;
-(void)migrateMergedPayload;
-(void)mergePayload:(id)arg1;
-(id)descriptionForEntry:(id)arg1;
-(id)prettyDescriptionForEntry:(id)arg1 indent:(long long)arg2;
-(id)payloadDataWithError:(id*)arg1;
-(NSSet *)nilProperties;
-(BOOL)decodePayloadData:(id)arg1 error:(id*)arg2;

@end

#import <libobjc.A.dylib/PLJournalEntryPayloadValidation.h>

@protocol PLJournalEntryPayloadID;
@class NSSet, NSMutableDictionary, NSMutableSet, NSString;

@interface PLJournalEntryPayload : NSObject <PLJournalEntryPayload, PLJournalEntryPayloadValidation> {

	NSMutableDictionary* _payloadAttributes;
	NSMutableSet* _nilProperties;
	id<PLJournalEntryPayloadID> _payloadID;
	unsigned _payloadVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PLJournalEntryPayloadID> payloadID; 
@property (nonatomic,readonly) unsigned payloadVersion; 
@property (nonatomic,readonly) NSSet * nilProperties; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(void)loadModelPropertiesDescription:(id)arg1 parentPayloadProperty:(id)arg2 ;
+(id)sortedObjectsToAddWithUUIDs:(id)arg1 uuidKey:(id)arg2 andExistingObjects:(id)arg3 fetchBlock:(/*^block*/id)arg4 ;
+(id)snapshotSortDescriptors;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg1 ;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
+(id)payloadWithData:(id)arg1 forPayloadID:(id)arg2 version:(unsigned)arg3 andNilProperties:(id)arg4 error:(id*)arg5 ;
+(id)additionalEntityNames;
+(BOOL)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2 ;
+(void)_validateModelProperties:(id)arg1 nonPersistedModelProperties:(id)arg2 forEntityDescription:(id)arg3 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned)payloadVersion;
-(void)applyPayloadToManagedObject:(id)arg1 ;
-(id<PLJournalEntryPayloadID>)payloadID;
-(id)initWithManagedObject:(id)arg1 changedKeys:(id)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)orderedSetForUUIDEncodedData:(id)arg1 ;
-(id)encodedDataForUUIDs:(id)arg1 count:(unsigned long long)arg2 ;
-(void)migrateMergedPayload;
-(void)mergePayload:(id)arg1 ;
-(id)UUIDStringForData:(id)arg1 ;
-(id)UUIDDataForString:(id)arg1 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 ;
-(id)setForUUIDEncodedData:(id)arg1 ;
-(id)descriptionWithBuilder:(id)arg1 ;
-(id)descriptionForEntry:(id)arg1 ;
-(id)prettyDescriptionForEntry:(id)arg1 indent:(long long)arg2 ;
-(id)payloadDataWithError:(id*)arg1 ;
-(NSSet *)nilProperties;
-(BOOL)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3 ;
-(BOOL)decodePayloadData:(id)arg1 error:(id*)arg2 ;
-(id)initWithPayloadID:(id)arg1 payloadVersion:(unsigned)arg2 nilProperties:(id)arg3 ;
-(id)initWithPayloadID:(id)arg1 payloadVersion:(unsigned)arg2 nilProperties:(id)arg3 managedObject:(id)arg4 changedKeys:(id)arg5 modelProperties:(id)arg6 ;
-(id)_payloadAttributesListForSubRelationshipProperty:(id)arg1 withManagedObjects:(id)arg2 ;
-(void)_applyNilPropertiesWithModelProperties:(id)arg1 ;
-(void)_applyModelProperties:(id)arg1 toPayloadAttributes:(id)arg2 forManagedObject:(id)arg3 changedKeys:(id)arg4 ;
-(void)_updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forModelProperties:(id)arg3 ;
-(void)_updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forModelProperties:(id)arg3 ;
-(void)_applyPayloadToManagedObject:(id)arg1 forModelProperties:(id)arg2 ;
-(void)migrateDecodedAttributes:(id)arg1 ;
-(id)descriptionForEntry:(id)arg1 withBuilder:(id)arg2 ;
-(void)addNilPropertiesToBuilder:(id)arg1 ;
-(void)addAttributesDescriptionToBuilder:(id)arg1 ;
-(BOOL)_comparePayloadAttributes:(id)arg1 toObjectDictionary:(id)arg2 currentKeyPath:(id)arg3 usingModelProperties:(id)arg4 errorDescriptions:(id)arg5 ;
-(void)_resolveRelationshipsInObjectDictionary:(id)arg1 atKeyPath:(id)arg2 forPayloadProperty:(id)arg3 ;
@end

