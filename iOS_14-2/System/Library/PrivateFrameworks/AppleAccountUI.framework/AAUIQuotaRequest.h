/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest {

	ACAccount* _account;
	BOOL _isDetailedRequest;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initDetailedRequestWithAccount:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

