/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)initWithPaymentSummaryItem:(id)arg1 ;
@end

