/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BRCProgress *)progress;
-(GSPermanentStorage *)storage;
-(NSNumber *)docID;
-(int)kind;
-(id)description;
-(void)setProgress:(BRCProgress *)arg1 ;
-(NSError *)gsError;
-(BOOL)isLoser;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(BOOL)arg4 ;
-(id)secondaryRecordID;
-(id)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1 ;
-(id)_stageContentWithSession:(id)arg1 error:(id*)arg2 ;
-(id)_stageWithSession:(id)arg1 creationInfo:(id*)arg2 error:(id*)arg3 ;
@end

