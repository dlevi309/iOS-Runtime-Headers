/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(unsigned long long)hash;
-(id)eventType;
-(PKPaymentTransaction *)transaction;
-(id)initWithTransaction:(id)arg1 unread:(BOOL)arg2 ;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
@end

