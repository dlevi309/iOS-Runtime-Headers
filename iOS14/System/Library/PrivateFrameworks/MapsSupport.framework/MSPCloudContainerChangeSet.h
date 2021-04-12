/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)deletedRecords;
-(id)description;
-(BOOL)hasChanges;
-(void)addRecord:(id)arg1 ;
-(NSArray *)changedRecords;
-(NSDictionary *)allChangesById;
-(id)threadSafeArrayFromSet:(id)arg1 ;
-(void)threadSafeAddReplicaRecord:(id)arg1 toSet:(id)arg2 ;
-(void)addDeletedRecord:(id)arg1 ;
-(void)addChangedRecord:(id)arg1 ;
@end

