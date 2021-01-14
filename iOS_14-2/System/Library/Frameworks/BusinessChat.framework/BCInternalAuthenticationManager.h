/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@protocol ACAccountProtocol, ACAccountStoreProtocol;
@class BCInternalAuthenticationRequest, NSString;

@interface BCInternalAuthenticationManager : NSObject {

	BCInternalAuthenticationRequest* _authenticationRequest;
	id<ACAccountProtocol> _account;
	id<ACAccountStoreProtocol> _accountStore;

}

@property (nonatomic,retain) id<ACAccountProtocol> account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<ACAccountStoreProtocol> accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
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
-(id<ACAccountProtocol>)account;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setAccount:(id<ACAccountProtocol>)arg1 ;
-(NSString *)subtitle;
-(id<ACAccountStoreProtocol>)accountStore;
-(NSString *)action;
-(NSString *)username;
-(NSString *)middleName;
-(void)setAccountStore:(id<ACAccountStoreProtocol>)arg1 ;
-(long long)state;
-(id)deviceSerialNumber;
-(id)personIdentifier;
-(NSString *)title;
-(BCInternalAuthenticationRequest *)authenticationRequest;
-(id)initWithAuthenticationRequest:(id)arg1 ;
-(id)initWithAuthenticationRequest:(id)arg1 acAccount:(id)arg2 acAccountStore:(id)arg3 ;
-(void)setAuthenticationRequest:(BCInternalAuthenticationRequest *)arg1 ;
-(id)altPersonIdentifier;
-(id)globalAuthToken;
-(id)labelCategory;
-(BOOL)isUserSignedIn;
-(void)fetchCredentials:(/*^block*/id)arg1 ;
@end

