/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDModifyRecordHandler.h>

@class CKShare, CKRecordID;

@interface CKDModifyShareHandler : CKDModifyRecordHandler {

	BOOL _haveAddedOwnerToShare;
	BOOL _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;

}

@property (assign,nonatomic) BOOL haveAddedOwnerToShare;                                       //@synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare - In the implementation block
@property (assign,nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;              //@synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade - In the implementation block
@property (nonatomic,readonly) CKShare * share; 
@property (nonatomic,readonly) CKRecordID * shareID; 
+(id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2 ;
+(id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2 ;
-(unsigned long long)serviceType;
-(CKShare *)share;
-(CKRecordID *)shareID;
-(void)_fetchSharePCSData;
-(void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2 ;
-(id)_createNewSharePCSDataWithError:(id*)arg1 ;
-(void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2 ;
-(id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2 ;
-(void)_addPublicKeyToSelfParticipant;
-(void)_setupParticipantsProtectionInfos;
-(BOOL)_updateSharePublicPCSWithError:(id*)arg1 ;
-(BOOL)_serializePCSDataForShareWithError:(id*)arg1 ;
-(void)_alignParticipantPermissions;
-(void)prepareForSave;
-(BOOL)_cleanPublicPCSforShareWithError:(id*)arg1 ;
-(BOOL)haveAddedOwnerToShare;
-(BOOL)isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
-(id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(void)setHaveAddedOwnerToShare:(BOOL)arg1 ;
-(BOOL)isCloudDocsContainer;
-(void)setIsALegacyPublicShareThatNeedsOwnerPPPCSUpgrade:(BOOL)arg1 ;
-(BOOL)_removePrivateParticipantsFromInvitedPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)_removePublicKey:(id)arg1 fromInvitedPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_publicKeyForParticipant:(id)arg1 error:(id*)arg2 ;
-(PCSPublicIdentityDataRef)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1 ;
-(void)clearProtectionDataForRecord;
-(void)setServerRecord:(id)arg1 ;
-(void)savePCSDataToCache;
-(BOOL)isShare;
-(id)sideEffectRecordIDs;
-(void)noteSideEffectRecordPendingModify:(id)arg1 ;
-(void)noteSideEffectRecordAbsent:(id)arg1 ;
-(void)noteSideEffectRecordPendingDelete:(id)arg1 ;
-(void)fetchSharePCSData;
-(void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2 ;
@end

