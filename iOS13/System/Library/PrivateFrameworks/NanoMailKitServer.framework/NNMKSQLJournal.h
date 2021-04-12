/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableData, NSObject;

@interface NNMKSQLJournal : NSObject {

	NSString* _directoryPath;
	NSMutableData* _currentFileData;
	NSObject*<OS_dispatch_queue> _journalQueue;
	unsigned long long _filesCount;

}

@property (nonatomic,retain) NSString * directoryPath;                               //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSMutableData * currentFileData;                        //@synthesize currentFileData=_currentFileData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> journalQueue;              //@synthesize journalQueue=_journalQueue - In the implementation block
@property (assign,nonatomic) unsigned long long filesCount;                          //@synthesize filesCount=_filesCount - In the implementation block
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)_flush;
-(NSString *)directoryPath;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(unsigned long long)filesCount;
-(NSObject*<OS_dispatch_queue>)journalQueue;
-(void)setJournalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)_currentFilesCount;
-(BOOL)isJournalOverflow;
-(void)flushIfNeeded;
-(id)_sortedJournalFiles;
-(id)_journalFilesEnumerator;
-(id)_nextFilePath;
-(BOOL)appendSQLStatement:(id)arg1 ;
-(void)mergeUsingBlock:(/*^block*/id)arg1 ;
-(void)deleteJournalFiles;
-(NSMutableData *)currentFileData;
-(void)setCurrentFileData:(NSMutableData *)arg1 ;
-(void)setFilesCount:(unsigned long long)arg1 ;
@end

