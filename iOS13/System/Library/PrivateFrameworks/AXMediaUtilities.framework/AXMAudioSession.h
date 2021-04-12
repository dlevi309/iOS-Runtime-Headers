/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
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
@end

