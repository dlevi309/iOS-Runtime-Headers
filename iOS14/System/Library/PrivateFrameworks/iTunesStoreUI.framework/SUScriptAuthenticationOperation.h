/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext, UIViewController;

@interface SUScriptAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;
	UIViewController* _presentingViewController;

}

@property (retain) NSNumber * authenticatedDSID;                             //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
@property (retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
-(void)run;
-(id)init;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)authenticatedAccountDSID;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)sendCompletionCallback:(id)arg1 ;
-(void)setScriptOptions:(id)arg1 ;
@end

