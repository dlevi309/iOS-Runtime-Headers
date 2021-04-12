/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldShowDisclosure;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

