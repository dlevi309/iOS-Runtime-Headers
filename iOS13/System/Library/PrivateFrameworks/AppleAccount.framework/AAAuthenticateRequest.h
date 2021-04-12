/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
@end

