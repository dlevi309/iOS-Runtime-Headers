/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccount;

@interface PKAccountWebServiceAccountResponse : PKAccountWebServiceResponse {

	PKAccount* _account;

}

@property (nonatomic,copy,readonly) PKAccount * account;              //@synthesize account=_account - In the implementation block
-(PKAccount *)account;
-(id)initWithData:(id)arg1 ;
@end

