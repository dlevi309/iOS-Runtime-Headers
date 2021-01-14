/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceInstallmentAuthorizationResponse : PKAccountWebServiceResponse {

	NSString* _authorizationToken;

}

@property (nonatomic,copy,readonly) NSString * authorizationToken;              //@synthesize authorizationToken=_authorizationToken - In the implementation block
-(NSString *)authorizationToken;
-(id)initWithData:(id)arg1 ;
@end

