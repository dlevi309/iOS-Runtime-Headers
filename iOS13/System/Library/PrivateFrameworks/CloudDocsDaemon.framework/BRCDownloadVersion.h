/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class CKRecordID, CKRecord, BRCClientZone, GSPermanentStorage, NSError, NSNumber, BRCProgress;

@interface BRCDownloadVersion : BRCDownload {

	CKRecordID* _secondaryRecordID;
	CKRecord* _secondaryRecord;
	BRCClientZone* _clientZone;
	BOOL _sharedZone;
	BOOL _isLoser;
	GSPermanentStorage* _storage;
	NSError* _gsError;
	NSNumber* _docID;

}

@property (nonatomic,readonly) GSPermanentStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) BRCProgress * progress; 
@property (nonatomic,readonly) NSError * gsError;                         //@synthesize gsError=_gsError - In the implementation block
@property (nonatomic,readonly) BOOL isLoser;                              //@synthesize isLoser=_isLoser - In the implementation block
@property (nonatomic,readonly) NSNumber * docID;                          //@synthesize docID=_docID - In the implementation block
-(id)description;
-(GSPermanentStorage *)storage;
-(BRCProgress *)progress;
-(int)kind;
-(void)setProgress:(BRCProgress *)arg1 ;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(BOOL)arg4 ;
-(NSError *)gsError;
-(id)secondaryRecordID;
-(id)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1 ;
-(NSNumber *)docID;
-(id)_stageContentWithSession:(id)arg1 error:(id*)arg2 ;
-(id)_stageWithSession:(id)arg1 creationInfo:(id*)arg2 error:(id*)arg3 ;
-(BOOL)isLoser;
@end

