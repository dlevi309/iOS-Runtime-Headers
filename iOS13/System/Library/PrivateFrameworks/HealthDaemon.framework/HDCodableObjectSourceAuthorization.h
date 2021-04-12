/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD12 _has;

}

@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                    //@synthesize modificationDate=_modificationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)modificationDate;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)authorizationStatus;
-(void)setModificationDate:(double)arg1 ;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(NSData *)sourceUUID;
-(void)setSourceUUID:(NSData *)arg1 ;
-(BOOL)hasModificationDate;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(BOOL)hasSourceUUID;
-(void)setHasAuthorizationStatus:(BOOL)arg1 ;
-(BOOL)hasAuthorizationStatus;
@end

