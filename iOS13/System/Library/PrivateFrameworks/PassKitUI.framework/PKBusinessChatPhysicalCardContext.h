/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKPaymentPass, NSString;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext> {

	PKPaymentPass* _paymentPass;
	long long _intent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyText;
-(BOOL)requiresAuthorization;
-(id)initWithPaymentPass:(id)arg1 intent:(long long)arg2 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
@end

