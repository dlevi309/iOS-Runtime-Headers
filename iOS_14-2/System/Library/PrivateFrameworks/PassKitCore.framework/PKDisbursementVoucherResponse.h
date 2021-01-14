/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)voucher;
-(NSURL *)redemptionURL;
-(id)initWithData:(id)arg1 ;
@end

