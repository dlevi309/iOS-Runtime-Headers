/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)run;
-(ISAuthenticationChallenge *)challenge;
-(NSURLCredential *)credential;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(void)setChallenge:(ISAuthenticationChallenge *)arg1 ;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(id)_copyCredentialForSignInResponseDictionary:(id)arg1 ;
@end

