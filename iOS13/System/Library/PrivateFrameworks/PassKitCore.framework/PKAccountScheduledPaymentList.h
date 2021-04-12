/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(void)addScheduledPayment:(id)arg1 ;
-(id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)scheduledPaymentOfFundingSourceType:(long long)arg1 ;
-(NSArray *)scheduledPayments;
-(id)initWithScheduledPayment:(id)arg1 ;
@end

