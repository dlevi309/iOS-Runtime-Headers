/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)accountIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(void)setRefreshToken:(NSString *)arg1 ;
-(void)setIdentityType:(unsigned long long)arg1 ;
-(unsigned long long)identityType;
@end

