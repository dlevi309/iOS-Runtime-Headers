/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSMutableArray, AVAudioSession;

@interface AXMAudioSession : NSObject {

	NSMutableArray* _notificationObserverTokens;
	AVAudioSession* _session;

}

@property (nonatomic,retain) NSMutableArray * notificationObserverTokens;              //@synthesize notificationObserverTokens=_notificationObserverTokens - In the implementation block
@property (nonatomic,retain) AVAudioSession * session;                                 //@synthesize session=_session - In the implementation block
-(id)init;
-(AVAudioSession *)session;
-(void)setSession:(AVAudioSession *)arg1 ;
-(void)setNotificationObserverTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)notificationObserverTokens;
-(void)_handleSessionInterrupted:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)_handleRouteChanged:(unsigned long long)arg1 previousRoute:(id)arg2 ;
-(void)_handleMediaServicesLost;
-(void)_handleMediaServicesReset;
-(void)_handleSilenceSecondaryAudio:(unsigned long long)arg1 ;
-(id)_stringForRouteChangeReason:(unsigned long long)arg1 ;
-(BOOL)deactivateSessionWithError:(id*)arg1 ;
-(BOOL)activateSessionWithError:(id*)arg1 ;
-(void)dealloc;
@end

