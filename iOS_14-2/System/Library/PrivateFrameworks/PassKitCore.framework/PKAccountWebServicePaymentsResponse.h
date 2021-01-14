/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse {

	NSArray* _payments;

}

@property (nonatomic,copy,readonly) NSArray * payments;              //@synthesize payments=_payments - In the implementation block
-(NSArray *)payments;
-(id)initWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 account:(id)arg2 ;
@end

