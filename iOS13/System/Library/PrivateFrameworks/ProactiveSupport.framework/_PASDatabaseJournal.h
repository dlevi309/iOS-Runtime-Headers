/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, _PASDatabaseJournalFile;

@interface _PASDatabaseJournal : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _directoryPath;
	unsigned long long _serialNumber;
	NSString* _uuid;
	BOOL _journaling;
	BOOL _inMemory;
	_PASDatabaseJournalFile* _currentFile;

}

@property (nonatomic,readonly) BOOL journaling;              //@synthesize journaling=_journaling - In the implementation block
+(/*^block*/id)_binderForDictionary:(id)arg1 ;
+(id)_journalPathForDbPath:(id)arg1 ;
+(id)journalWithDbPath:(id)arg1 ;
+(id)journalForInMemoryDb;
-(id)description;
-(id)_getCurrentFile;
-(void)_clearCurrentFile;
-(void)_addCurrentFileToLog;
-(void)_closeCurrentFile;
-(void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3 ;
-(BOOL)_executeNextRecordFromFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 deleteFile:(BOOL*)arg4 ;
-(BOOL)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 ;
-(BOOL)executeQueriesOnDatabase:(id)arg1 ;
-(BOOL)deleteAllJournaledQueries;
-(BOOL)startJournaling;
-(BOOL)stopJournaling;
-(id)directoryPath;
-(BOOL)journaling;
@end

