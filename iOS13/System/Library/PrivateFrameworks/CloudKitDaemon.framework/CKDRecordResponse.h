/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKRecordID, NSString, CKRecord;

@interface CKDRecordResponse : NSObject {

	CKRecordID* _recordID;
	NSString* _etag;
	CKRecord* _record;

}

@property (nonatomic,retain) CKRecordID * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                    //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) CKRecord * record;                  //@synthesize record=_record - In the implementation block
-(id)description;
-(NSString *)etag;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
@end

