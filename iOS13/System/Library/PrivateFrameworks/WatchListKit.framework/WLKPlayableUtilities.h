/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@interface WLKPlayableUtilities : NSObject
+(BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2 ;
+(BOOL)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 ;
+(BOOL)_openITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 ;
+(BOOL)_openNonITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 ;
+(BOOL)_openITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 ;
+(BOOL)_openNonITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 ;
+(id)_watchListAppPunchoutURLWithPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 allowPlayAction:(BOOL)arg6 isPlaybackURL:(BOOL*)arg7 ;
+(BOOL)_playNonITunesPlayableUsingAssociatedApp:(id)arg1 ;
+(id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 ;
+(id)_defaultPunchoutURLWithPlayable:(id)arg1 isPlaybackURL:(BOOL*)arg2 ;
+(id)_defaultPunchoutURLWithPlayable:(id)arg1 URLKey:(id)arg2 ;
+(id)_defaultPlayPunchoutURLWithPlayable:(id)arg1 ;
+(id)_defaultOpenPunchoutURLWithPlayable:(id)arg1 ;
+(BOOL)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 ;
+(BOOL)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 ;
+(id)_punchoutURLForDirectPlayback:(id)arg1 ignoreExtras:(BOOL)arg2 ;
@end

