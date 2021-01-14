/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData, PKVirtualCardCredentials;

@interface PKVirtualCard : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsLocalStorage;
	BOOL _requiresAuthentication;
	NSString* _identifier;
	NSString* _cardholderName;
	long long _state;
	long long _type;
	NSString* _FPANSuffix;
	NSString* _expiration;
	NSDate* _lastUpdatedDate;
	NSData* _encryptedData;
	NSData* _ephemeralPublicKey;
	NSString* _displayName;
	NSDate* _lastAutoFilledBySafari;
	PKVirtualCardCredentials* _keychainCardCredentials;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                       //@synthesize cardholderName=_cardholderName - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * FPANSuffix;                                           //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                           //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdatedDate;                                        //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy) NSData * encryptedData;                                          //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                                     //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSDate * lastAutoFilledBySafari;                                 //@synthesize lastAutoFilledBySafari=_lastAutoFilledBySafari - In the implementation block
@property (assign,nonatomic) BOOL supportsLocalStorage;                                     //@synthesize supportsLocalStorage=_supportsLocalStorage - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                                   //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (nonatomic,copy) PKVirtualCardCredentials * keychainCardCredentials;              //@synthesize keychainCardCredentials=_keychainCardCredentials - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)queryKeychainForVirtualCards:(/*^block*/id)arg1 ;
+(void)deleteAllLocalKeychainVirtualCards;
-(BOOL)requiresAuthentication;
-(id)dictionaryRepresentation;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(id)initWithKeychainData:(id)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)ephemeralPublicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)expiration;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setExpiration:(NSString *)arg1 ;
-(long long)type;
-(id)generateHashWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)hasSensitiveCredentials;
-(void)writeKeychainVirtualCardToKeychain;
-(id)keychainVirtualCard;
-(void)setLastAutoFilledBySafari:(NSDate *)arg1 ;
-(BOOL)isValidFromKeychain;
-(void)setState:(long long)arg1 ;
-(void)deleteLocalKeychainVirtualCard;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(NSDate *)lastAutoFilledBySafari;
-(BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2 ;
-(void)setLastAutoFilledBySafariWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteKeychainVirtualCard;
-(BOOL)supportsLocalStorage;
-(void)setSupportsLocalStorage:(BOOL)arg1 ;
-(PKVirtualCardCredentials *)keychainCardCredentials;
-(void)setKeychainCardCredentials:(PKVirtualCardCredentials *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSString *)FPANSuffix;
-(NSData *)encryptedData;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(id)mergeVirtualCardWith:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

