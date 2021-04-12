/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/AMSFinancePerformable.h>

@class AMSFinanceAuthenticateResponse, NSDictionary, AMSPaymentSheetRequest, NSString;

@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable> {

	AMSFinanceAuthenticateResponse* _authenticateResponse;
	NSDictionary* _metricsDictionary;
	AMSPaymentSheetRequest* _paymentSheetRequest;

}

@property (nonatomic,readonly) AMSFinanceAuthenticateResponse * authenticateResponse;              //@synthesize authenticateResponse=_authenticateResponse - In the implementation block
@property (nonatomic,readonly) NSDictionary * metricsDictionary;                                   //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (nonatomic,readonly) AMSPaymentSheetRequest * paymentSheetRequest;                       //@synthesize paymentSheetRequest=_paymentSheetRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createMerchantSessionFromDictionary:(id)arg1 ;
+(id)_createRequestFromDictionary:(id)arg1 confirmationOnly:(BOOL)arg2 authenticateResponse:(id)arg3 taskInfo:(id)arg4 ;
+(long long)_payeeForRequestorValue:(id)arg1 ;
+(long long)_payeeInferredFromEnumeratedTitle:(id)arg1 ;
+(long long)_salableIconForString:(id)arg1 ;
+(long long)_confirmationTitleForString:(id)arg1 ;
+(id)_flexListDictionaryForValues:(id)arg1 account:(id)arg2 shouldUppercaseText:(BOOL)arg3 ;
+(id)_attributedStringForSalableInfoStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(BOOL)arg3 ;
+(id)_attributedListDictionaryForValues:(id)arg1 account:(id)arg2 ;
+(id)_attributedStringForAttributedDictionary:(id)arg1 account:(id)arg2 ;
+(id)_attributedStringForAttributedArray:(id)arg1 account:(id)arg2 ;
+(id)_attributedStringForStringArray:(id)arg1 useGrey:(BOOL)arg2 account:(id)arg3 shouldUppercase:(BOOL)arg4 ;
+(id)_greyAttributedStringForAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)performWithTaskInfo:(id)arg1 ;
-(id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg1 ;
-(AMSPaymentSheetRequest *)paymentSheetRequest;
-(AMSFinanceAuthenticateResponse *)authenticateResponse;
-(id)initWithResponseDictionary:(id)arg1 confirmationOnly:(BOOL)arg2 taskInfo:(id)arg3 ;
-(NSDictionary *)metricsDictionary;
@end

