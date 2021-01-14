/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableError, NSString;

@interface HDCodableTinkerOptInResponse : PBCodable <NSCopying> {

	HDCodableError* _error;
	NSString* _requestIdentifier;
	BOOL _accepted;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAccepted; 
@property (assign,nonatomic) BOOL accepted;                             //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) HDCodableError * error;                    //@synthesize error=_error - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(HDCodableError *)arg1 ;
-(HDCodableError *)error;
-(id)description;
-(void)setAccepted:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)accepted;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(void)setHasAccepted:(BOOL)arg1 ;
-(BOOL)hasAccepted;
@end

