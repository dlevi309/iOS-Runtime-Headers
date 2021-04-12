/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSArray, NSSet, NSDictionary;

@interface PFCloudKitOperationBatch : NSObject {

	NSMutableSet* _deletedRecordIDs;
	NSMutableDictionary* _recordTypeToDeletedRecordID;
	NSMutableArray* _records;
	unsigned long long _sizeInBytes;

}

@property (nonatomic,readonly) NSArray * records;                                       //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordIDs;                                //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordTypeToDeletedRecordID;              //@synthesize recordTypeToDeletedRecordID=_recordTypeToDeletedRecordID - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes;                          //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalObjectCount; 
-(id)init;
-(void)dealloc;
-(unsigned long long)sizeInBytes;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(void)addDeletedRecordID:(id)arg1 forRecordOfType:(id)arg2 ;
-(unsigned long long)totalObjectCount;
-(NSDictionary *)recordTypeToDeletedRecordID;
-(NSSet *)deletedRecordIDs;
@end

