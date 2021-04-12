/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableError, NSString;

@interface HDCodableCompanionUserNotificationResponse : PBCodable <NSCopying> {

	HDCodableError* _error;
	NSString* _requestIdentifier;
	BOOL _success;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) HDCodableError * error;                    //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableError *)error;
-(void)setError:(HDCodableError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)success;
-(BOOL)hasError;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasRequestIdentifier;
@end

