/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIInAppPurchase : NSObject <SKUICacheCoding> {

	NSString* _formattedPrice;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * formattedPrice;                              //@synthesize formattedPrice=_formattedPrice - In the implementation block
@property (nonatomic,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)formattedPrice;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithInAppPurchaseDictionary:(id)arg1 ;
@end

