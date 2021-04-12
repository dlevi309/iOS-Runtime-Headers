/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDatabaseJournalFileEnumeratorTestsDelegate;
@class NSError, NSString, NSMutableArray;

@interface HDDatabaseJournalFileEnumerator : NSObject {

	long long _currentFileIndex;
	BOOL _hasLoadedFiles;
	long long _maxAllowedOpenFileHandleCount;
	long long _totalFilesCount;
	NSError* _cachedError;
	NSString* _path;
	NSMutableArray* _remainingJournalFileNames;
	NSMutableArray* _openJournalFiles;
	id<HDDatabaseJournalFileEnumeratorTestsDelegate> _unitTestDelegate;

}

@property (nonatomic,copy) NSString * path;                                                                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingJournalFileNames;                                            //@synthesize remainingJournalFileNames=_remainingJournalFileNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * openJournalFiles;                                                     //@synthesize openJournalFiles=_openJournalFiles - In the implementation block
@property (assign,nonatomic,__weak) id<HDDatabaseJournalFileEnumeratorTestsDelegate> unitTestDelegate;              //@synthesize unitTestDelegate=_unitTestDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasFiles; 
@property (nonatomic,readonly) unsigned long long totalJournalFileCount; 
@property (nonatomic,readonly) unsigned long long currentJournalFileIndex; 
@property (getter=hasMoreJournalFiles,nonatomic,readonly) BOOL moreJournalFiles; 
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id<HDDatabaseJournalFileEnumeratorTestsDelegate>)unitTestDelegate;
-(void)setUnitTestDelegate:(id<HDDatabaseJournalFileEnumeratorTestsDelegate>)arg1 ;
-(void)closeJournalFiles;
-(void)setRemainingJournalFileNames:(NSMutableArray *)arg1 ;
-(void)setOpenJournalFiles:(NSMutableArray *)arg1 ;
-(BOOL)_updateRollingBufferIfRequiredWithError:(id*)arg1 ;
-(long long)maxAllowedOpenFileHandleCount;
-(id)_createFileHandlesForFileNames:(id)arg1 error:(id*)arg2 ;
-(id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasFiles;
-(BOOL)loadSortedJournalFilesWithError:(id*)arg1 ;
-(id)nextJournalFileWithError:(id*)arg1 ;
-(BOOL)hasMoreJournalFiles;
-(unsigned long long)totalJournalFileCount;
-(unsigned long long)currentJournalFileIndex;
-(unsigned long long)_totalOpenFileHandleCount;
-(void)setMaxAllowedOpenFileHandleCount:(long long)arg1 ;
-(NSMutableArray *)remainingJournalFileNames;
-(NSMutableArray *)openJournalFiles;
@end

