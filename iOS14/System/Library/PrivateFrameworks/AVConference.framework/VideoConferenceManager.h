/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoConferenceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VideoConference, ICEResultWaitQueue;

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate> {

	unsigned char _clientUUID[16];
	opaque_pthread_mutex_t stateLock;
	opaque_pthread_mutex_t sipLock;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSMutableArray* vcList;
	VideoConference* activeConference;
	VideoConference* conferenceWithMic;
	ICEResultWaitQueue* resultQueue;
	tagHANDLE* hSIP;
	int sipRefCount;
	id _vtpWrapper;
	BOOL isVTPInitialized;
	id _networkAgent;

}

@property (assign) VideoConference * activeConference; 
@property (assign) VideoConference * conferenceWithMic; 
@property (readonly) ICEResultWaitQueue * resultQueue; 
@property (readonly) NSMutableArray * vcList; 
+(id)defaultVideoConferenceManager;
+(void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2 ;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned)arg3 ;
-(VideoConference *)activeConference;
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)pauseVideoConferences:(BOOL)arg1 ;
-(id)init;
-(void)videoConference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3 ;
-(void)addVideoConference:(id)arg1 ;
-(void)startSIPWithPacketMultiplexMode:(int)arg1 transportType:(unsigned)arg2 ;
-(void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2 ;
-(void)removeVideoConference:(id)arg1 ;
-(void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned)arg3 ;
-(id)conferenceForParticipantID:(id)arg1 ;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned)arg3 ;
-(tagHANDLE*)SIPHandle;
-(ICEResultWaitQueue *)resultQueue;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned)arg2 updateDict:(id)arg3 ;
-(BOOL)isSIPHandleValid:(tagHANDLE*)arg1 ;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(VideoConference *)conferenceWithMic;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 didPauseVideo:(BOOL)arg3 error:(id)arg4 ;
-(void)getClientUUID:(unsigned char)arg1 ;
-(void)createSIPWithPacketMultiplexMode:(int)arg1 ;
-(void)setConferenceWithMic:(VideoConference *)arg1 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3 ;
-(void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(BOOL)arg2 ;
-(void)setupVTPCallback;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned)arg3 withUserInfo:(id)arg4 error:(id)arg5 ;
-(id)conferenceForCallID:(unsigned)arg1 ;
-(void)registerBlocksForConference;
-(void)cleanupVTP;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(id)conferenceForSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(void)setActiveConference:(VideoConference *)arg1 ;
-(void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 forCallID:(unsigned)arg3 ;
-(BOOL)hasVideoConference:(id)arg1 ;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned)arg3 ;
-(NSMutableArray *)vcList;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 isSendingAudio:(BOOL)arg3 error:(id)arg4 ;
-(void)stopSIPWithTransportType:(unsigned)arg1 ;
@end

