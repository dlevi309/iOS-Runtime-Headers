/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

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
@property (retain) NSMutableArray * mutableSections;                //@synthesize mutableSections=_mutableSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(SPSearchQuery *)query;
-(void)start;
-(id)searchThroughSection;
-(void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(BOOL)arg3 partiallyComplete:(BOOL)arg4 update:(BOOL)arg5 complete:(BOOL)arg6 delayedTopHit:(BOOL)arg7 unchanged:(BOOL)arg8 forceStable:(BOOL)arg9 blendingDuration:(double)arg10 geoEntityString:(id)arg11 supportedAppScopes:(id)arg12 showMoreInAppInfo:(id)arg13 ;
-(void)searchDaemonRankingLog:(id)arg1 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(void)cancel;
-(id)searchString;
-(id)initForSession:(id)arg1 withQuery:(id)arg2 ;
-(void)truncateSuggestionsSectionToFit:(id)arg1 ;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(void)mergeSections;
-(id)defaultSearchThroughSection;
-(id)resultWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 ;
-(void)addSections:(id)arg1 delayedTopHit:(BOOL)arg2 ;
-(void)clearInternal:(int)arg1 invalidate:(BOOL)arg2 ;
-(NSMutableArray *)mutableSections;
-(void)setMutableSections:(NSMutableArray *)arg1 ;
@end

