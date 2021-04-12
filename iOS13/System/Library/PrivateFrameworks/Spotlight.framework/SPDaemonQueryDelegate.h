/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/


@protocol SPDaemonQueryDelegate <NSObject>
@required
-(void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(BOOL)arg3 complete:(BOOL)arg4 finished:(BOOL)arg5 delayed:(BOOL)arg6 delayedTopHit:(BOOL)arg7 unchanged:(BOOL)arg8 forceStable:(BOOL)arg9 blendingDuration:(double)arg10 geoEntityString:(id)arg11 supportedAppScopes:(id)arg12;
-(void)searchDaemonSuggestionsArray:(id)arg1;
-(void)searchDaemonLocalSuggestionsData:(id)arg1;
-(void)searchDaemonRankingLog:(id)arg1;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;

@end

