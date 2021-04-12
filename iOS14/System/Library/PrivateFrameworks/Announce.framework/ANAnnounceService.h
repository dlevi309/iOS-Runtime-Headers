/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANConnectionDelegate.h>

@protocol ANAnnounceServiceDelegate, ANRapportConnectionProvider, ANIDSConnectionProvider;
@class ANParticipant, NSString;

@interface ANAnnounceService : NSObject <ANConnectionDelegate> {

	id<ANAnnounceServiceDelegate> _delegate;
	id<ANRapportConnectionProvider> _rapportConnection;
	id<ANIDSConnectionProvider> _idsConnection;

}

@property (nonatomic,readonly) id<ANRapportConnectionProvider> rapportConnection;              //@synthesize rapportConnection=_rapportConnection - In the implementation block
@property (nonatomic,readonly) id<ANIDSConnectionProvider> idsConnection;                      //@synthesize idsConnection=_idsConnection - In the implementation block
@property (assign,nonatomic,__weak) id<ANAnnounceServiceDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ANParticipant * localParticipant; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)performPreflightChecksForSendingToHome:(id)arg1 ;
+(id)performPreflightChecksForSendingToRooms:(id)arg1 zones:(id)arg2 ;
+(id)performBasicValidationForAnnouncement:(id)arg1 ;
+(id)performIDSValidationForAnnouncement:(id)arg1 withSenderContext:(id)arg2 ;
+(id)performRapportValidationForAnnouncement:(id)arg1 withSenderContext:(id)arg2 ;
+(id)performPreflightChecksForSendingToHome:(id)arg1 rooms:(id)arg2 zones:(id)arg3 ;
+(void)purgeTemporaryFiles;
+(BOOL)_isAnnouncerAdminInAnnouncement:(id)arg1 home:(id)arg2 ;
+(id)announcementForUser:(id)arg1 inHome:(id)arg2 fromAnnouncement:(id)arg3 ;
+(void)_setIdentifiersForIDSService:(id)arg1 inLocation:(id)arg2 home:(id)arg3 ;
+(id)createAnnouncementWithContent:(id)arg1 fromSource:(id)arg2 forLocation:(id)arg3 inHome:(id)arg4 isReply:(BOOL)arg5 error:(id*)arg6 ;
+(id)announcementForDevice:(id)arg1 inHome:(id)arg2 fromAnnouncement:(id)arg3 ;
+(id)announcementForAccessory:(id)arg1 inHome:(id)arg2 fromAnnouncement:(id)arg3 ;
+(id)locationForHome:(id)arg1 rooms:(id)arg2 zones:(id)arg3 idsService:(id)arg4 ;
+(id)locationForReplyToAnnouncement:(id)arg1 home:(id)arg2 idsService:(id)arg3 ;
-(id)init;
-(id<ANAnnounceServiceDelegate>)delegate;
-(void)setDelegate:(id<ANAnnounceServiceDelegate>)arg1 ;
-(id<ANIDSConnectionProvider>)idsConnection;
-(ANParticipant *)localParticipant;
-(void)mockAnnouncement:(id)arg1 forHome:(id)arg2 playbackDeadline:(id)arg3 sentHandler:(/*^block*/id)arg4 ;
-(id)getScanningDeviceCandidates;
-(void)sendAnnouncement:(id)arg1 fromSource:(id)arg2 toHome:(id)arg3 rooms:(id)arg4 zones:(id)arg5 sentHandler:(/*^block*/id)arg6 ;
-(void)sendReply:(id)arg1 fromSource:(id)arg2 forAnnouncement:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)broadcastReply:(id)arg1 fromSource:(id)arg2 forAnnouncement:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)forwardAnnouncementToCompanion:(id)arg1 ;
-(void)connection:(id)arg1 failedDeliveryForMessage:(id)arg2 withError:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveMessage:(id)arg2 fromSender:(id)arg3 senderContext:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id<ANRapportConnectionProvider>)rapportConnection;
-(id)connectionDidReceiveRequestForHomeLocationStatus:(id)arg1 ;
-(id)initWithIDSConnection:(id)arg1 rapportConnection:(id)arg2 ;
-(void)_relayAnnouncementThroughHomePod:(id)arg1 inHome:(id)arg2 rooms:(id)arg3 zones:(id)arg4 sentHandler:(/*^block*/id)arg5 ;
-(void)_sendAnnouncement:(id)arg1 toDestination:(id)arg2 sentHandler:(/*^block*/id)arg3 ;
-(void)_logDebugInfoForHome:(id)arg1 ;
-(void)_forwardRelayRequest:(id)arg1 withSenderContext:(id)arg2 sentHandler:(/*^block*/id)arg3 ;
-(void)_fulfillRelayRequest:(id)arg1 withSenderContext:(id)arg2 sentHandler:(/*^block*/id)arg3 ;
@end

