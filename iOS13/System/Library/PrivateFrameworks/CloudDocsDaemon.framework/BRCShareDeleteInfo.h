/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class CKRecordID, CKRecord;

@interface BRCShareDeleteInfo : NSObject {

	CKRecordID* _shareID;
	CKRecord* _emptyRecord;

}

@property (nonatomic,readonly) CKRecordID * shareID;                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,readonly) CKRecord * emptyRecord;              //@synthesize emptyRecord=_emptyRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CKRecordID *)shareID;
-(CKRecord *)emptyRecord;
-(id)initWithShareID:(id)arg1 emptyRecord:(id)arg2 ;
@end

