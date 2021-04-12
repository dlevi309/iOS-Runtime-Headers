/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@interface GKReporter : NSObject {

	double _authenticateResponseTimestamp;
	double _inviteeUILaunchTimestamp;
	double _connectingDevicesTimestamp;
	double _programaticInviteTimestamp;
	double _appLaunchTimestamp;
	double _totalInviteReceivedTimestamp;
	double _messageInviteProcessingTimestamp;

}

@property (assign,nonatomic) double authenticateResponseTimestamp;                 //@synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp - In the implementation block
@property (assign,nonatomic) double inviteeUILaunchTimestamp;                      //@synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp - In the implementation block
@property (assign,nonatomic) double connectingDevicesTimestamp;                    //@synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp - In the implementation block
@property (assign,nonatomic) double programaticInviteTimestamp;                    //@synthesize programaticInviteTimestamp=_programaticInviteTimestamp - In the implementation block
@property (assign,nonatomic) double appLaunchTimestamp;                            //@synthesize appLaunchTimestamp=_appLaunchTimestamp - In the implementation block
@property (assign,nonatomic) double totalInviteReceivedTimestamp;                  //@synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp - In the implementation block
@property (assign,nonatomic) double messageInviteProcessingTimestamp;              //@synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp - In the implementation block
+(id)reporter;
-(double)programaticInviteTimestamp;
-(void)setProgramaticInviteTimestamp:(double)arg1 ;
-(void)setConnectingDevicesTimestamp:(double)arg1 ;
-(void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3 ;
-(void)reportEvent:(id)arg1 type:(id)arg2 ;
-(void)recordInviteeUILaunchTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3 ;
-(BOOL)isTimeSpanValid:(double)arg1 ;
-(void)setMessageInviteProcessingTimestamp:(double)arg1 ;
-(void)setTotalInviteReceivedTimestamp:(double)arg1 ;
-(void)recordMessageInviteProcessingTimestamp;
-(void)reportProgramaticInviteDuration;
-(double)authenticateResponseTimestamp;
-(void)reportInviteeUILaunchDuration;
-(void)reportAuthenticateResponseDuration;
-(void)recordAppLaunchAndTotalTimestamp;
-(void)recordConnectingDevicesTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3 ;
-(void)reportTotalInviteReceivedDuration;
-(void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2 ;
-(double)connectingDevicesTimestamp;
-(double)inviteeUILaunchTimestamp;
-(double)messageInviteProcessingTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 count:(id)arg3 ;
-(void)reportEvent:(id)arg1 payload:(id)arg2 ;
-(void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3 ;
-(void)reportMessageInviteProcessingDuration;
-(void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3 ;
-(void)setAppLaunchTimestamp:(double)arg1 ;
-(void)setAuthenticateResponseTimestamp:(double)arg1 ;
-(void)setInviteeUILaunchTimestamp:(double)arg1 ;
-(void)recordProgramaticInviteTimestamp;
-(double)totalInviteReceivedTimestamp;
-(void)reportTournamentAnalyticsWithDomain:(id)arg1 type:(id)arg2 tournamentType:(id)arg3 replayCount:(id)arg4 friendCount:(id)arg5 tournamentID:(id)arg6 bundleID:(id)arg7 inviteeCount:(id)arg8 ;
-(void)reportConnectingDevicesDuration;
-(double)appLaunchTimestamp;
-(void)recordAuthenticateResponseTimestamp;
-(void)reportAppLaunchDuration;
@end

