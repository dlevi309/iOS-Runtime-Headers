/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKAccount, PKPaymentPass, NSString;

@interface PKBusinessChatInstallmentPaymentContext : NSObject <PKBusinessChatContext> {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyText;
-(BOOL)requiresAuthorization;
-(id)initWithAccount:(id)arg1 paymentPass:(id)arg2 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
@end

