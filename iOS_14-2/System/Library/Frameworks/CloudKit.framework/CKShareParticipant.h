/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKUserIdentity, CKRecordID, NSString, NSData, CKDeviceToDeviceShareInvitationToken;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _wantsNewInvitationToken;
	BOOL _isCurrentUser;
	BOOL _isOrgAdminUser;
	BOOL _createdInProcess;
	BOOL _acceptedInProcess;
	CKUserIdentity* _userIdentity;
	long long _role;
	long long _acceptanceStatus;
	long long _permission;
	long long _mutableInvitationTokenStatus;
	CKRecordID* _shareRecordID;
	NSString* _inviterID;
	long long _originalParticipantRole;
	long long _originalAcceptanceStatus;
	long long _originalPermission;
	NSData* _protectionInfo;
	NSData* _protectionInfoPublicKey;
	NSData* _encryptedPersonalInfo;
	NSString* _participantID;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;

}

@property (assign,nonatomic) BOOL wantsNewInvitationToken;                                      //@synthesize wantsNewInvitationToken=_wantsNewInvitationToken - In the implementation block
@property (assign,nonatomic) BOOL isCurrentUser;                                                //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) BOOL isOrgAdminUser;                                               //@synthesize isOrgAdminUser=_isOrgAdminUser - In the implementation block
@property (assign,nonatomic) long long mutableInvitationTokenStatus;                            //@synthesize mutableInvitationTokenStatus=_mutableInvitationTokenStatus - In the implementation block
@property (nonatomic,retain) CKRecordID * shareRecordID;                                        //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,retain) NSString * inviterID;                                              //@synthesize inviterID=_inviterID - In the implementation block
@property (assign,nonatomic) long long originalParticipantRole;                                 //@synthesize originalParticipantRole=_originalParticipantRole - In the implementation block
@property (assign,nonatomic) long long originalAcceptanceStatus;                                //@synthesize originalAcceptanceStatus=_originalAcceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalPermission;                                      //@synthesize originalPermission=_originalPermission - In the implementation block
@property (assign,nonatomic) BOOL createdInProcess;                                             //@synthesize createdInProcess=_createdInProcess - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                                            //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * protectionInfo;                                           //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,retain) NSData * protectionInfoPublicKey;                                  //@synthesize protectionInfoPublicKey=_protectionInfoPublicKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                                    //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                            //@synthesize participantID=_participantID - In the implementation block
@property (assign,nonatomic) long long acceptanceStatus;                                        //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (nonatomic,copy) CKUserIdentity * userIdentity;                                       //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,copy) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
@property (assign,nonatomic) long long role;                                                    //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long permission;                                              //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKUserIdentity *)userIdentity;
-(BOOL)isCurrentUser;
-(void)_stripPersonalInfo;
-(NSString *)inviterID;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(long long)acceptanceStatus;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(long long)arg1 ;
-(void)setInviterID:(NSString *)arg1 ;
-(id)debugDescription;
-(BOOL)isOrgAdminUser;
-(void)setIsOrgAdminUser:(BOOL)arg1 ;
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
-(long long)invitationTokenStatus;
-(BOOL)wantsNewInvitationToken;
-(void)setWantsNewInvitationToken:(BOOL)arg1 ;
-(long long)mutableInvitationTokenStatus;
-(void)setMutableInvitationTokenStatus:(long long)arg1 ;
-(BOOL)createdInProcess;
-(BOOL)acceptedInProcess;
-(void)setCreatedInProcess:(BOOL)arg1 ;
-(id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithUserIdentity:(id)arg1 ;
-(id)_init;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(long long)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)permission;
-(void)setUserIdentity:(CKUserIdentity *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPermission:(long long)arg1 ;
@end

