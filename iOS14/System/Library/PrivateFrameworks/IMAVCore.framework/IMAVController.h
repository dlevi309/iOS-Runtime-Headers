/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class NSMutableArray, NSArray;

@interface IMAVController : NSObject {

	BOOL _blockMultipleIncomingInvitations;
	BOOL _blockOutgoingInvitationsDuringCall;
	BOOL _blockIncomingInvitationsDuringCall;
	NSMutableArray* _delegates;

}

@property (nonatomic,retain) NSMutableArray * _delegates;                          //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) BOOL _ready; 
@property (nonatomic,readonly) BOOL hasActiveConference; 
@property (nonatomic,readonly) BOOL hasRunningConference; 
@property (nonatomic,readonly) unsigned overallChatState; 
@property (nonatomic,readonly) BOOL cameraCapable; 
@property (nonatomic,readonly) BOOL microphoneCapable; 
@property (nonatomic,readonly) BOOL cameraConnected; 
@property (nonatomic,readonly) BOOL microphoneConnected; 
@property (assign,nonatomic) BOOL blockMultipleIncomingInvitations;                //@synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations - In the implementation block
@property (assign,nonatomic) BOOL blockIncomingInvitationsDuringCall;              //@synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall - In the implementation block
@property (assign,nonatomic) BOOL blockOutgoingInvitationsDuringCall;              //@synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall - In the implementation block
@property (nonatomic,readonly) NSArray * delegates; 
@property (assign,nonatomic) id<IMAVControllerDelegate> delegate; 
+(id)sharedInstance;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)delegates;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)cameraConnected;
-(void)_receivedPendingVCRequests;
-(id)init;
-(void)setupIMAVController;
-(void)setBlockMultipleIncomingInvitations:(BOOL)arg1 ;
-(id<IMAVControllerDelegate>)delegate;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5 ;
-(BOOL)blockOutgoingInvitationsDuringCall;
-(BOOL)blockIncomingInvitationsDuringCall;
-(void)requestPendingACInvitations;
-(void)setHasRunningConference:(BOOL)arg1 ;
-(void)updateActiveConference;
-(id)vcResponseInfoWithSessionID:(unsigned)arg1 ;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 conferenceID:(id)arg4 ;
-(void)set_delegates:(NSMutableArray *)arg1 ;
-(BOOL)_shouldRunACConferences;
-(void)setDelegate:(id<IMAVControllerDelegate>)arg1 ;
-(void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 reason:(id)arg5 ;
-(BOOL)blockMultipleIncomingInvitations;
-(void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1 ;
-(BOOL)microphoneCapable;
-(void)_dumpCaps;
-(BOOL)microphoneConnected;
-(void)requestPendingVCInvitations;
-(NSMutableArray *)_delegates;
-(void)pushCachedVCCapsToDaemon;
-(unsigned)overallChatState;
-(BOOL)_shouldRunConferences;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2 ;
-(BOOL)hasRunningConference;
-(BOOL)_ready;
-(BOOL)hasActiveConference;
-(void)setBlockOutgoingInvitationsDuringCall:(BOOL)arg1 ;
-(BOOL)cameraCapable;
-(void)setBlockIncomingInvitationsDuringCall:(BOOL)arg1 ;
-(void)setHasActiveConference:(BOOL)arg1 ;
-(void)_receivedPendingACRequests;
-(void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2 ;
-(BOOL)_shouldObserveConferences;
@end

