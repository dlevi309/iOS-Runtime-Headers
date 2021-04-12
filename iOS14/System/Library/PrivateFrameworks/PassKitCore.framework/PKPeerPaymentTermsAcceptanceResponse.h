/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentTermsAcceptanceResponse : PKPeerPaymentWebServiceResponse {

	NSString* _termsIdentifier;
	NSURL* _termsURL;

}

@property (nonatomic,copy,readonly) NSString * termsIdentifier;              //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termsURL;                        //@synthesize termsURL=_termsURL - In the implementation block
-(BOOL)hasTermsData;
-(id)initWithData:(id)arg1 ;
-(NSURL *)termsURL;
-(NSString *)termsIdentifier;
@end

