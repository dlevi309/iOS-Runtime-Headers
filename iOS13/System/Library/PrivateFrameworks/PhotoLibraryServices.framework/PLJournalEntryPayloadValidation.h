/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLJournalEntryPayloadValidation
@required
+(id)modelProperties;
+(unsigned)minimumSnapshotPayloadVersion;
+(id)snapshotSortDescriptors;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg1;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+(id)additionalEntityNames;
+(BOOL)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2;
-(BOOL)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3;

@end

