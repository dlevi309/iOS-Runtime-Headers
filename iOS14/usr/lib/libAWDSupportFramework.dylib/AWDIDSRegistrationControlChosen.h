/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSRegistrationControlChosen : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _registrationControlStatus;
	int _registrationType;
	BOOL _isInterestingRegion;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationType; 
@property (assign,nonatomic) int registrationType;                           //@synthesize registrationType=_registrationType - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationControlStatus; 
@property (assign,nonatomic) int registrationControlStatus;                  //@synthesize registrationControlStatus=_registrationControlStatus - In the implementation block
@property (assign,nonatomic) BOOL hasIsInterestingRegion; 
@property (assign,nonatomic) BOOL isInterestingRegion;                       //@synthesize isInterestingRegion=_isInterestingRegion - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(int)registrationType;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setRegistrationType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)registrationControlStatus;
-(void)setRegistrationControlStatus:(int)arg1 ;
-(BOOL)isInterestingRegion;
-(void)setIsInterestingRegion:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRegistrationType:(BOOL)arg1 ;
-(BOOL)hasRegistrationType;
-(void)setHasRegistrationControlStatus:(BOOL)arg1 ;
-(BOOL)hasRegistrationControlStatus;
-(void)setHasIsInterestingRegion:(BOOL)arg1 ;
-(BOOL)hasIsInterestingRegion;
@end

