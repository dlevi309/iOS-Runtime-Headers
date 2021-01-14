/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _deletedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * deletedRecordZoneID;              //@synthesize deletedRecordZoneID=_deletedRecordZoneID - In the implementation block
-(id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(CKRecordZoneID *)deletedRecordZoneID;
-(id)description;
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

