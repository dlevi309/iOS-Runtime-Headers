/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationPhoneNumberValidationFinished : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _numberOfSMSSent;
	int _registrationError;
	unsigned _validationDuration;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) int registrationError;                     //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasValidationDuration; 
@property (assign,nonatomic) unsigned validationDuration;               //@synthesize validationDuration=_validationDuration - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSMSSent; 
@property (assign,nonatomic) unsigned numberOfSMSSent;                  //@synthesize numberOfSMSSent=_numberOfSMSSent - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setRegistrationError:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)registrationError;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setValidationDuration:(unsigned)arg1 ;
-(void)setNumberOfSMSSent:(unsigned)arg1 ;
-(unsigned)validationDuration;
-(unsigned)numberOfSMSSent;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(void)setHasValidationDuration:(BOOL)arg1 ;
-(BOOL)hasValidationDuration;
-(void)setHasNumberOfSMSSent:(BOOL)arg1 ;
-(BOOL)hasNumberOfSMSSent;
@end

