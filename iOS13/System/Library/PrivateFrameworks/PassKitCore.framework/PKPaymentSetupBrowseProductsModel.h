/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSArray, NSString;

@interface PKPaymentSetupBrowseProductsModel : NSObject {

	NSArray* _products;
	NSArray* _likelyFilteredProducts;
	NSArray* _unlikelyFilteredProducts;
	NSString* _filterString;
	unsigned long long _filterType;
	NSArray* _likelyProductIdentifiers;

}

@property (nonatomic,copy) NSString * filterString;                          //@synthesize filterString=_filterString - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                  //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) NSArray * likelyProductIdentifiers;               //@synthesize likelyProductIdentifiers=_likelyProductIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * likelyProducts; 
@property (nonatomic,copy,readonly) NSArray * unlikelyProducts; 
@property (nonatomic,copy,readonly) NSArray * unifiedProducts; 
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
-(void)setFilterString:(NSString *)arg1 ;
-(NSString *)filterString;
-(void)_updatedFilteredProducts;
-(unsigned long long)numberOfLikelyProducts;
-(unsigned long long)numberOfUnlikelyProducts;
-(NSArray *)likelyProductIdentifiers;
-(id)initWithProducts:(id)arg1 ;
-(unsigned long long)unfilteredCountForType:(unsigned long long)arg1 ;
-(void)setLikelyProductIdentifiers:(NSArray *)arg1 ;
-(id)likelyProductAtIndex:(unsigned long long)arg1 ;
-(NSArray *)likelyProducts;
-(id)unlikelyProductAtIndex:(unsigned long long)arg1 ;
-(NSArray *)unlikelyProducts;
-(unsigned long long)numberOfUnifiedProducts;
-(id)unifiedProductAtIndex:(unsigned long long)arg1 ;
-(NSArray *)unifiedProducts;
@end

