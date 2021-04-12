/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest {

	id _productsRequestInternal;

}

@property (assign,nonatomic,__weak) id<SKProductsRequestDelegate> delegate; 
-(id)init;
-(void)_start;
-(id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
@end

