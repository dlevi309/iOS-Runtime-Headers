/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCDuplicationHandler : NSObject {

	unsigned char _duplicationState;
	unsigned char _duplicationReason;
	BOOL _moreThanOneConnectionAvailable;
	SCD_Struct_VC172 _localAlertInfo;
	SCD_Struct_VC172 _remoteAlertInfo;
	BOOL _isRemotePreAzul;
	BOOL _iRATDuplicationEnabled;

}

@property (readonly) unsigned char duplicationReason;              //@synthesize duplicationReason=_duplicationReason - In the implementation block
@property (readonly) BOOL isDuplicationEnabled; 
@property (readonly) BOOL isDuplicationPending; 
@property (assign) BOOL isRemotePreAzul;                           //@synthesize isRemotePreAzul=_isRemotePreAzul - In the implementation block
@property (assign) BOOL iRATDuplicationEnabled;                    //@synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled - In the implementation block
-(void)setIsRemotePreAzul:(BOOL)arg1 ;
-(void)setIRATDuplicationEnabled:(BOOL)arg1 ;
-(BOOL)isDuplicationEnabled;
-(unsigned char)duplicationReason;
-(SCD_Struct_VC111)handleDuplicationStateUpdateEvent:(SCD_Struct_VC112)arg1 ;
-(BOOL)isDuplicationPending;
-(BOOL)iRATDuplicationEnabled;
-(void)updateDuplicationStateForMissingPacketsUpdateEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForReceivingPacketsUpdateEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForRemoteWRMSuggestingCellularEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForAlertStateUpdatedEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)updateDuplicationStateForConnectionArrayUpdatedEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)enableDuplication;
-(void)disableDuplication;
-(void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(SCD_Struct_VC112)arg1 updateResult:(SCD_Struct_VC111*)arg2 ;
-(void)stopRemoteDuplicationAndUpdateResult:(SCD_Struct_VC111*)arg1 ;
-(BOOL)updateDuplicationStateWithAlertInfo:(BOOL)arg1 ;
-(BOOL)isDuplicationDueToWRMSuggestion;
-(BOOL)isRemotePreAzul;
@end

