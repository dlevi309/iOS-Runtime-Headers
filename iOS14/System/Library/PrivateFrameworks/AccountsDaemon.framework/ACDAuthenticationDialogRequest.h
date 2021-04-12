/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class NSURL, ACAccount, NSString;

@interface ACDAuthenticationDialogRequest : NSObject {

	BOOL _confirmationRequired;
	NSURL* _url;
	ACAccount* _account;
	NSString* _authDelegateClassName;
	NSString* _authDelegateClassBundlePath;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL confirmationRequired;                         //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassName;                    //@synthesize authDelegateClassName=_authDelegateClassName - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassBundlePath;              //@synthesize authDelegateClassBundlePath=_authDelegateClassBundlePath - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
-(ACAccount *)account;
-(void)setCompletion:(id)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)completion;
-(NSURL *)url;
-(BOOL)confirmationRequired;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setConfirmationRequired:(BOOL)arg1 ;
-(NSString *)authDelegateClassName;
-(void)setAuthDelegateClassName:(NSString *)arg1 ;
-(NSString *)authDelegateClassBundlePath;
-(void)setAuthDelegateClassBundlePath:(NSString *)arg1 ;
@end

