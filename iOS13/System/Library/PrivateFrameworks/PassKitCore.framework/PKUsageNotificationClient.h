/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKUsageNotificationClientExportedInterface.h>

@class PKXPCService;

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface> {

	PKXPCService* _connection;
	/*^block*/id _handler;
	/*^block*/id _paymentHandler;

}
-(id)init;
-(void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3 ;
-(void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(void)setPassUsageHandler:(/*^block*/id)arg1 ;
-(void)setPaymentUsageHandler:(/*^block*/id)arg1 ;
@end

