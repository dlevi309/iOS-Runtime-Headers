/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class ANAnnounceServiceListener, ANPlaybackSessionServiceListener, ANAnnounceReachabilityServiceListener, ANRapportEventStreamHandler;

@interface ANAnnounceServer : NSObject {

	ANAnnounceServiceListener* _announceServiceListener;
	ANPlaybackSessionServiceListener* _playbackSessionServiceListener;
	ANAnnounceReachabilityServiceListener* _announceReachabilityServiceListener;
	ANRapportEventStreamHandler* _rapportEventStreamHandler;

}

@property (nonatomic,readonly) ANAnnounceServiceListener * announceServiceListener;                                      //@synthesize announceServiceListener=_announceServiceListener - In the implementation block
@property (nonatomic,readonly) ANPlaybackSessionServiceListener * playbackSessionServiceListener;                        //@synthesize playbackSessionServiceListener=_playbackSessionServiceListener - In the implementation block
@property (nonatomic,readonly) ANAnnounceReachabilityServiceListener * announceReachabilityServiceListener;              //@synthesize announceReachabilityServiceListener=_announceReachabilityServiceListener - In the implementation block
@property (nonatomic,readonly) ANRapportEventStreamHandler * rapportEventStreamHandler;                                  //@synthesize rapportEventStreamHandler=_rapportEventStreamHandler - In the implementation block
+(id)sharedServer;
-(id)init;
-(ANAnnounceServiceListener *)announceServiceListener;
-(ANPlaybackSessionServiceListener *)playbackSessionServiceListener;
-(ANAnnounceReachabilityServiceListener *)announceReachabilityServiceListener;
-(ANRapportEventStreamHandler *)rapportEventStreamHandler;
@end

