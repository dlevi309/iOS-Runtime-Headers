/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccount;

@interface PKAccountWebServiceAccountResponse : PKAccountWebServiceResponse {

	PKAccount* _account;

}

@property (nonatomic,copy,readonly) PKAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKAccount *)account;
@end

