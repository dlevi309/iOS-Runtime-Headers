/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDJournalChapterEnumeratorTestsDelegate;
@class NSURL, NSError, NSMutableArray;

@interface HDJournalChapterEnumerator : NSObject {

	NSURL* _URL;
	long long _currentIndex;
	BOOL _hasLoadedPersistedJournalNames;
	long long _maxAllowedOpenJournalChapterCount;
	long long _totalJournalChapterCount;
	NSError* _cachedError;
	NSMutableArray* _remainingJournalChapters;
	NSMutableArray* _openJournalChapters;
	id<HDJournalChapterEnumeratorTestsDelegate> _unitTestDelegate;

}

@property (nonatomic,retain) NSMutableArray * remainingJournalChapters;                                                           //@synthesize remainingJournalChapters=_remainingJournalChapters - In the implementation block
@property (nonatomic,retain) NSMutableArray * openJournalChapters;                                                                //@synthesize openJournalChapters=_openJournalChapters - In the implementation block
@property (getter=_totalOpenJournalChapterCount,nonatomic,readonly) unsigned long long totalOpenJournalChapterCount; 
@property (assign,nonatomic) long long maxAllowedOpenJournalChapterCount; 
@property (assign,nonatomic,__weak) id<HDJournalChapterEnumeratorTestsDelegate> unitTestDelegate;                                 //@synthesize unitTestDelegate=_unitTestDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasJournalChapters; 
@property (nonatomic,readonly) unsigned long long totalJournalChapterCount; 
@property (nonatomic,readonly) unsigned long long currentJournalChapterIndex; 
@property (getter=hasMoreJournalChapters,nonatomic,readonly) BOOL moreJournalChapters; 
+(id)_journalChaptersForURL:(id)arg1 sorted:(BOOL)arg2 error:(id*)arg3 ;
+(long long)journalChapterCountForURL:(id)arg1 ;
+(id)nextJournalChapterNameForURL:(id)arg1 ;
+(id)journalChaptersForURL:(id)arg1 error:(id*)arg2 ;
+(id)_lightweightDirectoryEnumeratorForURL:(id)arg1 ;
-(void)setUnitTestDelegate:(id<HDJournalChapterEnumeratorTestsDelegate>)arg1 ;
-(id)nextOpenJournalChapterError:(id*)arg1 ;
-(id<HDJournalChapterEnumeratorTestsDelegate>)unitTestDelegate;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)loadSortedJournalChaptersWithError:(id*)arg1 ;
-(BOOL)_updateRollingBufferIfRequiredWithError:(id*)arg1 ;
-(NSMutableArray *)openJournalChapters;
-(NSMutableArray *)remainingJournalChapters;
-(unsigned long long)totalJournalChapterCount;
-(void)setOpenJournalChapters:(NSMutableArray *)arg1 ;
-(void)setMaxAllowedOpenJournalChapterCount:(long long)arg1 ;
-(long long)maxAllowedOpenJournalChapterCount;
-(void)setRemainingJournalChapters:(NSMutableArray *)arg1 ;
-(unsigned long long)currentJournalChapterIndex;
-(BOOL)hasMoreJournalChapters;
-(void)closeJournalChapters;
-(BOOL)hasJournalChapters;
-(unsigned long long)_totalOpenJournalChapterCount;
-(id)_openJournalChapters:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

