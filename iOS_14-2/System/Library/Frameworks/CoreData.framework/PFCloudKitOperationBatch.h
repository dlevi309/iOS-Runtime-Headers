/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSArray, NSSet, NSDictionary;

@interface PFCloudKitOperationBatch : NSObject {

	NSMutableSet* _deletedRecordIDs;
	NSMutableDictionary* _recordTypeToDeletedRecordID;
	NSMutableArray* _records;
	NSMutableSet* _recordIDs;
	unsigned long long _sizeInBytes;

}

@property (nonatomic,readonly) NSArray * records;                                       //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSSet * recordIDs;                                       //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordIDs;                                //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordTypeToDeletedRecordID;              //@synthesize recordTypeToDeletedRecordID=_recordTypeToDeletedRecordID - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes;                          //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalObjectCount; 
-(NSSet *)deletedRecordIDs;
-(id)init;
-(NSArray *)records;
-(NSSet *)recordIDs;
-(unsigned long long)sizeInBytes;
-(void)addRecord:(id)arg1 ;
-(void)addDeletedRecordID:(id)arg1 forRecordOfType:(id)arg2 ;
-(unsigned long long)totalObjectCount;
-(NSDictionary *)recordTypeToDeletedRecordID;
-(void)dealloc;
@end

