/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSData, NSArray, NSDictionary;

@interface CRKEDUPayload : NSObject {

	BOOL _screenObservationPermissionModificationAllowed;
	BOOL _isEphemeralMultiUserDevice;
	NSString* _payloadDisplayName;
	NSString* _payloadDescriptionName;
	NSString* _organizationUUID;
	NSString* _organizationName;
	NSString* _payloadCertificateUUID;
	NSData* _payloadCertificatePersistentID;
	NSArray* _leaderPayloadCertificateAnchorUUID;
	NSArray* _leaderPayloadCertificateAnchorPersistentID;
	NSArray* _memberPayloadCertificateAnchorUUID;
	NSArray* _memberPayloadCertificateAnchorPersistentID;
	NSString* _resourcePayloadCertificateUUID;
	NSData* _resourcePayloadCertificatePersistentID;
	NSString* _userIdentifier;
	NSArray* _departments;
	NSArray* _groups;
	NSArray* _users;
	NSArray* _deviceGroups;

}

@property (nonatomic,readonly) BOOL isEphemeralMultiUserDevice;                                 //@synthesize isEphemeralMultiUserDevice=_isEphemeralMultiUserDevice - In the implementation block
@property (nonatomic,retain) NSString * payloadDisplayName;                                     //@synthesize payloadDisplayName=_payloadDisplayName - In the implementation block
@property (nonatomic,retain) NSString * payloadDescriptionName;                                 //@synthesize payloadDescriptionName=_payloadDescriptionName - In the implementation block
@property (nonatomic,retain) NSString * organizationUUID;                                       //@synthesize organizationUUID=_organizationUUID - In the implementation block
@property (nonatomic,retain) NSString * organizationName;                                       //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) NSString * payloadCertificateUUID;                                 //@synthesize payloadCertificateUUID=_payloadCertificateUUID - In the implementation block
@property (nonatomic,retain) NSData * payloadCertificatePersistentID;                           //@synthesize payloadCertificatePersistentID=_payloadCertificatePersistentID - In the implementation block
@property (nonatomic,retain) NSArray * leaderPayloadCertificateAnchorUUID;                      //@synthesize leaderPayloadCertificateAnchorUUID=_leaderPayloadCertificateAnchorUUID - In the implementation block
@property (nonatomic,retain) NSArray * leaderPayloadCertificateAnchorPersistentID;              //@synthesize leaderPayloadCertificateAnchorPersistentID=_leaderPayloadCertificateAnchorPersistentID - In the implementation block
@property (nonatomic,retain) NSArray * memberPayloadCertificateAnchorUUID;                      //@synthesize memberPayloadCertificateAnchorUUID=_memberPayloadCertificateAnchorUUID - In the implementation block
@property (nonatomic,retain) NSArray * memberPayloadCertificateAnchorPersistentID;              //@synthesize memberPayloadCertificateAnchorPersistentID=_memberPayloadCertificateAnchorPersistentID - In the implementation block
@property (nonatomic,retain) NSString * resourcePayloadCertificateUUID;                         //@synthesize resourcePayloadCertificateUUID=_resourcePayloadCertificateUUID - In the implementation block
@property (nonatomic,retain) NSData * resourcePayloadCertificatePersistentID;                   //@synthesize resourcePayloadCertificatePersistentID=_resourcePayloadCertificatePersistentID - In the implementation block
@property (nonatomic,retain) NSString * userIdentifier;                                         //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (assign,nonatomic) BOOL screenObservationPermissionModificationAllowed;               //@synthesize screenObservationPermissionModificationAllowed=_screenObservationPermissionModificationAllowed - In the implementation block
@property (nonatomic,retain) NSArray * departments;                                             //@synthesize departments=_departments - In the implementation block
@property (nonatomic,retain) NSArray * groups;                                                  //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSArray * users;                                                   //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSArray * deviceGroups;                                            //@synthesize deviceGroups=_deviceGroups - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration; 
-(NSString *)userIdentifier;
-(NSString *)organizationName;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)setGroups:(NSArray *)arg1 ;
-(NSArray *)groups;
-(id)description;
-(NSDictionary *)configuration;
-(NSArray *)departments;
-(id)initWithDictionary:(id)arg1 isStub:(BOOL)arg2 error:(id*)arg3 ;
-(NSString *)organizationUUID;
-(NSArray *)deviceGroups;
-(NSString *)payloadCertificateUUID;
-(NSArray *)leaderPayloadCertificateAnchorUUID;
-(NSArray *)memberPayloadCertificateAnchorUUID;
-(NSString *)resourcePayloadCertificateUUID;
-(void)setPayloadCertificateUUID:(NSString *)arg1 ;
-(NSData *)payloadCertificatePersistentID;
-(void)setPayloadCertificatePersistentID:(NSData *)arg1 ;
-(void)setLeaderPayloadCertificateAnchorUUID:(NSArray *)arg1 ;
-(NSArray *)leaderPayloadCertificateAnchorPersistentID;
-(void)setLeaderPayloadCertificateAnchorPersistentID:(NSArray *)arg1 ;
-(void)setMemberPayloadCertificateAnchorUUID:(NSArray *)arg1 ;
-(NSArray *)memberPayloadCertificateAnchorPersistentID;
-(void)setMemberPayloadCertificateAnchorPersistentID:(NSArray *)arg1 ;
-(void)setResourcePayloadCertificateUUID:(NSString *)arg1 ;
-(NSData *)resourcePayloadCertificatePersistentID;
-(void)setResourcePayloadCertificatePersistentID:(NSData *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)setPayloadDisplayName:(NSString *)arg1 ;
-(NSString *)payloadDisplayName;
-(BOOL)isEphemeralMultiUserDevice;
-(id)initWithDictionary:(id)arg1 isStub:(BOOL)arg2 isEphemeralMultiUserDevice:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)parseDictionary:(id)arg1 isStub:(BOOL)arg2 outError:(id*)arg3 ;
-(id)parseDepartmentFromDictionary:(id)arg1 isStub:(BOOL)arg2 outError:(id*)arg3 ;
-(id)parseGroupFromDictionary:(id)arg1 isStub:(BOOL)arg2 outError:(id*)arg3 ;
-(id)parseUserFromDictionary:(id)arg1 isStub:(BOOL)arg2 outError:(id*)arg3 ;
-(id)parseDeviceGroupFromDictionary:(id)arg1 isStub:(BOOL)arg2 outError:(id*)arg3 ;
-(BOOL)areCredentialsValidForStub:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)screenObservationPermissionModificationAllowed;
-(NSString *)payloadDescriptionName;
-(void)setPayloadDescriptionName:(NSString *)arg1 ;
-(void)setOrganizationUUID:(NSString *)arg1 ;
-(void)setScreenObservationPermissionModificationAllowed:(BOOL)arg1 ;
-(void)setDepartments:(NSArray *)arg1 ;
-(void)setDeviceGroups:(NSArray *)arg1 ;
@end

