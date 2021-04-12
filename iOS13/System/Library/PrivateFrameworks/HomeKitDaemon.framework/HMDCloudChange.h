/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreChangeObject.h>
#import <libobjc.A.dylib/HMDBackingStoreRecordMapping.h>

@class HMDBackingStoreModelObject, NSSet, HMDCloudRecord, NSMutableSet, NSUUID, NSString, NSArray, CKRecord, CKRecordID;

@interface HMDCloudChange : HMFObject <HMDBackingStoreChangeObject, HMDBackingStoreRecordMapping> {

	HMDBackingStoreModelObject* _objectChange;
	HMDCloudRecord* _cloudRecord;
	HMDCloudRecord* _deletedCloudRecord;
	unsigned long long _changeType;
	unsigned long long _applyType;
	NSMutableSet* _rowIDsSet;

}

@property (nonatomic,retain) HMDBackingStoreModelObject * objectChange;                              //@synthesize objectChange=_objectChange - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;                                          //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) unsigned long long applyType;                                           //@synthesize applyType=_applyType - In the implementation block
@property (nonatomic,readonly) NSMutableSet * rowIDsSet;                                             //@synthesize rowIDsSet=_rowIDsSet - In the implementation block
@property (nonatomic,readonly) NSUUID * parentObjectID; 
@property (nonatomic,readonly) NSUUID * objectID; 
@property (nonatomic,readonly) NSString * recordName; 
@property (getter=isAdded,nonatomic,readonly) BOOL addChange; 
@property (getter=isUpdated,nonatomic,readonly) BOOL updateChange; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleteChange; 
@property (getter=isInvalid,nonatomic,readonly) BOOL invalidChange; 
@property (getter=isDropAndDoNotApply,nonatomic,readonly) BOOL dropAndDoNotApply; 
@property (getter=isDropAfterApply,nonatomic,readonly) BOOL dropAfterApply; 
@property (getter=isDropStagedAfterApply,nonatomic,readonly) BOOL dropStagedAfterApply; 
@property (getter=isPushAfterApply,nonatomic,readonly) BOOL pushAfterApply; 
@property (nonatomic,readonly) NSArray * rowIDs; 
@property (nonatomic,readonly) HMDCloudRecord * cloudRecord;                                         //@synthesize cloudRecord=_cloudRecord - In the implementation block
@property (nonatomic,readonly) HMDCloudRecord * deletedCloudRecord;                                  //@synthesize deletedCloudRecord=_deletedCloudRecord - In the implementation block
@property (nonatomic,readonly) CKRecord * record; 
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDBackingStoreModelObject * change; 
@property (nonatomic,readonly) NSSet * dependentUUIDs; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSUUID * parentUuid; 
@property (nonatomic,readonly) NSString * type; 
+(id)shortDescription;
-(id)init;
-(NSString *)description;
-(NSString *)type;
-(unsigned long long)changeType;
-(NSUUID *)uuid;
-(NSUUID *)objectID;
-(CKRecordID *)recordID;
-(NSString *)recordName;
-(id)shortDescription;
-(BOOL)isDeleted;
-(BOOL)isUpdated;
-(void)setChangeType:(unsigned long long)arg1 ;
-(CKRecord *)record;
-(BOOL)isInvalid;
-(BOOL)isAdded;
-(HMDBackingStoreModelObject *)change;
-(NSUUID *)parentObjectID;
-(NSSet *)dependentUUIDs;
-(NSUUID *)parentUuid;
-(id)initWithObjectChange:(id)arg1 ;
-(HMDBackingStoreModelObject *)objectChange;
-(id)initWithCloudObjectRecord:(id)arg1 ;
-(void)updateWithObjectChange:(id)arg1 ;
-(void)forceChangeToDelete;
-(void)updateCloudRecord:(id)arg1 ;
-(NSArray *)rowIDs;
-(HMDCloudRecord *)cloudRecord;
-(void)updateDeletedCloudRecord:(id)arg1 ;
-(void)forceChangeToInvalid;
-(void)updateChangeWithRecord:(id)arg1 ;
-(void)resetRecord;
-(HMDCloudRecord *)deletedCloudRecord;
-(NSMutableSet *)rowIDsSet;
-(id)_initWithObjectChange:(id)arg1 cloudObjectRecord:(id)arg2 ;
-(unsigned long long)applyType;
-(void)setObjectChange:(HMDBackingStoreModelObject *)arg1 ;
-(void)setApplyType:(unsigned long long)arg1 ;
-(BOOL)isDropAndDoNotApply;
-(BOOL)isDropAfterApply;
-(BOOL)isDropStagedAfterApply;
-(BOOL)isPushAfterApply;
-(void)replayChange:(id)arg1 stagedChange:(id)arg2 ;
@end

