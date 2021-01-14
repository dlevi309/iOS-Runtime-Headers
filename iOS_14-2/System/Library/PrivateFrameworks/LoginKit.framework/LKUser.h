/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <LoginKit/LoginKit-Structs.h>
#import <UserManagement/UMMutableUser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDate, CNContact, NSMutableDictionary;

@interface LKUser : UMMutableUser <NSSecureCoding, NSCopying> {

	BOOL _isPhoneticInfoProvidedInConfiguration;
	BOOL _isAttemptedPhoneticTranscription;
	unsigned long long _passwordType;
	NSURL* _mediumImageURL;
	NSURL* _largeImageURL;
	NSString* _identifier;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	NSDate* _lastOnlineAuth;
	NSURL* _localMediumImageURL;
	NSURL* _localLargeImageURL;
	long long _retryCount;
	CNContact* _contact;
	NSMutableDictionary* _namingSimilarityInfoByClassID;
	NSString* _tokenizedPhoneticDisplayName;

}

@property (nonatomic,retain) NSDate * lastOnlineAuth;                                          //@synthesize lastOnlineAuth=_lastOnlineAuth - In the implementation block
@property (assign,nonatomic) unsigned long long passwordType;                                  //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,retain) NSURL * mediumImageURL;                                           //@synthesize mediumImageURL=_mediumImageURL - In the implementation block
@property (nonatomic,retain) NSURL * largeImageURL;                                            //@synthesize largeImageURL=_largeImageURL - In the implementation block
@property (nonatomic,retain) NSURL * localMediumImageURL;                                      //@synthesize localMediumImageURL=_localMediumImageURL - In the implementation block
@property (nonatomic,retain) NSURL * localLargeImageURL;                                       //@synthesize localLargeImageURL=_localLargeImageURL - In the implementation block
@property (assign,nonatomic) long long retryCount;                                             //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * namingSimilarityInfoByClassID;              //@synthesize namingSimilarityInfoByClassID=_namingSimilarityInfoByClassID - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * phoneticGivenName;                                     //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,retain) NSString * phoneticFamilyName;                                    //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (assign,nonatomic) BOOL isPhoneticInfoProvidedInConfiguration;                       //@synthesize isPhoneticInfoProvidedInConfiguration=_isPhoneticInfoProvidedInConfiguration - In the implementation block
@property (nonatomic,retain) NSString * tokenizedPhoneticDisplayName;                          //@synthesize tokenizedPhoneticDisplayName=_tokenizedPhoneticDisplayName - In the implementation block
@property (assign,nonatomic) BOOL isAttemptedPhoneticTranscription;                            //@synthesize isAttemptedPhoneticTranscription=_isAttemptedPhoneticTranscription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)userFromUMUser:(id)arg1 ;
+(unsigned long long)UMUserPasscodeTypeFromLKPasswordType:(unsigned long long)arg1 ;
+(unsigned long long)LKPasswordTypeFromUMUserPasscodeType:(unsigned long long)arg1 ;
+(id)fullNameWithFamilyName:(id)arg1 givenName:(id)arg2 ;
+(unsigned long long)passwordTypeFromPasswordTypeString:(id)arg1 ;
+(void)setAutogeneratesPhoneticNameWithLocale:(id)arg1 ;
+(id)userFromDictionary:(id)arg1 ;
-(void)setPasswordType:(unsigned long long)arg1 ;
-(unsigned long long)passwordType;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(NSDate *)lastOnlineAuth;
-(long long)retryCount;
-(BOOL)isEqualToLKUser:(id)arg1 ;
-(void)setLocalMediumImageURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMediumImageURL:(NSURL *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setIsAttemptedPhoneticTranscription:(BOOL)arg1 ;
-(void)setNamingSimilarityInfoByClassID:(NSMutableDictionary *)arg1 ;
-(void)setIsPhoneticInfoProvidedInConfiguration:(BOOL)arg1 ;
-(NSString *)tokenizedPhoneticDisplayName;
-(BOOL)isPhoneticInfoProvidedInConfiguration;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(BOOL)isAttemptedPhoneticTranscription;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setLocalLargeImageURL:(NSURL *)arg1 ;
-(NSString *)phoneticGivenName;
-(void)setTokenizedPhoneticDisplayName:(NSString *)arg1 ;
-(NSURL *)mediumImageURL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLargeImageURL:(NSURL *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)localMediumImageURL;
-(NSString *)identifier;
-(NSMutableDictionary *)namingSimilarityInfoByClassID;
-(void)setDiffUMUserPropertiesFromUMUser:(id)arg1 ;
-(NSURL *)localLargeImageURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLastOnlineAuth:(NSDate *)arg1 ;
-(NSURL *)largeImageURL;
@end

