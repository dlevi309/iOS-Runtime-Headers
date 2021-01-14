/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class CKRecordID, CKRecord;

@interface BRCShareDeleteInfo : NSObject {

	CKRecordID* _shareID;
	CKRecord* _emptyRecord;

}

@property (nonatomic,readonly) CKRecordID * shareID;                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,readonly) CKRecord * emptyRecord;              //@synthesize emptyRecord=_emptyRecord - In the implementation block
-(CKRecordID *)shareID;
-(CKRecord *)emptyRecord;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithShareID:(id)arg1 emptyRecord:(id)arg2 ;
@end

