/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/SKProductsRequestDelegate.h>

@protocol OS_dispatch_group;
@class NSString, NSNumber, NSObject, SKProductsRequest, SKProduct, NSError;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate> {

	NSString* _offerName;
	NSNumber* _appAdamID;
	NSNumber* _storeExternalVersionID;
	NSObject*<OS_dispatch_group> _productRequestGroup;
	SKProductsRequest* _request;
	SKProduct* _product;
	NSError* _productLookupError;

}

@property (nonatomic,readonly) NSString * offerName;                                          //@synthesize offerName=_offerName - In the implementation block
@property (nonatomic,readonly) NSNumber * appAdamID;                                          //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,readonly) NSNumber * storeExternalVersionID;                             //@synthesize storeExternalVersionID=_storeExternalVersionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> productRequestGroup;              //@synthesize productRequestGroup=_productRequestGroup - In the implementation block
@property (nonatomic,readonly) SKProductsRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SKProduct * product;                                             //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSError * productLookupError;                                    //@synthesize productLookupError=_productLookupError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)lookup;
-(NSNumber *)storeExternalVersionID;
-(NSError *)productLookupError;
-(NSObject*<OS_dispatch_group>)productRequestGroup;
-(SKProductsRequest *)request;
-(id)initWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3 ;
-(void)setProduct:(SKProduct *)arg1 ;
-(SKProduct *)product;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(NSNumber *)appAdamID;
-(NSString *)offerName;
-(void)setProductLookupError:(NSError *)arg1 ;
@end

