/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
+(id)_messageForProtectionSpace:(id)arg1 ;
+(id)_titleForProtectionSpace:(id)arg1 ;
-(id)sender;
-(id)password;
-(void)cancelAuthentication;
-(long long)failureCount;
-(BOOL)hasPassword;
-(id)user;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 ;
@end

