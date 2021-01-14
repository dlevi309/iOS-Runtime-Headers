/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

@class CKRecordID, BRCItemID, NSString, NSNumber, BRCProgress, CKRecord;


@protocol BRCTransfer
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,readonly) CKRecordID * secondaryRecordID; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) NSString * stageID; 
@property (nonatomic,readonly) NSNumber * transferID; 
@property (nonatomic,readonly) NSString * etag; 
@property (nonatomic,readonly) unsigned long long totalSize; 
@property (nonatomic,readonly) BRCProgress * progress; 
@property (assign,nonatomic) BOOL progressPublished; 
@property (assign,nonatomic) unsigned long long doneSize; 
@property (nonatomic,retain) CKRecord * record; 
@property (nonatomic,retain) CKRecord * secondaryRecord; 
@required
-(CKRecord *)record;
-(BRCProgress *)progress;
-(NSString *)etag;
-(void)setRecord:(id)arg1;
-(BRCItemID *)itemID;
-(unsigned long long)totalSize;
-(NSString *)stageID;
-(CKRecordID *)recordID;
-(NSNumber *)transferID;
-(void)setProgressPublished:(BOOL)arg1;
-(BOOL)progressPublished;
-(CKRecordID *)secondaryRecordID;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1;
-(CKRecord *)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1;

@end

