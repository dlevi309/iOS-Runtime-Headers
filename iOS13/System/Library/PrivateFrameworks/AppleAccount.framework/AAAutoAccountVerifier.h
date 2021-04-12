/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <libobjc.A.dylib/MSSearchDelegate.h>

@class MSSearch, NSOperationQueue, ACAccount, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {

	MSSearch* _search;
	NSOperationQueue* _requesterQueue;
	ACAccount* _account;
	/*^block*/id _handler;
	int _attempts;
	BOOL _canceled;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)_resendVerificationEmailForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_verify;
-(void)_validateToken:(id)arg1 ;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(/*^block*/id)arg1 ;
@end

