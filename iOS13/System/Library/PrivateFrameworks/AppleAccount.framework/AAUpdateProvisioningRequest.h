/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest {

	ACAccount* _account;
	NSString* _authToken;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
+(Class)responseClass;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
@end

