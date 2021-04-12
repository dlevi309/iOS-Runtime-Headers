/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)run;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(void)sendCompletionCallback:(id)arg1 ;
-(void)setScriptOptions:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
@end

