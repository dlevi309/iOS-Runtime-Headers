/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSMutableSet, ACAccount, NSSet, NSDate;

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _credentialItems;
	NSString* _credentialType;
	NSMutableSet* _dirtyProperties;
	ACAccount* _owningAccount;
	BOOL _requiresTouchID;
	BOOL _dirty;
	BOOL _empty;

}

@property (assign,nonatomic) BOOL requiresTouchID;                    //@synthesize requiresTouchID=_requiresTouchID - In the implementation block
@property (nonatomic,copy) NSString * token; 
@property (nonatomic,copy) NSString * oauthTokenSecret; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * credentialType; 
@property (nonatomic,readonly) NSSet * dirtyProperties; 
@property (assign,getter=isDirty,nonatomic) BOOL dirty;               //@synthesize dirty=_dirty - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;               //@synthesize empty=_empty - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenNoSync; 
@property (nonatomic,copy) NSString * oauthRefreshToken; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,copy) NSString * findMyiPhoneToken; 
@property (nonatomic,copy) NSString * mapsToken; 
@property (nonatomic,copy) NSString * mdmServerToken; 
@property (nonatomic,copy) NSString * hsaToken; 
@property (nonatomic,copy) NSDate * tokenExpiryDate; 
@property (nonatomic,copy) NSString * oauthToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1 ;
+(id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)allSupportedKeys;
+(id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3 ;
+(id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
+(id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)credentialWithPassword:(id)arg1 ;
-(void)setOauthRefreshToken:(NSString *)arg1 ;
-(id)_encodeProtobuf;
-(void)setDirty:(BOOL)arg1 ;
-(NSString *)oauthTokenNoSync;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)keysForCredentialItems;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(id)credentialItemForKey:(id)arg1 ;
-(NSDate *)tokenExpiryDate;
-(BOOL)isDirty;
-(id)init;
-(id)_initWithProtobuf:(id)arg1 ;
-(BOOL)requiresTouchID;
-(NSString *)oauthRefreshToken;
-(void)_clearDirtyProperties;
-(void)setTokenExpiryDate:(NSDate *)arg1 ;
-(NSSet *)dirtyProperties;
-(id)initWithPassword:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMapsToken:(NSString *)arg1 ;
-(id)_encodeProtobufData;
-(NSString *)hsaToken;
-(void)setCredentialType:(NSString *)arg1 ;
-(id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3 ;
-(void)setMdmServerToken:(NSString *)arg1 ;
-(NSString *)password;
-(id)credentialItems;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(NSString *)findMyiPhoneToken;
-(id)_initWithProtobufData:(id)arg1 ;
-(NSString *)description;
-(NSString *)oauthTokenSecret;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)mapsToken;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)mdmServerToken;
-(void)setOauthToken:(NSString *)arg1 ;
-(void)setOauthTokenNoSync:(NSString *)arg1 ;
-(void)setHsaToken:(NSString *)arg1 ;
-(NSDate *)expiryDate;
-(unsigned long long)hash;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)oauthToken;
-(id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
-(NSString *)credentialType;
-(BOOL)isEmpty;
-(NSString *)token;
-(void)setRequiresTouchID:(BOOL)arg1 ;
-(void)_setOwningAccount:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFindMyiPhoneToken:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
@end

