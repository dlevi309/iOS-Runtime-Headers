/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _purgedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * purgedRecordZoneID;              //@synthesize purgedRecordZoneID=_purgedRecordZoneID - In the implementation block
-(void)dealloc;
-(id)description;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(BOOL)wipeAllCloudDataAndPurgeHistoryToken:(BOOL)arg1 error:(id*)arg2 ;
-(CKRecordZoneID *)purgedRecordZoneID;
@end

