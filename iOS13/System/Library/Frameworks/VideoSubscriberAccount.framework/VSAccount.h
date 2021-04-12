/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VSAccountStore, NSString, VSOptional;

@interface VSAccount : NSObject <NSSecureCoding> {

	VSAccountStore* _accountStore;
	NSString* _accountTypeDescription;
	NSString* _accountDescription;
	VSOptional* _optionalIdentityProviderDisplayName;
	VSOptional* _identityProviderID;
	NSString* _username;
	NSString* _preferredAppID;
	VSOptional* _authenticationToken;

}

@property (nonatomic,retain) VSOptional * keychainItem; 
@property (assign,nonatomic,__weak) VSAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * accountTypeDescription;                               //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,copy) NSString * accountDescription;                                   //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain) VSOptional * optionalIdentityProviderDisplayName;              //@synthesize optionalIdentityProviderDisplayName=_optionalIdentityProviderDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * identityProviderDisplayName; 
@property (nonatomic,retain) VSOptional * identityProviderID;                               //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) NSString * username;                                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * preferredAppID;                                       //@synthesize preferredAppID=_preferredAppID - In the implementation block
@property (nonatomic,retain) VSOptional * authenticationToken;                              //@synthesize authenticationToken=_authenticationToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
-(NSString *)accountDescription;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(NSString *)accountTypeDescription;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(NSString *)identityProviderDisplayName;
-(void)setAuthenticationToken:(VSOptional *)arg1 ;
-(VSOptional *)authenticationToken;
-(VSOptional *)keychainItem;
-(void)setKeychainItem:(VSOptional *)arg1 ;
-(void)setPreferredAppID:(NSString *)arg1 ;
-(void)setOptionalIdentityProviderDisplayName:(VSOptional *)arg1 ;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(NSString *)preferredAppID;
-(VSOptional *)optionalIdentityProviderDisplayName;
-(VSOptional *)identityProviderID;
@end

