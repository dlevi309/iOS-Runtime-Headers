/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableAuthorization : PBCodable <NSCopying> {

	long long _authorizationMode;
	long long _authorizationRequest;
	long long _authorizationStatus;
	double _modificationDate;
	long long _modificationEpoch;
	long long _objectType;
	SCD_Struct_HD23 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;                        //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationRequest; 
@property (assign,nonatomic) long long authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasModificationEpoch; 
@property (assign,nonatomic) long long modificationEpoch;                 //@synthesize modificationEpoch=_modificationEpoch - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationMode; 
@property (assign,nonatomic) long long authorizationMode;                 //@synthesize authorizationMode=_authorizationMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)modificationDate;
-(id)_modificationDate;
-(void)writeTo:(id)arg1 ;
-(long long)objectType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(long long)_authorizationStatus;
-(long long)authorizationStatus;
-(void)setModificationDate:(double)arg1 ;
-(long long)_dataTypeCode;
-(void)_setModificationDate:(id)arg1 ;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(long long)authorizationRequest;
-(void)setAuthorizationRequest:(long long)arg1 ;
-(long long)_authorizationRequest;
-(BOOL)hasObjectType;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasModificationDate;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(long long)authorizationMode;
-(void)setHasAuthorizationStatus:(BOOL)arg1 ;
-(BOOL)hasAuthorizationStatus;
-(void)setHasAuthorizationRequest:(BOOL)arg1 ;
-(BOOL)hasAuthorizationRequest;
-(void)setModificationEpoch:(long long)arg1 ;
-(void)setHasModificationEpoch:(BOOL)arg1 ;
-(BOOL)hasModificationEpoch;
-(void)setAuthorizationMode:(long long)arg1 ;
-(void)setHasAuthorizationMode:(BOOL)arg1 ;
-(BOOL)hasAuthorizationMode;
-(long long)modificationEpoch;
-(long long)_authorizationMode;
-(void)_setDataTypeCodeWithObjectType:(id)arg1 ;
-(void)_setAuthorizationStatusWithNumber:(id)arg1 ;
-(void)_setAuthorizationRequestWithNumber:(id)arg1 ;
-(void)_setAuthorizationModeWithNumber:(id)arg1 ;
@end

