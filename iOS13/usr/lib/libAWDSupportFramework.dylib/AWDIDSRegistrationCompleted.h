/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationCompleted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _circleStatus;
	int _registrationError;
	int _registrationType;
	NSString* _serviceIdentifier;
	unsigned _wasSuccessful;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationType; 
@property (assign,nonatomic) int registrationType;                      //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWasSuccessful; 
@property (assign,nonatomic) unsigned wasSuccessful;                    //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) int registrationError;                     //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasCircleStatus; 
@property (assign,nonatomic) int circleStatus;                          //@synthesize circleStatus=_circleStatus - In the implementation block
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
-(NSString *)serviceIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)registrationError;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(int)registrationType;
-(unsigned)wasSuccessful;
-(int)circleStatus;
-(void)setRegistrationType:(int)arg1 ;
-(void)setWasSuccessful:(unsigned)arg1 ;
-(void)setRegistrationError:(int)arg1 ;
-(void)setCircleStatus:(int)arg1 ;
-(BOOL)hasServiceIdentifier;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(void)setHasRegistrationType:(BOOL)arg1 ;
-(BOOL)hasRegistrationType;
-(void)setHasWasSuccessful:(BOOL)arg1 ;
-(BOOL)hasWasSuccessful;
-(void)setHasCircleStatus:(BOOL)arg1 ;
-(BOOL)hasCircleStatus;
@end

