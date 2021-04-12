/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@class BCInternalAuthenticationRequest, ACAccount, ACAccountStore, NSString;

@interface BCInternalAuthenticationManager : NSObject {

	BCInternalAuthenticationRequest* _authenticationRequest;
	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccount * account;                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                        //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) BCInternalAuthenticationRequest * authenticationRequest;              //@synthesize authenticationRequest=_authenticationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * middleName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL isUserSignedIn; 
-(NSString *)middleName;
-(long long)state;
-(NSString *)title;
-(NSString *)action;
-(NSString *)subtitle;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)username;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)personIdentifier;
-(id)deviceSerialNumber;
-(BCInternalAuthenticationRequest *)authenticationRequest;
-(id)initWithAuthenticationRequest:(id)arg1 ;
-(void)setAuthenticationRequest:(BCInternalAuthenticationRequest *)arg1 ;
-(id)altPersonIdentifier;
-(id)globalAuthToken;
-(id)labelCategory;
-(BOOL)isUserSignedIn;
-(void)fetchCredentials:(/*^block*/id)arg1 ;
@end

