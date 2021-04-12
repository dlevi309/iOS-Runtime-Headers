/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/SKProductsRequestDelegate.h>
#import <libobjc.A.dylib/FCProductLookup.h>

@protocol FCProductLookup
@required
-(id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3;

@end


@protocol OS_dispatch_group;
@class NSObject, SKProduct, SKProductsRequest, NSString;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate, FCProductLookup> {

	NSObject*<OS_dispatch_group> _productRequestGroup;
	SKProduct* _product;
	SKProductsRequest* _request;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> productRequestGroup;              //@synthesize productRequestGroup=_productRequestGroup - In the implementation block
@property (nonatomic,retain) SKProduct * product;                                           //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) SKProductsRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(SKProductsRequest *)arg1 ;
-(SKProductsRequest *)request;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setProduct:(SKProduct *)arg1 ;
-(SKProduct *)product;
-(id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3 ;
-(void)setProductRequestGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)productRequestGroup;
@end

