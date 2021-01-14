/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest {

	id _productsRequestInternal;

}

@property (assign,nonatomic,__weak) id<SKProductsRequestDelegate> delegate; 
-(id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2 ;
-(id)init;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_start;
-(id)initWithProductIdentifiers:(id)arg1 ;
@end

