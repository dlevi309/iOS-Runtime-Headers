/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@class MPCPlaybackEngine, MPAssistantAnalyticsReportingController, MPCJinglePlayActivityReportingController, MPCReportingPlaybackObserver, MPRTCReportingController, MPCPlaybackHistoryController, MPCLyricsReportingController, NSString;

@interface _MPCReportingController : NSObject <ICEnvironmentMonitorObserver> {

	MPCPlaybackEngine* _playbackEngine;
	MPAssistantAnalyticsReportingController* _assistantAnalyticsController;
	MPCJinglePlayActivityReportingController* _jinglePlayActivityReportingController;
	MPCReportingPlaybackObserver* _reportingPlaybackObserver;
	MPRTCReportingController* _rtcReportingController;
	MPCPlaybackHistoryController* _playbackHistoryController;
	MPCLyricsReportingController* _lyricsReportingController;

}

@property (nonatomic,retain) MPAssistantAnalyticsReportingController * assistantAnalyticsController;                        //@synthesize assistantAnalyticsController=_assistantAnalyticsController - In the implementation block
@property (nonatomic,retain) MPCJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
@property (nonatomic,retain) MPCReportingPlaybackObserver * reportingPlaybackObserver;                                      //@synthesize reportingPlaybackObserver=_reportingPlaybackObserver - In the implementation block
@property (nonatomic,retain) MPRTCReportingController * rtcReportingController;                                             //@synthesize rtcReportingController=_rtcReportingController - In the implementation block
@property (nonatomic,retain) MPCPlaybackHistoryController * playbackHistoryController;                                      //@synthesize playbackHistoryController=_playbackHistoryController - In the implementation block
@property (nonatomic,retain) MPCLyricsReportingController * lyricsReportingController;                                      //@synthesize lyricsReportingController=_lyricsReportingController - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                                                   //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)recordLyricsViewEvent:(id)arg1 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
-(MPCReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setReportingPlaybackObserver:(MPCReportingPlaybackObserver *)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2 ;
-(MPAssistantAnalyticsReportingController *)assistantAnalyticsController;
-(void)setAssistantAnalyticsController:(MPAssistantAnalyticsReportingController *)arg1 ;
-(MPRTCReportingController *)rtcReportingController;
-(void)setRtcReportingController:(MPRTCReportingController *)arg1 ;
-(MPCPlaybackHistoryController *)playbackHistoryController;
-(void)setPlaybackHistoryController:(MPCPlaybackHistoryController *)arg1 ;
-(MPCLyricsReportingController *)lyricsReportingController;
-(void)setLyricsReportingController:(MPCLyricsReportingController *)arg1 ;
@end

