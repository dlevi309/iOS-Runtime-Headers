/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(int)registrationError;
-(void)setRegistrationError:(int)arg1 ;
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

