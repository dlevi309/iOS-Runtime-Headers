/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSString, NSDate;

@interface WLStatistics : NSObject {

	BOOL _selectedForMigration;
	NSString* _contentType;
	unsigned long long _downloadDuration;
	unsigned long long _downloadByteCount;
	NSDate* _importStartDate;
	NSDate* _importEndDate;
	unsigned long long _importStartBytesFree;
	unsigned long long _importEndBytesFree;
	unsigned long long _importRecordCount;
	unsigned long long _importFailedRecordCount;

}

@property (nonatomic,readonly) NSString * contentType;                                //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) BOOL selectedForMigration;                               //@synthesize selectedForMigration=_selectedForMigration - In the implementation block
@property (assign,nonatomic) unsigned long long downloadDuration;                     //@synthesize downloadDuration=_downloadDuration - In the implementation block
@property (assign,nonatomic) unsigned long long downloadByteCount;                    //@synthesize downloadByteCount=_downloadByteCount - In the implementation block
@property (nonatomic,retain) NSDate * importStartDate;                                //@synthesize importStartDate=_importStartDate - In the implementation block
@property (nonatomic,retain) NSDate * importEndDate;                                  //@synthesize importEndDate=_importEndDate - In the implementation block
@property (assign,nonatomic) unsigned long long importStartBytesFree;                 //@synthesize importStartBytesFree=_importStartBytesFree - In the implementation block
@property (assign,nonatomic) unsigned long long importEndBytesFree;                   //@synthesize importEndBytesFree=_importEndBytesFree - In the implementation block
@property (assign,nonatomic) unsigned long long importRecordCount;                    //@synthesize importRecordCount=_importRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long importFailedRecordCount;              //@synthesize importFailedRecordCount=_importFailedRecordCount - In the implementation block
+(id)_statisticsWithContentType:(id)arg1 ;
+(id)aggregateContentType;
+(id)fetchContentType;
-(id)description;
-(NSString *)contentType;
-(unsigned long long)downloadDuration;
-(void)setDownloadDuration:(unsigned long long)arg1 ;
-(void)addToFetchByteCount:(unsigned long long)arg1 ;
-(void)incrementFetchRequestCount;
-(void)incrementFetchFailedRequestCount;
-(void)setSelectedForMigration:(BOOL)arg1 ;
-(void)setDownloadByteCount:(unsigned long long)arg1 ;
-(void)setImportStartDate:(NSDate *)arg1 ;
-(void)setImportEndDate:(NSDate *)arg1 ;
-(void)setImportStartBytesFree:(unsigned long long)arg1 ;
-(void)setImportEndBytesFree:(unsigned long long)arg1 ;
-(void)setImportRecordCount:(unsigned long long)arg1 ;
-(void)setImportFailedRecordCount:(unsigned long long)arg1 ;
-(BOOL)selectedForMigration;
-(unsigned long long)downloadByteCount;
-(NSDate *)importStartDate;
-(NSDate *)importEndDate;
-(unsigned long long)importStartBytesFree;
-(unsigned long long)importEndBytesFree;
-(unsigned long long)importRecordCount;
-(unsigned long long)importFailedRecordCount;
-(unsigned long long)downloadBytesPerSecond;
-(unsigned long long)importDuration;
-(long long)importBytesUsed;
-(void)setFetchDuration:(unsigned long long)arg1 ;
-(void)setFetchStartBytesFree:(unsigned long long)arg1 ;
-(void)setFetchEndBytesFree:(unsigned long long)arg1 ;
-(id)fetchLogString;
@end

