/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, SGDatabaseJournalFile;

@interface SGDatabaseJournal : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _directoryPath;
	unsigned long long _serialNumber;
	NSString* _uuid;
	BOOL _journaling;
	BOOL _inMemory;
	SGDatabaseJournalFile* _currentFile;

}

@property (nonatomic,readonly) BOOL journaling;              //@synthesize journaling=_journaling - In the implementation block
+(/*^block*/id)_binderForDictionary:(id)arg1 ;
+(id)journalForInMemoryDb;
+(id)_allowedTypesForQueryKeyedArchives;
+(id)journalWithName:(id)arg1 ;
-(BOOL)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 ;
-(BOOL)stopJournaling;
-(BOOL)executeQueriesOnDatabase:(id)arg1 ;
-(BOOL)journaling;
-(id)_getCurrentFile;
-(void)_closeCurrentFile;
-(void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3 ;
-(void)_addCurrentFileToLog;
-(BOOL)startJournaling;
-(void)_clearCurrentFile;
-(BOOL)deleteAllJournaledQueries;
@end

