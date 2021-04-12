/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CKShare, CKRecordID, CKUserIdentity, CKRecord, NSData, CKRecordZone, CKShareParticipant, NSArray, CKDeviceToDeviceShareInvitationToken;

@interface CKShareMetadata : NSObject <NSCopying, NSSecureCoding> {

	BOOL _acceptedInProcess;
	NSString* _containerIdentifier;
	CKShare* _share;
	CKRecordID* _rootRecordID;
	long long _participantRole;
	long long _participantStatus;
	long long _participantPermission;
	CKUserIdentity* _ownerIdentity;
	CKRecord* _rootRecord;
	long long _environment;
	NSData* _protectedFullToken;
	NSData* _publicToken;
	NSData* _privateToken;
	CKRecordZone* _sharedZone;
	CKShareParticipant* _callingParticipant;
	NSArray* _outOfNetworkMatches;
	NSArray* _sharedItemHierarchyIDs;
	NSString* _rootRecordType;
	NSData* _encryptedData;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;

}

@property (assign,nonatomic) long long environment;                                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSData * protectedFullToken;                                         //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,copy) NSData * publicToken;                                                //@synthesize publicToken=_publicToken - In the implementation block
@property (getter=baseToken,nonatomic,readonly) NSString * baseToken; 
@property (nonatomic,copy) NSData * privateToken;                                               //@synthesize privateToken=_privateToken - In the implementation block
@property (nonatomic,retain) CKRecordZone * sharedZone;                                         //@synthesize sharedZone=_sharedZone - In the implementation block
@property (nonatomic,copy) CKShareParticipant * callingParticipant;                             //@synthesize callingParticipant=_callingParticipant - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                                      //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) CKShare * share;                                                   //@synthesize share=_share - In the implementation block
@property (assign,nonatomic) long long participantRole;                                         //@synthesize participantRole=_participantRole - In the implementation block
@property (assign,nonatomic) long long participantStatus;                                       //@synthesize participantStatus=_participantStatus - In the implementation block
@property (assign,nonatomic) long long participantPermission;                                   //@synthesize participantPermission=_participantPermission - In the implementation block
@property (nonatomic,retain) CKUserIdentity * ownerIdentity;                                    //@synthesize ownerIdentity=_ownerIdentity - In the implementation block
@property (nonatomic,retain) NSArray * outOfNetworkMatches;                                     //@synthesize outOfNetworkMatches=_outOfNetworkMatches - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                                           //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,retain) CKRecord * rootRecord;                                             //@synthesize rootRecord=_rootRecord - In the implementation block
@property (nonatomic,copy) NSArray * sharedItemHierarchyIDs;                                    //@synthesize sharedItemHierarchyIDs=_sharedItemHierarchyIDs - In the implementation block
@property (nonatomic,retain) NSString * rootRecordType;                                         //@synthesize rootRecordType=_rootRecordType - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                                            //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                                            //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,copy) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
@property (nonatomic,readonly) long long participantType; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(NSString *)baseToken;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)encryptedData;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(CKRecord *)rootRecord;
-(void)setRootRecord:(CKRecord *)arg1 ;
-(NSData *)privateToken;
-(CKRecordID *)rootRecordID;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setEncryptedData:(NSData *)arg1 ;
-(NSData *)publicToken;
-(long long)participantRole;
-(long long)participantStatus;
-(long long)participantPermission;
-(CKUserIdentity *)ownerIdentity;
-(NSArray *)sharedItemHierarchyIDs;
-(CKShareParticipant *)callingParticipant;
-(NSString *)rootRecordType;
-(void)setRootRecordType:(NSString *)arg1 ;
-(void)setSharedItemHierarchyIDs:(NSArray *)arg1 ;
-(void)setCallingParticipant:(CKShareParticipant *)arg1 ;
-(void)setParticipantRole:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(void)setParticipantPermission:(long long)arg1 ;
-(void)setOwnerIdentity:(CKUserIdentity *)arg1 ;
-(NSData *)protectedFullToken;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(void)setPublicToken:(NSData *)arg1 ;
-(void)setPrivateToken:(NSData *)arg1 ;
-(NSArray *)outOfNetworkMatches;
-(void)setOutOfNetworkMatches:(NSArray *)arg1 ;
-(CKRecordZone *)sharedZone;
-(void)setSharedZone:(CKRecordZone *)arg1 ;
-(long long)participantType;
@end

