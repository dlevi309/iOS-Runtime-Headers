/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class CRKEDUPayload, NSDictionary, NSString, NSData, NSArray;

@interface MCEDUClassroomPayload : MCPayload {

	CRKEDUPayload* _crk_payload;

}

@property (nonatomic,retain) CRKEDUPayload * crk_payload;                                       //@synthesize crk_payload=_crk_payload - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration; 
@property (nonatomic,copy) NSString * payloadCertificateUUID; 
@property (nonatomic,retain) NSData * payloadCertificatePersistentID; 
@property (nonatomic,retain) NSArray * leaderPayloadCertificateAnchorUUID; 
@property (nonatomic,retain) NSArray * leaderPayloadCertificateAnchorPersistentID; 
@property (nonatomic,retain) NSArray * memberPayloadCertificateAnchorUUID; 
@property (nonatomic,retain) NSArray * memberPayloadCertificateAnchorPersistentID; 
@property (nonatomic,copy) NSString * resourcePayloadCertificateUUID; 
@property (nonatomic,retain) NSData * resourcePayloadCertificatePersistentID; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(NSDictionary *)configuration;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)translatedCRKError:(id)arg1 ;
-(CRKEDUPayload *)crk_payload;
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
-(void)setCrk_payload:(CRKEDUPayload *)arg1 ;
@end

