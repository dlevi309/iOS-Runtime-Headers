/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class CKRecordZone, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitSchemaGenerator : NSObject {

	CKRecordZone* _recordZone;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;

}

@property (nonatomic,readonly) CKRecordZone * recordZone;                                          //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
+(id)newRepresentativeRecordForStaticFieldsInEntity:(id)arg1 inZoneWithID:(id)arg2 ;
+(id)representativeValueFor:(id)arg1 ;
-(CKRecordZone *)recordZone;
-(id)initWithRecordZone:(id)arg1 mirroringOptions:(id)arg2 ;
-(id)newRepresentativeRecordsForStore:(id)arg1 error:(id*)arg2 ;
-(void)populateValuesOnObject:(id)arg1 ;
-(id)newManagedObjectContextForCoordinator:(id)arg1 ;
-(void)populateRelationshipsOnObject:(id)arg1 inStore:(id)arg2 withCache:(id)arg3 ;
-(id)representativeObjectForEntity:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 cache:(id)arg4 populate:(BOOL)arg5 ;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(void)dealloc;
@end

