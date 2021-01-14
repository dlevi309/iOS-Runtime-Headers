/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCProfile.h>

@class NSArray, MCProfileServiceProfile, NSNumber;

@interface MCConfigurationProfile : MCProfile {

	NSArray* _payloads;
	NSArray* _managedPayloads;
	BOOL _isCloudProfile;
	BOOL _isCloudLocked;
	BOOL _isMDMProfile;
	MCProfileServiceProfile* _OTAProfile;
	NSNumber* _isCloudProfileNum;
	NSNumber* _isCloudLockedNum;

}

@property (nonatomic,retain) NSNumber * isCloudProfileNum;                      //@synthesize isCloudProfileNum=_isCloudProfileNum - In the implementation block
@property (nonatomic,retain) NSNumber * isCloudLockedNum;                       //@synthesize isCloudLockedNum=_isCloudLockedNum - In the implementation block
@property (nonatomic,retain) MCProfileServiceProfile * OTAProfile;              //@synthesize OTAProfile=_OTAProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudProfile;                               //@synthesize isCloudProfile=_isCloudProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudLocked;                                //@synthesize isCloudLocked=_isCloudLocked - In the implementation block
@property (assign,nonatomic) BOOL isMDMProfile;                                 //@synthesize isMDMProfile=_isMDMProfile - In the implementation block
-(BOOL)isMDMProfile;
-(id)_sortPayloads:(id)arg1 ;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)payloadWithUUID:(id)arg1 ;
-(SecCertificateRef)copyCertificateFromPayloadWithUUID:(id)arg1 ;
-(id)_subjectSummaryFromCertificate:(SecCertificateRef)arg1 ;
-(void)_sortPayloads;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1 ;
-(NSNumber *)isCloudProfileNum;
-(NSNumber *)isCloudLockedNum;
-(MCProfileServiceProfile *)OTAProfile;
-(id)_localizedPayloadSummaryByType:(id)arg1 ;
-(id)managedPayloads;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5 ;
-(BOOL)isManagedByProfileService;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)earliestCertificateExpiryDate;
-(void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2 ;
-(void)setOTAProfile:(MCProfileServiceProfile *)arg1 ;
-(BOOL)isCloudProfile;
-(void)setIsCloudProfile:(BOOL)arg1 ;
-(BOOL)isCloudLocked;
-(void)setIsCloudLocked:(BOOL)arg1 ;
-(void)setIsMDMProfile:(BOOL)arg1 ;
-(void)setIsCloudProfileNum:(NSNumber *)arg1 ;
-(void)setIsCloudLockedNum:(NSNumber *)arg1 ;
-(BOOL)isManagedByMDM;
-(id)serializedDictionary;
-(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
-(id)verboseDescription;
-(id)description;
-(id)payloads;
-(id)stubDictionary;
@end

