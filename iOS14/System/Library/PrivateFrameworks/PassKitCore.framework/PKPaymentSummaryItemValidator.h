/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentSummaryItem, NSString;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating> {

	PKPaymentSummaryItem* _item;

}

@property (nonatomic,readonly) PKPaymentSummaryItem * item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(PKPaymentSummaryItem *)item;
-(id)initWithPaymentSummaryItem:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id*)arg2 ;
@end

