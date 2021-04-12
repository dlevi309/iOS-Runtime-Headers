/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ACAccount *)account;
-(NSDictionary *)serverResponse;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

