/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class CKRecordZone, CKDatabase, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitExporterOptions : NSObject {

	CKRecordZone* _recordZone;
	CKDatabase* _database;
	NSCloudKitMirroringDelegateOptions* _mirroringDelegateOptions;
	unsigned long long _perOperationBytesThreshold;
	unsigned long long _perOperationObjectThreshold;

}

@property (nonatomic,readonly) CKRecordZone * recordZone;                                                  //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringDelegateOptions;              //@synthesize mirroringDelegateOptions=_mirroringDelegateOptions - In the implementation block
@property (assign,nonatomic) unsigned long long perOperationBytesThreshold;                                //@synthesize perOperationBytesThreshold=_perOperationBytesThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long perOperationObjectThreshold;                               //@synthesize perOperationObjectThreshold=_perOperationObjectThreshold - In the implementation block
-(NSCloudKitMirroringDelegateOptions *)mirroringDelegateOptions;
-(CKRecordZone *)recordZone;
-(void)setPerOperationObjectThreshold:(unsigned long long)arg1 ;
-(id)initWithZone:(id)arg1 database:(id)arg2 options:(id)arg3 ;
-(void)setPerOperationBytesThreshold:(unsigned long long)arg1 ;
-(unsigned long long)perOperationBytesThreshold;
-(id)copy;
-(CKDatabase *)database;
-(unsigned long long)perOperationObjectThreshold;
-(void)dealloc;
@end

