/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableMessageVersion, NSData;

@interface HDCodableClinicalAccount : PBCodable <NSCopying> {

	double _creationDate;
	double _lastFetchDate;
	double _lastFullFetchDate;
	double _modificationDate;
	NSString* _accountIdentifier;
	NSString* _gatewayExternalID;
	HDCodableMessageVersion* _messageVersion;
	NSString* _patientHash;
	NSData* _syncIdentifier;
	BOOL _userEnabled;
	SCD_Struct_HD9 _has;

}

@property (nonatomic,readonly) BOOL hasGatewayExternalID; 
@property (nonatomic,retain) NSString * gatewayExternalID;                          //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
@property (assign,nonatomic) BOOL hasUserEnabled; 
@property (assign,nonatomic) BOOL userEnabled;                                      //@synthesize userEnabled=_userEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                               //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasLastFetchDate; 
@property (assign,nonatomic) double lastFetchDate;                                  //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSData * syncIdentifier;                               //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLastFullFetchDate; 
@property (assign,nonatomic) double lastFullFetchDate;                              //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountIdentifier; 
@property (nonatomic,retain) NSString * accountIdentifier;                          //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPatientHash; 
@property (nonatomic,retain) NSString * patientHash;                                //@synthesize patientHash=_patientHash - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageVersion; 
@property (nonatomic,retain) HDCodableMessageVersion * messageVersion;              //@synthesize messageVersion=_messageVersion - In the implementation block
-(double)modificationDate;
-(id)dictionaryRepresentation;
-(BOOL)userEnabled;
-(BOOL)hasCreationDate;
-(void)setCreationDate:(double)arg1 ;
-(BOOL)hasAccountIdentifier;
-(NSString *)accountIdentifier;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)lastFullFetchDate;
-(id)description;
-(double)creationDate;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(double)lastFetchDate;
-(void)setLastFetchDate:(double)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)syncIdentifier;
-(void)setUserEnabled:(BOOL)arg1 ;
-(BOOL)hasModificationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(void)setGatewayExternalID:(NSString *)arg1 ;
-(void)setMessageVersion:(HDCodableMessageVersion *)arg1 ;
-(BOOL)hasGatewayExternalID;
-(BOOL)hasMessageVersion;
-(NSString *)gatewayExternalID;
-(HDCodableMessageVersion *)messageVersion;
-(void)setSyncIdentifier:(NSData *)arg1 ;
-(BOOL)hasSyncIdentifier;
-(void)setPatientHash:(NSString *)arg1 ;
-(void)setHasUserEnabled:(BOOL)arg1 ;
-(BOOL)hasUserEnabled;
-(void)setHasLastFetchDate:(BOOL)arg1 ;
-(BOOL)hasLastFetchDate;
-(void)setLastFullFetchDate:(double)arg1 ;
-(void)setHasLastFullFetchDate:(BOOL)arg1 ;
-(BOOL)hasLastFullFetchDate;
-(BOOL)hasPatientHash;
-(NSString *)patientHash;
@end

