/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentPass, PKPeerPaymentQuote;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {

	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPeerPaymentQuote * quote; 
+(long long)dataType;
-(PKPeerPaymentQuote *)quote;
-(PKPaymentPass *)pass;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)shouldShowDisclosure;
@end

