/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 ;
-(BOOL)stopJournaling;
-(BOOL)executeQueriesOnDatabase:(id)arg1 ;
-(BOOL)journaling;
-(id)description;
-(BOOL)_executeNextRecordFromFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 deleteFile:(BOOL*)arg4 ;
-(id)_getCurrentFile;
-(void)_closeCurrentFile;
-(void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3 ;
-(void)_addCurrentFileToLog;
-(BOOL)startJournaling;
-(void)_clearCurrentFile;
-(id)directoryPath;
-(BOOL)deleteAllJournaledQueries;
@end

