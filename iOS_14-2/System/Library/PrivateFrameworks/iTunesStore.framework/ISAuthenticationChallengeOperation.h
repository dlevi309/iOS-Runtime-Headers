/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {

	ISAuthenticationChallenge* _challenge;
	NSURLCredential* _credential;

}

@property (retain) NSURLCredential * credential;                       //@synthesize credential=_credential - In the implementation block
@property (retain) ISAuthenticationChallenge * challenge;              //@synthesize challenge=_challenge - In the implementation block
+(id)operationWithChallenge:(id)arg1 ;
-(NSURLCredential *)credential;
-(void)run;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(void)setChallenge:(ISAuthenticationChallenge *)arg1 ;
-(ISAuthenticationChallenge *)challenge;
-(void)dealloc;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(id)_copyCredentialForSignInResponseDictionary:(id)arg1 ;
@end

