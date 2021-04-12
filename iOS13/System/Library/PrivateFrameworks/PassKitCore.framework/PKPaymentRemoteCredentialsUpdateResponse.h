/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentRemoteCredentialsUpdateResponse : PKPaymentWebServiceResponse {

	NSArray* _credentials;

}

@property (nonatomic,copy,readonly) NSArray * credentials;              //@synthesize credentials=_credentials - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)credentials;
@end

