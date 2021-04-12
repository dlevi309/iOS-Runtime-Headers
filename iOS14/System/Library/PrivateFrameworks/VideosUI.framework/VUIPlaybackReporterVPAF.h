/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIPlaybackReporter.h>

@class NSMapTable;

@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter {

	NSMapTable* _pendingPlayerProperties;

}
+(id)sharedInstance;
+(unsigned long long)_playHeadMillis:(id)arg1 ;
-(id)init;
-(id)_connectionInfo;
-(id)_screenInfo;
-(void)dealloc;
-(BOOL)enforceSinglePlaybackSession;
-(void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3 ;
-(id)_createSessionForPlayer:(id)arg1 ;
-(void)_handleSeek_iOS:(id)arg1 ;
-(void)_handlePIPChange:(id)arg1 ;
-(void)_handleDisplaySizeChange:(id)arg1 ;
-(void)flushUnreportedEvents;
-(id)_metricsForSession:(id)arg1 ;
-(id)_skipIntroActionForSession:(id)arg1 consume:(BOOL)arg2 ;
-(id)_videoDisplayInfoForSession:(id)arg1 ;
-(id)_focusInfoForSession:(id)arg1 ;
-(id)_metricsForPlayer:(id)arg1 ;
-(id)_delegatedInfoForPlayer:(id)arg1 ;
-(id)_colorRangeForPlayer:(id)arg1 ;
-(id)_audioFormatForPlayer:(id)arg1 ;
-(id)_sensitiveContentInfoForPlayer:(id)arg1 ;
-(id)_downloadInfoForPlayer:(id)arg1 ;
-(id)_subtitleInfoForPlayer:(id)arg1 ;
-(void)_setSessionMetadataValue:(id)arg1 forKey:(id)arg2 player:(id)arg3 ;
-(BOOL)_isDelegatedForPlayer:(id)arg1 ;
@end

