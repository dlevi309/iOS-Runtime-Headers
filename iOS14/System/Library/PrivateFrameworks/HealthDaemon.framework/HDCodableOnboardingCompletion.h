/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableOnboardingCompletion : PBCodable <NSCopying> {

	double _completionDate;
	double _modificationDate;
	long long _version;
	NSString* _countryCode;
	NSString* _featureIdentifier;
	NSData* _uuid;
	BOOL _deleted;
	SCD_Struct_HD10 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureIdentifier; 
@property (nonatomic,retain) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionDate; 
@property (assign,nonatomic) double completionDate;                     //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                              //@synthesize deleted=_deleted - In the implementation block
-(double)modificationDate;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(NSData *)uuid;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(BOOL)hasUuid;
-(BOOL)deleted;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCompletionDate:(double)arg1 ;
-(NSString *)featureIdentifier;
-(void)setFeatureIdentifier:(NSString *)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)hasModificationDate;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDeleted;
-(BOOL)isEqual:(id)arg1 ;
-(double)completionDate;
-(id)decodedUUID;
-(id)decodedModificationDate;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(id)decodedCompletionDate;
-(BOOL)hasCompletionDate;
-(BOOL)hasFeatureIdentifier;
-(void)setHasCompletionDate:(BOOL)arg1 ;
@end

