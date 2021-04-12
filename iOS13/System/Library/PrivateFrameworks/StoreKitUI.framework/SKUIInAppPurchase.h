/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)name;
-(NSString *)formattedPrice;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithInAppPurchaseDictionary:(id)arg1 ;
@end

