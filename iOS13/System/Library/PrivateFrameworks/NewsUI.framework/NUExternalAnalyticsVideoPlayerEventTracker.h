/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol NSSNewsAnalyticsSessionManager, NUExternalAnalyticsEventStreamObserver;
@class NSString;

@interface NUExternalAnalyticsVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker> {

	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	id<NUExternalAnalyticsEventStreamObserver> _observer;
	NSString* _referrer;

}

@property (nonatomic,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;                       //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<NUExternalAnalyticsEventStreamObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;                                                //@synthesize referrer=_referrer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NUExternalAnalyticsEventStreamObserver>)observer;
-(NSString *)referrer;
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(void)videoDidAppearWithVideoItem:(id)arg1 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(id)initWithSessionManager:(id)arg1 observer:(id)arg2 referrer:(id)arg3 ;
-(id)_articleViewEventWithQueryParametersForVideoItem:(id)arg1 ;
-(void)_submitEventWithQueryParameters:(id)arg1 ;
-(id)_videoPlaybackEventQueryParametersForVideoItem:(id)arg1 streamUserAction:(id)arg2 ;
-(id)_eventWithQueryParameters:(id)arg1 ;
-(id)_defaultQueryParametersWithEventType:(id)arg1 ;
-(void)_populateQueryParameters:(id)arg1 withVideoItem:(id)arg2 ;
@end

