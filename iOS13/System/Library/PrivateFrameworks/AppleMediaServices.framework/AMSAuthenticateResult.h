/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSDictionary;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding> {

	ACAccount* _account;
	NSDictionary* _serverResponse;

}

@property (nonatomic,readonly) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(NSDictionary *)serverResponse;
@end

