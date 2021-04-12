/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
+(id)_messageForProtectionSpace:(id)arg1 ;
+(id)_titleForProtectionSpace:(id)arg1 ;
-(id)user;
-(id)password;
-(id)sender;
-(BOOL)hasPassword;
-(long long)failureCount;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthentication;
-(void)useCredential:(id)arg1 ;
@end

