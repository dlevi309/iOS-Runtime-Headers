/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLJournalEntryPayloadValidation
@required
+(id)modelProperties;
+(unsigned)minimumSnapshotPayloadVersion;
+(id)relationshipKeyPathsForPrefetching;
+(id)snapshotSortDescriptors;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg1;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+(id)additionalEntityNames;
+(BOOL)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2;
-(BOOL)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3;

@end

