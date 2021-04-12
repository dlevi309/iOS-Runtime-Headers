/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NNMKAccountIdentity : NSObject <NSSecureCoding> {

	NSString* _accountId;
	NSString* _username;
	NSString* _displayName;
	NSString* _token;
	NSString* _refreshToken;
	unsigned long long _identityType;

}

@property (nonatomic,copy) NSString * accountId;                           //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,copy) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * token;                               //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                        //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) unsigned long long identityType;              //@synthesize identityType=_identityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)refreshToken;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)username;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(NSString *)accountId;
-(NSString *)displayName;
-(unsigned long long)identityType;
-(void)setIdentityType:(unsigned long long)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
@end

