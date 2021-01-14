/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableError, NSString;

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying> {

	HDCodableError* _launchError;
	NSString* _requestIdentifier;
	BOOL _success;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchError; 
@property (nonatomic,retain) HDCodableError * launchError;              //@synthesize launchError=_launchError - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(HDCodableError *)launchError;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(void)setLaunchError:(HDCodableError *)arg1 ;
-(BOOL)hasLaunchError;
@end

