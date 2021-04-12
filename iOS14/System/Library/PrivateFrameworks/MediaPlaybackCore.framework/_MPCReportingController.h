/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPlaybackHistoryController:(MPCPlaybackHistoryController *)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
-(MPCReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setLyricsReportingController:(MPCLyricsReportingController *)arg1 ;
-(void)setRtcReportingController:(MPRTCReportingController *)arg1 ;
-(void)setReportingPlaybackObserver:(MPCReportingPlaybackObserver *)arg1 ;
-(MPAssistantAnalyticsReportingController *)assistantAnalyticsController;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(MPCPlaybackHistoryController *)playbackHistoryController;
-(void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2 ;
-(void)recordLyricsViewEvent:(id)arg1 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setAssistantAnalyticsController:(MPAssistantAnalyticsReportingController *)arg1 ;
-(MPRTCReportingController *)rtcReportingController;
-(MPCLyricsReportingController *)lyricsReportingController;
-(MPCPlaybackEngine *)playbackEngine;
-(void)dealloc;
@end

