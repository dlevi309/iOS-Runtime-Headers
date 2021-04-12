/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSMutableSet, NSLock, NSArray, NSDictionary;

@interface MSPCloudContainerChangeSet : NSObject {

	NSMutableSet* _changes;
	NSMutableSet* _deletes;
	NSLock* _lock;

}

@property (nonatomic,readonly) NSArray * changedRecords; 
@property (nonatomic,readonly) NSArray * deletedRecords; 
@property (nonatomic,readonly) NSDictionary * allChangesById; 
@property (nonatomic,readonly) BOOL hasChanges; 
-(id)init;
-(id)description;
-(BOOL)hasChanges;
-(void)addRecord:(id)arg1 ;
-(NSArray *)deletedRecords;
-(NSArray *)changedRecords;
-(NSDictionary *)allChangesById;
-(id)threadSafeArrayFromSet:(id)arg1 ;
-(void)threadSafeAddReplicaRecord:(id)arg1 toSet:(id)arg2 ;
-(void)addDeletedRecord:(id)arg1 ;
-(void)addChangedRecord:(id)arg1 ;
@end

