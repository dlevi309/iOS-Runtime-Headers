/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

#import <Spotlight/Spotlight-Structs.h>
#import <Spotlight/SPQueryTask.h>
#import <libobjc.A.dylib/SPDaemonQueryDelegate.h>

@class SPClientSession, SPSearchQuery, SPDaemonQueryToken, NSMutableArray, NSString;

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate> {

	SPClientSession* _session;
	SPSearchQuery* _query;
	SPDaemonQueryToken* _token;
	BOOL _started;
	BOOL _newQuery;
	BOOL _didReceiveCompleteCallback;
	NSMutableArray* _mutableSections;
	NSString* _mutableSessionEntityString;

}

@property (readonly) SPSearchQuery * query;                         //@synthesize query=_query - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(SPSearchQuery *)query;
-(void)cancel;
-(void)start;
-(id)searchString;
-(void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(BOOL)arg3 complete:(BOOL)arg4 finished:(BOOL)arg5 delayed:(BOOL)arg6 delayedTopHit:(BOOL)arg7 unchanged:(BOOL)arg8 forceStable:(BOOL)arg9 blendingDuration:(double)arg10 geoEntityString:(id)arg11 supportedAppScopes:(id)arg12 ;
-(void)searchDaemonSuggestionsArray:(id)arg1 ;
-(void)searchDaemonRankingLog:(id)arg1 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(BOOL)_shouldPromptUserToOpenTTR;
-(id)initForSession:(id)arg1 withQuery:(id)arg2 ;
-(void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3 ;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(void)mergeSections;
-(id)defaultSearchThroughSection;
-(id)getTapToRadarPunchOutForRankingWithDebugLog:(id)arg1 ;
-(id)resultWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 ;
-(void)addSections:(id)arg1 delayedTopHit:(BOOL)arg2 ;
-(id)searchThroughSection;
-(void)clearInternal:(int)arg1 invalidate:(BOOL)arg2 ;
-(void)searchDaemonLocalSuggestionsData:(id)arg1 lexicon:(LXLexiconRef)arg2 tokenizer:(CFStringTokenizerRef)arg3 currentLocaleRef:(CFLocaleRef)arg4 ;
@end

