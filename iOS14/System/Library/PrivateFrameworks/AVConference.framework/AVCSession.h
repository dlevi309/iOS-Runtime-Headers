/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVCSessionParticipantDelegate.h>
#import <AVConference/AVCSessionParticipantControlProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, AVCSessionParticipant, AVCSessionConfiguration, NSString, NSObject, VCXPCClientShared, NSDictionary, NSData, NSArray;

@interface AVCSession : NSObject <AVCSessionParticipantDelegate, AVCSessionParticipantControlProtocol> {

	NSMutableDictionary* _remoteParticipants;
	NSMutableDictionary* _participantsToAdd;
	AVCSessionParticipant* _localParticipant;
	AVCSessionConfiguration* _configuration;
	NSString* _transportToken;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	VCXPCClientShared* _connection;
	long long _sessionToken;
	NSDictionary* _capabilities;
	NSString* _uuid;
	NSData* _frequencyLevels;
	int _activeConfigurationCount;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                           //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCSessionConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateNotificationQueue;              //@synthesize delegateNotificationQueue=_delegateNotificationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * remoteParticipantsMap;                         //@synthesize remoteParticipants=_remoteParticipants - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * participantsToAdd;                             //@synthesize participantsToAdd=_participantsToAdd - In the implementation block
@property (nonatomic,readonly) AVCSessionParticipant * localParticipant;                            //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,readonly) VCXPCClientShared * xpcConnection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) long long sessionToken;                                              //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSArray * remoteParticipants; 
@property (assign,nonatomic) id<AVCSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSData * negotiationData; 
@property (assign,getter=isAudioMuted,nonatomic) BOOL audioMuted; 
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled; 
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (assign,getter=isAudioPaused,nonatomic) BOOL audioPaused; 
@property (assign,getter=isVideoPaused,nonatomic) BOOL videoPaused; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) NSData * frequencyLevels;                                            //@synthesize frequencyLevels=_frequencyLevels - In the implementation block
-(VCXPCClientShared *)xpcConnection;
-(NSString *)uuid;
-(NSDictionary *)capabilities;
-(void)setVolume:(float)arg1 ;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)setVideoPaused:(BOOL)arg1 ;
-(id<AVCSessionDelegate>)delegate;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)start;
-(void)stop;
-(void)stopWithError:(id)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(void)setDelegate:(id<AVCSessionDelegate>)arg1 ;
-(long long)sessionToken;
-(NSString *)description;
-(AVCSessionConfiguration *)configuration;
-(void)setAudioMuted:(BOOL)arg1 ;
-(BOOL)isVideoEnabled;
-(void)updateConfiguration:(id)arg1 ;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(float)volume;
-(BOOL)isAudioEnabled;
-(void)removeParticipant:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(AVCSessionConfiguration *)arg1 ;
-(BOOL)isVideoPaused;
-(void)addParticipant:(id)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(AVCSessionParticipant *)localParticipant;
-(BOOL)isAudioPaused;
-(void)registerBlocksForNotifications;
-(NSObject*<OS_dispatch_queue>)delegateNotificationQueue;
-(void)setAudioPaused:(BOOL)arg1 ;
-(NSArray *)remoteParticipants;
-(void)participant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)participant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)participant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)participant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)deregisterFromNotifications;
-(void)setupNotificationQueue:(id)arg1 ;
-(id)newNSErrorWithErrorDictionary:(id)arg1 ;
-(void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2 ;
-(NSData *)negotiationData;
-(BOOL)isAudioMuted;
-(NSData *)frequencyLevels;
-(id)initPrivateWithTransportToken:(id)arg1 configuration:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(BOOL)validateParticipantToAdd:(id)arg1 ;
-(BOOL)validateParticipantToRemove:(id)arg1 ;
-(void)validateParticipantConfiguration;
-(NSMutableDictionary *)remoteParticipantsMap;
-(NSMutableDictionary *)participantsToAdd;
-(id)initWithTransportToken:(id)arg1 configuration:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(void)beginParticipantConfiguration;
-(void)endParticipantConfiguration;
-(void)participant:(id)arg1 frequencyLevelsDidChange:(id)arg2 ;
@end

