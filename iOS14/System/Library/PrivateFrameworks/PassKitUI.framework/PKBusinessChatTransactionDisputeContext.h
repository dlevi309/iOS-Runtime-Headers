/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKPaymentPass, PKPaymentTransaction, NSString;

@interface PKBusinessChatTransactionDisputeContext : NSObject <PKBusinessChatContext> {

	PKPaymentPass* _paymentPass;
	PKPaymentTransaction* _transaction;
	long long _intent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyText;
-(BOOL)requiresAuthorization;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
-(id)initWithPaymentPass:(id)arg1 transaction:(id)arg2 intent:(long long)arg3 ;
@end

