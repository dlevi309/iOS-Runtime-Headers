/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKUserIdentity, NSString, CKRecordID, NSData, CKDeviceToDeviceShareInvitationToken;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCurrentUser;
	BOOL _isOrgAdminUser;
	BOOL _createdInProcess;
	BOOL _acceptedInProcess;
	BOOL _wantsNewInvitationToken;
	CKUserIdentity* _userIdentity;
	long long _role;
	long long _acceptanceStatus;
	long long _permission;
	long long _mutableInvitationTokenStatus;
	NSString* _participantID;
	CKRecordID* _shareRecordID;
	NSString* _inviterID;
	long long _originalParticipantRole;
	long long _originalAcceptanceStatus;
	long long _originalPermission;
	NSData* _protectionInfo;
	NSData* _protectionInfoPublicKey;
	NSData* _encryptedPersonalInfo;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;

}

@property (assign,nonatomic) long long mutableInvitationTokenStatus;                              //@synthesize mutableInvitationTokenStatus=_mutableInvitationTokenStatus - In the implementation block
@property (nonatomic,retain) CKUserIdentity * userIdentity;                                       //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,retain) NSString * participantID;                                            //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) CKRecordID * shareRecordID;                                          //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (assign,nonatomic) BOOL isCurrentUser;                                                  //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) BOOL isOrgAdminUser;                                                 //@synthesize isOrgAdminUser=_isOrgAdminUser - In the implementation block
@property (nonatomic,retain) NSString * inviterID;                                                //@synthesize inviterID=_inviterID - In the implementation block
@property (assign,nonatomic) long long acceptanceStatus;                                          //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalParticipantRole;                                   //@synthesize originalParticipantRole=_originalParticipantRole - In the implementation block
@property (assign,nonatomic) long long originalAcceptanceStatus;                                  //@synthesize originalAcceptanceStatus=_originalAcceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalPermission;                                        //@synthesize originalPermission=_originalPermission - In the implementation block
@property (assign,nonatomic) BOOL createdInProcess;                                               //@synthesize createdInProcess=_createdInProcess - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                                              //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * protectionInfo;                                             //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,retain) NSData * protectionInfoPublicKey;                                    //@synthesize protectionInfoPublicKey=_protectionInfoPublicKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                                      //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
@property (nonatomic,retain) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
@property (nonatomic,readonly) long long invitationTokenStatus; 
@property (assign,nonatomic) BOOL wantsNewInvitationToken;                                        //@synthesize wantsNewInvitationToken=_wantsNewInvitationToken - In the implementation block
@property (assign,nonatomic) long long role;                                                      //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long permission;                                                //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)role;
-(id)_init;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(long long)permission;
-(void)setPermission:(long long)arg1 ;
-(void)_stripPersonalInfo;
-(id)_initWithUserIdentity:(id)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(long long)acceptanceStatus;
-(BOOL)isCurrentUser;
-(CKUserIdentity *)userIdentity;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(BOOL)isOrgAdminUser;
-(void)setIsOrgAdminUser:(BOOL)arg1 ;
-(NSString *)inviterID;
-(void)setInviterID:(NSString *)arg1 ;
-(void)setRole:(long long)arg1 ;
-(long long)originalParticipantRole;
-(void)setOriginalParticipantRole:(long long)arg1 ;
-(long long)originalAcceptanceStatus;
-(void)setOriginalAcceptanceStatus:(long long)arg1 ;
-(long long)originalPermission;
-(void)setOriginalPermission:(long long)arg1 ;
-(NSData *)protectionInfo;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(NSData *)protectionInfoPublicKey;
-(void)setProtectionInfoPublicKey:(NSData *)arg1 ;
-(BOOL)wantsNewInvitationToken;
-(void)setWantsNewInvitationToken:(BOOL)arg1 ;
-(long long)mutableInvitationTokenStatus;
-(void)setMutableInvitationTokenStatus:(long long)arg1 ;
-(long long)invitationTokenStatus;
-(BOOL)createdInProcess;
-(BOOL)acceptedInProcess;
-(id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(void)setUserIdentity:(CKUserIdentity *)arg1 ;
-(void)setCreatedInProcess:(BOOL)arg1 ;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
@end

