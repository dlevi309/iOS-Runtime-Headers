/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableMessageVersion, NSData;

@interface HDCodableFHIRResource : PBCodable <NSCopying> {

	long long _extractionHints;
	long long _originVersionMajor;
	long long _originVersionMinor;
	long long _originVersionPatch;
	double _receivedDate;
	NSString* _accountIdentifier;
	NSString* _fhirVersion;
	NSString* _gatewayExternalID;
	HDCodableMessageVersion* _messageVersion;
	NSString* _originVersionBuild;
	NSData* _rawContent;
	NSString* _receivedDateTimeZoneName;
	NSString* _resourceID;
	NSString* _resourceType;
	NSString* _sourceURL;
	SCD_Struct_HD9 _has;

}

@property (nonatomic,readonly) BOOL hasGatewayExternalID; 
@property (nonatomic,retain) NSString * gatewayExternalID;                          //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceID; 
@property (nonatomic,retain) NSString * resourceID;                                 //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) BOOL hasRawContent; 
@property (nonatomic,retain) NSData * rawContent;                                   //@synthesize rawContent=_rawContent - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedDate; 
@property (assign,nonatomic) double receivedDate;                                   //@synthesize receivedDate=_receivedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;                               //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasFhirVersion; 
@property (nonatomic,retain) NSString * fhirVersion;                                //@synthesize fhirVersion=_fhirVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedDateTimeZoneName; 
@property (nonatomic,retain) NSString * receivedDateTimeZoneName;                   //@synthesize receivedDateTimeZoneName=_receivedDateTimeZoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionHints; 
@property (assign,nonatomic) long long extractionHints;                             //@synthesize extractionHints=_extractionHints - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountIdentifier; 
@property (nonatomic,retain) NSString * accountIdentifier;                          //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOriginVersionMajor; 
@property (assign,nonatomic) long long originVersionMajor;                          //@synthesize originVersionMajor=_originVersionMajor - In the implementation block
@property (assign,nonatomic) BOOL hasOriginVersionMinor; 
@property (assign,nonatomic) long long originVersionMinor;                          //@synthesize originVersionMinor=_originVersionMinor - In the implementation block
@property (assign,nonatomic) BOOL hasOriginVersionPatch; 
@property (assign,nonatomic) long long originVersionPatch;                          //@synthesize originVersionPatch=_originVersionPatch - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginVersionBuild; 
@property (nonatomic,retain) NSString * originVersionBuild;                         //@synthesize originVersionBuild=_originVersionBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageVersion; 
@property (nonatomic,retain) HDCodableMessageVersion * messageVersion;              //@synthesize messageVersion=_messageVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)resourceType;
-(void)setResourceType:(NSString *)arg1 ;
-(BOOL)hasResourceType;
-(BOOL)hasSourceURL;
-(NSString *)resourceID;
-(BOOL)hasAccountIdentifier;
-(void)setResourceID:(NSString *)arg1 ;
-(BOOL)hasResourceID;
-(void)setGatewayExternalID:(NSString *)arg1 ;
-(void)setRawContent:(NSData *)arg1 ;
-(void)setFhirVersion:(NSString *)arg1 ;
-(void)setReceivedDateTimeZoneName:(NSString *)arg1 ;
-(void)setOriginVersionBuild:(NSString *)arg1 ;
-(void)setMessageVersion:(HDCodableMessageVersion *)arg1 ;
-(BOOL)hasGatewayExternalID;
-(BOOL)hasRawContent;
-(void)setReceivedDate:(double)arg1 ;
-(void)setHasReceivedDate:(BOOL)arg1 ;
-(BOOL)hasReceivedDate;
-(BOOL)hasFhirVersion;
-(BOOL)hasReceivedDateTimeZoneName;
-(void)setExtractionHints:(long long)arg1 ;
-(void)setHasExtractionHints:(BOOL)arg1 ;
-(BOOL)hasExtractionHints;
-(void)setOriginVersionMajor:(long long)arg1 ;
-(void)setHasOriginVersionMajor:(BOOL)arg1 ;
-(BOOL)hasOriginVersionMajor;
-(void)setOriginVersionMinor:(long long)arg1 ;
-(void)setHasOriginVersionMinor:(BOOL)arg1 ;
-(BOOL)hasOriginVersionMinor;
-(void)setOriginVersionPatch:(long long)arg1 ;
-(void)setHasOriginVersionPatch:(BOOL)arg1 ;
-(BOOL)hasOriginVersionPatch;
-(BOOL)hasOriginVersionBuild;
-(BOOL)hasMessageVersion;
-(NSString *)gatewayExternalID;
-(NSData *)rawContent;
-(double)receivedDate;
-(NSString *)fhirVersion;
-(NSString *)receivedDateTimeZoneName;
-(long long)extractionHints;
-(long long)originVersionMajor;
-(long long)originVersionMinor;
-(long long)originVersionPatch;
-(NSString *)originVersionBuild;
-(HDCodableMessageVersion *)messageVersion;
@end
