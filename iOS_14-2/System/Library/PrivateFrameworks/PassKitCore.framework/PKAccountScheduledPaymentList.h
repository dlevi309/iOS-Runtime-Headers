/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding> {

	NSMutableArray* _scheduledPayments;

}

@property (nonatomic,readonly) NSArray * scheduledPayments; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addScheduledPayment:(id)arg1 ;
-(id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)scheduledPaymentOfFundingSourceType:(long long)arg1 ;
-(NSArray *)scheduledPayments;
-(id)initWithScheduledPayment:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

