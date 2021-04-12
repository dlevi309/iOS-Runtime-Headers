/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectModel, CKRecordZone, NSString, NSCloudKitMirroringDelegateOptions, NSPersistentStore, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface PFCloudKitSchemaGenerator : NSObject {

	NSManagedObjectModel* _model;
	CKRecordZone* _recordZone;
	NSString* _configurationName;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	NSPersistentStore* _store;
	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;                         //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * store;                                   //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                      //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * model;                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                          //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) NSString * configurationName;                                       //@synthesize configurationName=_configurationName - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
+(id)newRepresentativeRecordForStaticFieldsInEntity:(id)arg1 inZoneWithID:(id)arg2 ;
+(id)representativeValueFor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSPersistentStore *)store;
-(NSManagedObjectModel *)model;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)coordinator;
-(NSString *)configurationName;
-(CKRecordZone *)recordZone;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(id)initWithObservedStore:(id)arg1 zone:(id)arg2 mirroringOptions:(id)arg3 ;
-(id)newRepresentativeRecords:(id*)arg1 ;
-(id)representativeObjectForEntity:(id)arg1 withManagedObjectContext:(id)arg2 cache:(id)arg3 populate:(BOOL)arg4 ;
-(void)populateValuesOnObject:(id)arg1 ;
-(void)populateRelationshipsOnObject:(id)arg1 withCache:(id)arg2 ;
@end

