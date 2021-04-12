/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying> {

	long long _guardianDSID;
	NSString* _guardianFirstName;
	NSString* _guardianIcloudIdentifier;
	NSString* _guardianLastName;
	NSData* _profileIdentifier;
	NSString* _requestIdentifier;
	int _setupType;
	NSString* _tinkerFirstName;
	NSString* _tinkerLastName;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                     //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianIcloudIdentifier; 
@property (nonatomic,retain) NSString * guardianIcloudIdentifier;              //@synthesize guardianIcloudIdentifier=_guardianIcloudIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSetupType; 
@property (assign,nonatomic) int setupType;                                    //@synthesize setupType=_setupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianFirstName; 
@property (nonatomic,retain) NSString * guardianFirstName;                     //@synthesize guardianFirstName=_guardianFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianLastName; 
@property (nonatomic,retain) NSString * guardianLastName;                      //@synthesize guardianLastName=_guardianLastName - In the implementation block
@property (assign,nonatomic) BOOL hasGuardianDSID; 
@property (assign,nonatomic) long long guardianDSID;                           //@synthesize guardianDSID=_guardianDSID - In the implementation block
@property (nonatomic,readonly) BOOL hasProfileIdentifier; 
@property (nonatomic,retain) NSData * profileIdentifier;                       //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTinkerFirstName; 
@property (nonatomic,retain) NSString * tinkerFirstName;                       //@synthesize tinkerFirstName=_tinkerFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasTinkerLastName; 
@property (nonatomic,retain) NSString * tinkerLastName;                        //@synthesize tinkerLastName=_tinkerLastName - In the implementation block
-(NSData *)profileIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProfileIdentifier:(NSData *)arg1 ;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(int)setupType;
-(NSString *)guardianFirstName;
-(void)setGuardianFirstName:(NSString *)arg1 ;
-(long long)guardianDSID;
-(void)setGuardianDSID:(long long)arg1 ;
-(NSString *)guardianLastName;
-(void)setGuardianLastName:(NSString *)arg1 ;
-(void)setSetupType:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(NSString *)guardianIcloudIdentifier;
-(NSString *)tinkerFirstName;
-(NSString *)tinkerLastName;
-(void)setGuardianIcloudIdentifier:(NSString *)arg1 ;
-(void)setTinkerFirstName:(NSString *)arg1 ;
-(void)setTinkerLastName:(NSString *)arg1 ;
-(BOOL)hasGuardianIcloudIdentifier;
-(void)setHasSetupType:(BOOL)arg1 ;
-(BOOL)hasSetupType;
-(id)setupTypeAsString:(int)arg1 ;
-(int)StringAsSetupType:(id)arg1 ;
-(BOOL)hasGuardianFirstName;
-(BOOL)hasGuardianLastName;
-(void)setHasGuardianDSID:(BOOL)arg1 ;
-(BOOL)hasGuardianDSID;
-(BOOL)hasProfileIdentifier;
-(BOOL)hasTinkerFirstName;
-(BOOL)hasTinkerLastName;
@end

