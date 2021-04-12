/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationAccountStatus : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _accountType;
	unsigned _doesExist;
	unsigned _isEnabled;
	unsigned _isUserDisabled;
	unsigned _isiCloudSignedIn;
	unsigned _isiTunesSignedIn;
	int _registrationError;
	int _registrationErrorReason;
	int _registrationStatus;
	NSString* _serviceIdentifier;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAccountType; 
@property (assign,nonatomic) int accountType;                              //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                 //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDoesExist; 
@property (assign,nonatomic) unsigned doesExist;                           //@synthesize doesExist=_doesExist - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) unsigned isEnabled;                           //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserDisabled; 
@property (assign,nonatomic) unsigned isUserDisabled;                      //@synthesize isUserDisabled=_isUserDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsiCloudSignedIn; 
@property (assign,nonatomic) unsigned isiCloudSignedIn;                    //@synthesize isiCloudSignedIn=_isiCloudSignedIn - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationStatus; 
@property (assign,nonatomic) int registrationStatus;                       //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) int registrationError;                        //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationErrorReason; 
@property (assign,nonatomic) int registrationErrorReason;                  //@synthesize registrationErrorReason=_registrationErrorReason - In the implementation block
@property (assign,nonatomic) BOOL hasIsiTunesSignedIn; 
@property (assign,nonatomic) unsigned isiTunesSignedIn;                    //@synthesize isiTunesSignedIn=_isiTunesSignedIn - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)isEnabled;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)accountType;
-(void)setAccountType:(int)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)registrationStatus;
-(unsigned)isUserDisabled;
-(int)registrationError;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(unsigned)doesExist;
-(unsigned)isiCloudSignedIn;
-(unsigned)isiTunesSignedIn;
-(int)registrationErrorReason;
-(void)setRegistrationError:(int)arg1 ;
-(void)setIsEnabled:(unsigned)arg1 ;
-(BOOL)hasIsEnabled;
-(BOOL)hasAccountType;
-(void)setHasAccountType:(BOOL)arg1 ;
-(BOOL)hasServiceIdentifier;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(void)setRegistrationStatus:(int)arg1 ;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(void)setDoesExist:(unsigned)arg1 ;
-(void)setHasDoesExist:(BOOL)arg1 ;
-(BOOL)hasDoesExist;
-(void)setIsUserDisabled:(unsigned)arg1 ;
-(void)setHasIsUserDisabled:(BOOL)arg1 ;
-(BOOL)hasIsUserDisabled;
-(void)setIsiCloudSignedIn:(unsigned)arg1 ;
-(void)setHasIsiCloudSignedIn:(BOOL)arg1 ;
-(BOOL)hasIsiCloudSignedIn;
-(void)setHasRegistrationStatus:(BOOL)arg1 ;
-(BOOL)hasRegistrationStatus;
-(void)setRegistrationErrorReason:(int)arg1 ;
-(void)setHasRegistrationErrorReason:(BOOL)arg1 ;
-(BOOL)hasRegistrationErrorReason;
-(void)setIsiTunesSignedIn:(unsigned)arg1 ;
-(void)setHasIsiTunesSignedIn:(BOOL)arg1 ;
-(BOOL)hasIsiTunesSignedIn;
@end

