/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@class MPCJinglePlayActivityReportingController, MPCReportingPlaybackObserver, NSString;

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver> {

	MPCJinglePlayActivityReportingController* _jinglePlayActivityReportingController;
	MPCReportingPlaybackObserver* _reportingPlaybackObserver;

}

@property (nonatomic,retain) MPCJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
@property (nonatomic,retain) MPCReportingPlaybackObserver * reportingPlaybackObserver;                                      //@synthesize reportingPlaybackObserver=_reportingPlaybackObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
-(id)init;
-(MPCReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setReportingPlaybackObserver:(MPCReportingPlaybackObserver *)arg1 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)recordLyricsViewEvent:(id)arg1 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
@end

