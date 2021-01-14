/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/


@protocol SPDaemonQueryDelegate <NSObject>
@required
-(void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(BOOL)arg3 partiallyComplete:(BOOL)arg4 update:(BOOL)arg5 complete:(BOOL)arg6 delayedTopHit:(BOOL)arg7 unchanged:(BOOL)arg8 forceStable:(BOOL)arg9 blendingDuration:(double)arg10 geoEntityString:(id)arg11 supportedAppScopes:(id)arg12 showMoreInAppInfo:(id)arg13;
-(void)searchDaemonSuggestionsArray:(id)arg1;
-(void)searchDaemonLocalSuggestionsData:(id)arg1;
-(void)searchDaemonRankingLog:(id)arg1;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;

@end

