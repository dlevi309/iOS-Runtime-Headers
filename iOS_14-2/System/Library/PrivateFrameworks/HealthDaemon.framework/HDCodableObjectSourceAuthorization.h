/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying> {

	long long _authorizationStatus;
	double _modificationDate;
	NSData* _sourceUUID;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                    //@synthesize modificationDate=_modificationDate - In the implementation block
-(double)modificationDate;
-(id)dictionaryRepresentation;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(long long)authorizationStatus;
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceUUID:(NSData *)arg1 ;
-(id)description;
-(void)setModificationDate:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)sourceUUID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasModificationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSourceUUID;
-(void)setHasAuthorizationStatus:(BOOL)arg1 ;
-(BOOL)hasAuthorizationStatus;
-(void)setHasModificationDate:(BOOL)arg1 ;
@end

