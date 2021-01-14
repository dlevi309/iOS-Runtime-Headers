/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCTransfer.h>

@class NSString, BRCItemID, BRCProgress, CKRecord, CKRecordID, BRCClientZone, NSNumber;

@interface BRCDownload : NSObject <BRCTransfer> {

	long long _throttleID;
	unsigned long long _totalSize;
	NSString* _etag;
	BRCItemID* _itemID;
	NSString* _stageID;
	BRCProgress* _progress;
	CKRecord* _record;
	BOOL _progressPublished;
	CKRecordID* _recordID;
	unsigned long long _doneSize;
	BRCClientZone* _clientZone;

}

@property (nonatomic,readonly) int kind; 
@property (nonatomic,readonly) BRCClientZone * clientZone;                  //@synthesize clientZone=_clientZone - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID;                       //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) CKRecordID * secondaryRecordID; 
@property (nonatomic,readonly) BRCItemID * itemID;                          //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * stageID;                          //@synthesize stageID=_stageID - In the implementation block
@property (nonatomic,readonly) NSNumber * transferID; 
@property (nonatomic,readonly) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) unsigned long long totalSize;                //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,readonly) BRCProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL progressPublished;                        //@synthesize progressPublished=_progressPublished - In the implementation block
@property (assign,nonatomic) unsigned long long doneSize;                   //@synthesize doneSize=_doneSize - In the implementation block
@property (nonatomic,retain) CKRecord * record;                             //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecord * secondaryRecord; 
-(CKRecord *)record;
-(BRCProgress *)progress;
-(NSString *)etag;
-(void)setRecord:(CKRecord *)arg1 ;
-(int)kind;
-(BRCItemID *)itemID;
-(unsigned long long)totalSize;
-(BRCClientZone *)clientZone;
-(NSString *)stageID;
-(CKRecordID *)recordID;
-(void)dealloc;
-(NSNumber *)transferID;
-(void)setProgressPublished:(BOOL)arg1 ;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 ;
-(BOOL)progressPublished;
-(CKRecordID *)secondaryRecordID;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1 ;
-(CKRecord *)secondaryRecord;
-(void)setSecondaryRecord:(CKRecord *)arg1 ;
@end

