/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceSchedulePaymentResponse : PKAccountWebServiceResponse {

	NSArray* _payments;

}

@property (nonatomic,copy,readonly) NSArray * payments;              //@synthesize payments=_payments - In the implementation block
-(NSArray *)payments;
-(id)initWithData:(id)arg1 account:(id)arg2 ;
@end

