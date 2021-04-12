/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAQuotaInfoRequest : AARequest {

	BOOL _isDetailedRequest;
	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
+(Class)responseClass;
-(ACAccount *)account;
-(id)urlString;
-(id)urlRequest;
-(id)initDetailedRequestWithAccount:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

