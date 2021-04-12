/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAuthToken:(NSString *)arg1 ;
-(ACAccount *)account;
-(id)urlString;
-(NSString *)authToken;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 ;
-(id)urlCredential;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
@end

