/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)confirmationRequired;
-(void)setConfirmationRequired:(BOOL)arg1 ;
-(NSString *)authDelegateClassName;
-(void)setAuthDelegateClassName:(NSString *)arg1 ;
-(NSString *)authDelegateClassBundlePath;
-(void)setAuthDelegateClassBundlePath:(NSString *)arg1 ;
@end

