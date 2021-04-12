/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(id)eventType;
-(PKPaymentTransaction *)transaction;
-(unsigned long long)hash;
-(id)initWithTransaction:(id)arg1 unread:(BOOL)arg2 ;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
@end

