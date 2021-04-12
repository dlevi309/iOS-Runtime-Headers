/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)success;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasRequestIdentifier;
-(void)setLaunchError:(HDCodableError *)arg1 ;
-(BOOL)hasLaunchError;
-(HDCodableError *)launchError;
@end

