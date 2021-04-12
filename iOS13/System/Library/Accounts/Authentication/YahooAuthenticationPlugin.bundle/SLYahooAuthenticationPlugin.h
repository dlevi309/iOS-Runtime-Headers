/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/YahooAuthenticationPlugin.bundle/YahooAuthenticationPlugin
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface SLYahooAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountType:(id)arg1 ;
+(id)webClientForAccount:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)renewalIDsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(void)_refreshTokenForAccount:(id)arg1 store:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(id)_getLegacyTokenForAccount:(id)arg1 password:(id)arg2 username:(id)arg3 ;
-(void)_migrateLegacyToken:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

