/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableArray, CKContainerID, CKRecordID, NSData, NSString, NSArray, CKShareID, NSURL, CKShareParticipant;

@interface CKShare : CKRecord <NSSecureCoding, NSCopying> {

	BOOL _encodeAllowsReadOnlyParticipantsToSeeEachOther;
	BOOL _allowsAnonymousPublicAccess;
	BOOL _serializePersonalInfo;
	long long _publicPermission;
	NSMutableSet* _addedParticipantIDs;
	NSMutableSet* _removedParticipantIDs;
	NSMutableArray* _lastFetchedParticipants;
	NSMutableArray* _allParticipants;
	long long _participantVisibility;
	CKContainerID* _containerID;
	CKRecordID* _rootRecordID;
	NSData* _invitedProtectionData;
	NSString* _invitedProtectionEtag;
	NSString* _previousInvitedProtectionEtag;
	NSData* _publicProtectionData;
	NSString* _publicProtectionEtag;
	NSString* _previousPublicProtectionEtag;
	NSArray* _invitedKeysToRemove;
	CKShareID* _shareID;

}

@property (nonatomic,retain) NSMutableSet * addedParticipantIDs;                               //@synthesize addedParticipantIDs=_addedParticipantIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedParticipantIDs;                             //@synthesize removedParticipantIDs=_removedParticipantIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastFetchedParticipants;                         //@synthesize lastFetchedParticipants=_lastFetchedParticipants - In the implementation block
@property (assign,nonatomic) BOOL encodeAllowsReadOnlyParticipantsToSeeEachOther;              //@synthesize encodeAllowsReadOnlyParticipantsToSeeEachOther=_encodeAllowsReadOnlyParticipantsToSeeEachOther - In the implementation block
@property (nonatomic,retain) NSMutableArray * allParticipants;                                 //@synthesize allParticipants=_allParticipants - In the implementation block
@property (nonatomic,retain) NSData * publicSharingIdentity; 
@property (assign,nonatomic) long long participantVisibility;                                  //@synthesize participantVisibility=_participantVisibility - In the implementation block
@property (assign,nonatomic) BOOL allowsAnonymousPublicAccess;                                 //@synthesize allowsAnonymousPublicAccess=_allowsAnonymousPublicAccess - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                                      //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                                          //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,retain) NSData * invitedProtectionData;                                   //@synthesize invitedProtectionData=_invitedProtectionData - In the implementation block
@property (nonatomic,retain) NSString * invitedProtectionEtag;                                 //@synthesize invitedProtectionEtag=_invitedProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousInvitedProtectionEtag;                         //@synthesize previousInvitedProtectionEtag=_previousInvitedProtectionEtag - In the implementation block
@property (nonatomic,retain) NSData * publicProtectionData;                                    //@synthesize publicProtectionData=_publicProtectionData - In the implementation block
@property (nonatomic,retain) NSString * publicProtectionEtag;                                  //@synthesize publicProtectionEtag=_publicProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousPublicProtectionEtag;                          //@synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag - In the implementation block
@property (nonatomic,readonly) BOOL isZoneWideShare; 
@property (nonatomic,retain) NSArray * invitedKeysToRemove;                                    //@synthesize invitedKeysToRemove=_invitedKeysToRemove - In the implementation block
@property (assign,nonatomic) BOOL serializePersonalInfo;                                       //@synthesize serializePersonalInfo=_serializePersonalInfo - In the implementation block
@property (nonatomic,copy) CKShareID * shareID;                                                //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) long long publicPermission;                                       //@synthesize publicPermission=_publicPermission - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSArray * participants; 
@property (nonatomic,copy,readonly) CKShareParticipant * owner; 
@property (nonatomic,copy,readonly) CKShareParticipant * currentUserParticipant; 
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKContainerID *)containerID;
-(id)shareURL;
-(CKShareID *)shareID;
-(id)init;
-(void)_stripPersonalInfo;
-(void)setShareID:(CKShareID *)arg1 ;
-(CKShareParticipant *)owner;
-(CKRecordID *)rootRecordID;
-(id)initWithRootRecord:(id)arg1 shareID:(id)arg2 ;
-(void)_commonCKShareInit;
-(void)_addOwnerParticipant;
-(void)_addParticipantBypassingChecks:(id)arg1 ;
-(NSMutableSet *)removedParticipantIDs;
-(CKShareParticipant *)currentUserParticipant;
-(void)_removePendingPrivateAndAdminParticipants;
-(void)_removeAllParticipants;
-(void)_setPublicPermissionNoSideEffects:(long long)arg1 ;
-(void)setParticipantVisibility:(long long)arg1 ;
-(long long)participantVisibility;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(BOOL)allowsAnonymousPublicAccess;
-(long long)publicPermission;
-(void)setAllowsAnonymousPublicAccess:(BOOL)arg1 ;
-(void)setAllParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)allParticipants;
-(NSMutableArray *)lastFetchedParticipants;
-(void)setLastFetchedParticipants:(NSMutableArray *)arg1 ;
-(NSMutableSet *)addedParticipantIDs;
-(void)setAddedParticipantIDs:(NSMutableSet *)arg1 ;
-(NSArray *)invitedKeysToRemove;
-(void)setRemovedParticipantIDs:(NSMutableSet *)arg1 ;
-(void)setInvitedKeysToRemove:(NSArray *)arg1 ;
-(NSData *)invitedProtectionData;
-(NSString *)invitedProtectionEtag;
-(void)setInvitedProtectionData:(NSData *)arg1 ;
-(void)setInvitedProtectionEtag:(NSString *)arg1 ;
-(NSString *)previousInvitedProtectionEtag;
-(void)setPreviousInvitedProtectionEtag:(NSString *)arg1 ;
-(NSData *)publicProtectionData;
-(void)setPublicProtectionData:(NSData *)arg1 ;
-(NSString *)publicProtectionEtag;
-(void)setPublicProtectionEtag:(NSString *)arg1 ;
-(NSString *)previousPublicProtectionEtag;
-(BOOL)isZoneWideShare;
-(void)setPreviousPublicProtectionEtag:(NSString *)arg1 ;
-(BOOL)serializePersonalInfo;
-(void)setSerializePersonalInfo:(BOOL)arg1 ;
-(id)_knownParticipantEqualToParticipant:(id)arg1 ;
-(void)_removeParticipantBypassingChecks:(id)arg1 ;
-(BOOL)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2 ;
-(id)addedParticipants;
-(BOOL)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2 ;
-(id)removedParticipants;
-(void)resetFetchedParticipants;
-(void)registerFetchedParticipant:(id)arg1 ;
-(void)clearModifiedParticipants;
-(id)initWithRootRecord:(id)arg1 ;
-(void)setPublicPermission:(long long)arg1 ;
-(BOOL)encodeAllowsReadOnlyParticipantsToSeeEachOther;
-(id)initWithRecordZoneID:(id)arg1 ;
-(id)_initWithShareRecordID:(id)arg1 ;
-(void)setAllowsReadOnlyParticipantsToSeeEachOther:(BOOL)arg1 ;
-(BOOL)allowsReadOnlyParticipantsToSeeEachOther;
-(id)updateFromServerShare:(id)arg1 ;
-(id)_copyWithoutPersonalInfo;
-(void)setPublicSharingIdentity:(NSData *)arg1 ;
-(void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(BOOL)arg3 inContainer:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)publicSharingIdentity;
-(void)setEncodeAllowsReadOnlyParticipantsToSeeEachOther:(BOOL)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSArray *)participants;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeSystemFieldsWithCoder:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 zoneID:(id)arg2 ;
-(id)copyWithOriginalValues;
-(id)initWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(id)encryptedPublicSharingKey;
-(BOOL)canHostServerURLInfo;
-(BOOL)hasEncryptedData;
-(void)addParticipant:(id)arg1 ;
-(void)setWantsPublicSharingKey:(BOOL)arg1 ;
@end

