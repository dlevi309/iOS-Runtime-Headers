/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKContainerAssignment.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKShare, CKRecordID, CKUserIdentity, CKRecord, CKShareParticipant, NSArray, NSString, CKDeviceToDeviceShareInvitationToken, NSData, CKRecordZone, CKContainerID;

@interface CKShareMetadata : NSObject <CKContainerAssignment, NSCopying, NSSecureCoding> {

	BOOL _acceptedInProcess;
	CKShare* _share;
	CKRecordID* _rootRecordID;
	long long _participantRole;
	long long _participantStatus;
	long long _participantPermission;
	CKUserIdentity* _ownerIdentity;
	CKRecord* _rootRecord;
	CKShareParticipant* _callingParticipant;
	NSArray* _sharedItemHierarchyIDs;
	NSString* _rootRecordType;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;
	NSData* _protectedFullToken;
	NSData* _publicToken;
	NSData* _privateToken;
	CKRecordZone* _sharedZone;
	CKContainerID* _containerID;
	NSArray* _outOfNetworkMatches;
	NSData* _encryptedData;

}

@property (nonatomic,copy) CKShareParticipant * callingParticipant;                             //@synthesize callingParticipant=_callingParticipant - In the implementation block
@property (nonatomic,copy) NSArray * sharedItemHierarchyIDs;                                    //@synthesize sharedItemHierarchyIDs=_sharedItemHierarchyIDs - In the implementation block
@property (nonatomic,retain) NSString * rootRecordType;                                         //@synthesize rootRecordType=_rootRecordType - In the implementation block
@property (nonatomic,copy) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
@property (nonatomic,copy) NSData * protectedFullToken;                                         //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,copy) NSData * publicToken;                                                //@synthesize publicToken=_publicToken - In the implementation block
@property (getter=baseToken,nonatomic,readonly) NSString * baseToken; 
@property (nonatomic,copy) NSData * privateToken;                                               //@synthesize privateToken=_privateToken - In the implementation block
@property (nonatomic,retain) CKRecordZone * sharedZone;                                         //@synthesize sharedZone=_sharedZone - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                                         //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) long long participantRole;                                         //@synthesize participantRole=_participantRole - In the implementation block
@property (assign,nonatomic) long long participantStatus;                                       //@synthesize participantStatus=_participantStatus - In the implementation block
@property (assign,nonatomic) long long participantPermission;                                   //@synthesize participantPermission=_participantPermission - In the implementation block
@property (nonatomic,retain) NSArray * outOfNetworkMatches;                                     //@synthesize outOfNetworkMatches=_outOfNetworkMatches - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                                           //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,copy) CKRecord * rootRecord;                                               //@synthesize rootRecord=_rootRecord - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                                            //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                                            //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,copy) CKUserIdentity * ownerIdentity;                                      //@synthesize ownerIdentity=_ownerIdentity - In the implementation block
@property (nonatomic,copy) CKShare * share;                                                     //@synthesize share=_share - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) long long participantType; 
+(BOOL)supportsSecureCoding;
-(CKShare *)share;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKContainerID *)containerID;
-(id)init;
-(id)ckShortDescription;
-(CKRecordID *)rootRecordID;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(long long)participantType;
-(NSString *)containerIdentifier;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)description;
-(long long)participantStatus;
-(NSString *)rootRecordType;
-(void)setParticipantStatus:(long long)arg1 ;
-(CKUserIdentity *)ownerIdentity;
-(CKRecordZone *)sharedZone;
-(void)setPublicToken:(NSData *)arg1 ;
-(long long)participantPermission;
-(void)setRootRecordType:(NSString *)arg1 ;
-(NSArray *)sharedItemHierarchyIDs;
-(void)setSharedItemHierarchyIDs:(NSArray *)arg1 ;
-(CKShareParticipant *)callingParticipant;
-(void)setCallingParticipant:(CKShareParticipant *)arg1 ;
-(void)setParticipantPermission:(long long)arg1 ;
-(void)setOwnerIdentity:(CKUserIdentity *)arg1 ;
-(NSData *)protectedFullToken;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(void)setPrivateToken:(NSData *)arg1 ;
-(void)setSharedZone:(CKRecordZone *)arg1 ;
-(NSArray *)outOfNetworkMatches;
-(void)setOutOfNetworkMatches:(NSArray *)arg1 ;
-(NSData *)publicToken;
-(long long)participantRole;
-(CKRecord *)rootRecord;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(NSData *)encryptedData;
-(void)setRootRecord:(CKRecord *)arg1 ;
-(NSString *)baseToken;
-(void)setParticipantRole:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)privateToken;
@end

