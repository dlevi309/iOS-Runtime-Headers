/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoAutomaticProvisioningRequest : PBRequest <NSCopying> {

	unsigned long long _credentialType;
	int _cardType;
	NSString* _localizedName;
	NSString* _passTypeIdentifier;
	NSString* _primaryAccountNumberSuffix;
	NSString* _serialNumber;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasPassTypeIdentifier; 
@property (nonatomic,retain) NSString * passTypeIdentifier;                      //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                            //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasCredentialType; 
@property (assign,nonatomic) unsigned long long credentialType;                  //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountNumberSuffix; 
@property (nonatomic,retain) NSString * primaryAccountNumberSuffix;              //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedName; 
@property (nonatomic,retain) NSString * localizedName;                           //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) BOOL hasCardType; 
@property (assign,nonatomic) int cardType;                                       //@synthesize cardType=_cardType - In the implementation block
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedName;
-(NSString *)serialNumber;
-(void)mergeFrom:(id)arg1 ;
-(void)setCredentialType:(unsigned long long)arg1 ;
-(BOOL)hasPrimaryAccountNumberSuffix;
-(BOOL)hasCredentialType;
-(int)cardType;
-(id)description;
-(BOOL)hasSerialNumber;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)credentialType;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCardType:(int)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)primaryAccountNumberSuffix;
-(void)setHasCredentialType:(BOOL)arg1 ;
-(BOOL)hasPassTypeIdentifier;
-(BOOL)hasLocalizedName;
-(void)setHasCardType:(BOOL)arg1 ;
-(BOOL)hasCardType;
-(id)cardTypeAsString:(int)arg1 ;
-(int)StringAsCardType:(id)arg1 ;
@end

