/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSURLCompletionDataSource;
#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSURLCompletionDatabase : NSObject {

	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _fullTextBookmarkMatchesCache;
	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _fullTextHistoryMatchesCache;
	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _prefixBookmarkMatchesCache;
	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _prefixHistoryMatchesCache;
	NSString* _fullTextBookmarkMatchesCacheString;
	NSString* _fullTextHistoryMatchesCacheString;
	NSString* _prefixBookmarkMatchesCacheString;
	NSString* _prefixHistoryMatchesCacheString;
	id<WBSURLCompletionDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<WBSURLCompletionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(void)initializeURLCompletionOnMainThread;
+(BOOL)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const BookmarkAndHistoryCompletionMatch*)arg1 ;
-(id)init;
-(id<WBSURLCompletionDataSource>)dataSource;
-(void)setDataSource:(id<WBSURLCompletionDataSource>)arg1 ;
-(void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg5 bookmarkLimit:(unsigned long long)arg6 ;
-(void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg5 bookmarkLimit:(unsigned long long)arg6 ;
-(void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)arg1 ;
-(void)clearBookmarkMatchesCaches;
-(void)clearHistoryMatchesCache;
-(void)_getSortedMatchesForTypedString:(id)arg1 topHits:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg5 bookmarkLimit:(unsigned long long)arg6 prefixMatchesOnly:(BOOL)arg7 ;
-(void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 ;
-(void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 dataTypes:(unsigned)arg4 ;
-(void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned long long)arg4 forQueryID:(long long)arg5 ;
-(void)clearMatchesCaches;
@end

