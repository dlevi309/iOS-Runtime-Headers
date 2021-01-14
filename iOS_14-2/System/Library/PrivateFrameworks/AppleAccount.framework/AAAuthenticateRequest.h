/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class NSString, ACAccount;

@interface AAAuthenticateRequest : AARequest {

	NSString* _username;
	NSString* _password;
	NSString* _authToken;
	ACAccount* _account;

}

@property (nonatomic,copy) NSString * username;                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
+(Class)responseClass;
-(void)setAuthToken:(NSString *)arg1 ;
-(ACAccount *)account;
-(id)urlString;
-(NSString *)authToken;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)urlRequest;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
@end

