/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSArray;

@interface SKProductsResponse : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
-(id)init;
-(NSArray *)invalidProductIdentifiers;
-(NSArray *)products;
-(void)_setInvalidIdentifiers:(id)arg1 ;
-(void)_setProducts:(id)arg1 ;
@end

