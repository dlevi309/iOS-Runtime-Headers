/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/SVXClientServiceConnectionDelegate.h>
#import <libobjc.A.dylib/SVXClientSessionServiceDelegate.h>

@protocol OS_dispatch_queue;
@class AVAudioSession, RPCompanionLinkClient, NSMutableDictionary, SVXClientServiceConnection, NSObject, NSString;

@interface CULiveAudioServer : NSObject <SVXClientServiceConnectionDelegate, SVXClientSessionServiceDelegate> {

	AVAudioSession* _audioSession;
	RPCompanionLinkClient* _messenger;
	NSMutableDictionary* _sessionMap;
	SVXClientServiceConnection* _siriManager;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3 ;
-(void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3 ;
-(void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2 ;
-(void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2 ;
-(void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2 ;
-(void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3 ;
-(void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2 ;
-(void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2 ;
-(void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3 ;
-(void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2 ;
-(void)clientServiceConnectionDidInvalidate:(id)arg1 ;
-(id)clientServiceConnection:(id)arg1 performerForComponent:(long long)arg2 ;
-(void)peerDisconnected:(id)arg1 ;
-(void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleDataEvent:(id)arg1 options:(id)arg2 ;
-(void)sessionService:(id)arg1 didNotStartSoundWithID:(long long)arg2 error:(id)arg3 ;
@end

