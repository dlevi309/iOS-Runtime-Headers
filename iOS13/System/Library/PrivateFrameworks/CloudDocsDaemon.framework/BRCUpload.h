/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCTransfer.h>

@class CKRecordID, BRCItemID, NSString, NSNumber, BRCProgress, CKRecord, BRCClientZone;

@interface BRCUpload : NSObject <BRCTransfer> {

	BRCClientZone* _clientZone;
	long long _throttleID;
	unsigned long long _totalSize;
	NSString* _stageID;
	BOOL _progressPublished;
	BRCItemID* _itemID;
	CKRecord* _record;
	unsigned long long _doneSize;
	BRCProgress* _progress;

}

@property (nonatomic,readonly) long long throttleID;                        //@synthesize throttleID=_throttleID - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,readonly) CKRecordID * secondaryRecordID; 
@property (nonatomic,readonly) BRCItemID * itemID;                          //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * stageID;                          //@synthesize stageID=_stageID - In the implementation block
@property (nonatomic,readonly) NSNumber * transferID; 
@property (nonatomic,readonly) NSString * etag; 
@property (nonatomic,readonly) unsigned long long totalSize;                //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,readonly) BRCProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL progressPublished;                        //@synthesize progressPublished=_progressPublished - In the implementation block
@property (assign,nonatomic) unsigned long long doneSize;                   //@synthesize doneSize=_doneSize - In the implementation block
@property (nonatomic,retain) CKRecord * record;                             //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecord * secondaryRecord; 
-(void)dealloc;
-(id)description;
-(BRCProgress *)progress;
-(NSString *)etag;
-(BRCItemID *)itemID;
-(CKRecordID *)recordID;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(unsigned long long)totalSize;
-(NSString *)stageID;
-(NSNumber *)transferID;
-(void)setProgressPublished:(BOOL)arg1 ;
-(BOOL)progressPublished;
-(CKRecordID *)secondaryRecordID;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1 ;
-(CKRecord *)secondaryRecord;
-(void)setSecondaryRecord:(CKRecord *)arg1 ;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3 ;
-(long long)throttleID;
@end

