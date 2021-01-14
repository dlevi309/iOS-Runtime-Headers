/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSet, NSMutableSet, CKServerChangeToken;

@interface PFCloudKitImportDatabaseContext : NSObject {

	NSSet* _interestingZoneIDs;
	NSMutableSet* _changedRecordZoneIDs;
	NSMutableSet* _deletedRecordZoneIDs;
	NSMutableSet* _purgedRecordZoneIDs;
	CKServerChangeToken* _updatedChangeToken;

}

@property (nonatomic,copy,readonly) NSSet * interestingZoneIDs;                     //@synthesize interestingZoneIDs=_interestingZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * changedRecordZoneIDs;                        //@synthesize changedRecordZoneIDs=_changedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordZoneIDs;                        //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * purgedRecordZoneIDs;                         //@synthesize purgedRecordZoneIDs=_purgedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * updatedChangeToken;              //@synthesize updatedChangeToken=_updatedChangeToken - In the implementation block
-(BOOL)hasWorkToDo;
-(id)initWithInterestingZoneIDs:(id)arg1 ;
-(void)zoneWithIDChanged:(id)arg1 ;
-(void)zoneWithIDWasDeleted:(id)arg1 ;
-(void)zoneWithIDWasPurged:(id)arg1 ;
-(void)setUpdatedChangeToken:(CKServerChangeToken *)arg1 ;
-(NSSet *)interestingZoneIDs;
-(NSSet *)purgedRecordZoneIDs;
-(CKServerChangeToken *)updatedChangeToken;
-(NSSet *)changedRecordZoneIDs;
-(id)description;
-(NSSet *)deletedRecordZoneIDs;
-(void)dealloc;
@end

