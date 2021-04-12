/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse {

	NSString* _voucher;
	NSURL* _redemptionURL;

}

@property (nonatomic,copy,readonly) NSString * voucher;                 //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redemptionURL;              //@synthesize redemptionURL=_redemptionURL - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)voucher;
-(NSURL *)redemptionURL;
@end

