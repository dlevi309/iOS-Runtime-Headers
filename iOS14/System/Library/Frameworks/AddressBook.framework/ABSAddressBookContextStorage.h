/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface ABSAddressBookContextStorage : NSObject {

	BOOL _hasUnsavedChanges;
	NSMutableDictionary* _records;
	NSMutableDictionary* _deletedRecords;
	NSMutableArray* _insertedRecords;
	NSMutableDictionary* _updatedRecords;
	NSMutableDictionary* _deletedMemberships;
	NSMutableDictionary* _addedMemberships;
	NSMutableDictionary* _revertedRecords;

}

@property (nonatomic,readonly) NSMutableDictionary * deletedMemberships;                     //@synthesize deletedMemberships=_deletedMemberships - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * addedMemberships;                       //@synthesize addedMemberships=_addedMemberships - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * revertedRecords;                        //@synthesize revertedRecords=_revertedRecords - In the implementation block
@property (assign,nonatomic) BOOL hasUnsavedChanges;                                         //@synthesize hasUnsavedChanges=_hasUnsavedChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * records;                                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * deletedRecords;                         //@synthesize deletedRecords=_deletedRecords - In the implementation block
@property (nonatomic,readonly) NSMutableArray * insertedRecords;                             //@synthesize insertedRecords=_insertedRecords - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * updatedRecords;                         //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * recordsWithPendingMembershipAdditions; 
@property (nonatomic,readonly) NSArray * recordsWithPendingMembershipDeletions; 
-(id)init;
-(NSMutableDictionary *)records;
-(NSMutableDictionary *)deletedRecords;
-(NSMutableDictionary *)updatedRecords;
-(void)revert;
-(BOOL)addRecord:(id)arg1 ;
-(BOOL)hasUnsavedChanges;
-(BOOL)recordUpdated:(id)arg1 ;
-(NSMutableArray *)insertedRecords;
-(void)setHasUnsavedChanges:(BOOL)arg1 ;
-(NSMutableDictionary *)revertedRecords;
-(NSMutableDictionary *)addedMemberships;
-(NSMutableDictionary *)deletedMemberships;
-(void)_resetIncludingLivingRecords:(BOOL)arg1 ;
-(id)cnImplFetched:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(id)recordFetched:(id)arg1 ;
-(BOOL)deleteRecord:(id)arg1 ;
-(BOOL)addMemberRecord:(id)arg1 toRecord:(id)arg2 ;
-(BOOL)removeMemberRecord:(id)arg1 fromRecord:(id)arg2 ;
-(NSArray *)recordsWithPendingMembershipAdditions;
-(NSArray *)recordsWithPendingMembershipDeletions;
-(id)addedMembersForRecord:(id)arg1 ;
-(id)removedMembersForRecord:(id)arg1 ;
-(void)commitPendingChanges;
@end

