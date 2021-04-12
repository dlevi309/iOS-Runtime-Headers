/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSDictionary;

@interface PLPersonJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * personUri; 
@property (nonatomic,readonly) unsigned manualOrder; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int verifiedType; 
@property (nonatomic,readonly) int cloudVerifiedType; 
@property (nonatomic,readonly) short keyFacePickSource; 
@property (nonatomic,readonly) NSDictionary * contactMatchingDictionary; 
@property (nonatomic,readonly) NSString * mergeTargetPersonUUID; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2 ;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(int)type;
-(NSString *)displayName;
-(NSDictionary *)contactMatchingDictionary;
-(NSString *)fullName;
-(NSString *)mergeTargetPersonUUID;
-(id)insertPersonFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(int)verifiedType;
-(NSString *)personUri;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 ;
-(short)keyFacePickSource;
-(unsigned)manualOrder;
-(int)cloudVerifiedType;
@end

