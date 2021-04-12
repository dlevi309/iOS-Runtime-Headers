/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol GEOMapItem;
#import <MapKit/MapKit-Structs.h>
@class GEOPDMerchantLookupResult, MKWalletMerchantStylingInfo, NSString, MKMapItem;

@interface MKWalletMerchantResponse : NSObject {

	id<GEOMapItem> _mapItem;
	GEOPDMerchantLookupResult* _merchantLookupResult;

}

@property (nonatomic,readonly) MKWalletMerchantStylingInfo * placeStyling; 
@property (nonatomic,readonly) NSString * localizedPlaceName; 
@property (nonatomic,readonly) NSString * localizedPlaceLanguage; 
@property (nonatomic,readonly) MKWalletMerchantStylingInfo * walletCategoryStyling; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryName; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryLanguage; 
@property (nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (nonatomic,readonly) NSString * mapsCategoryIdentifier; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) NSString * heroImageProviderName; 
-(NSString *)mapsCategoryIdentifier;
-(NSString *)walletCategoryIdentifier;
-(id)bestHeroImageForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(NSString *)heroImageProviderName;
-(MKWalletMerchantStylingInfo *)placeStyling;
-(MKMapItem *)mapItem;
-(BOOL)_validHeroImageForPhoto:(id)arg1 ;
-(id)initWithGEOMapItem:(id)arg1 ;
-(id)initWithMerchantLookupResult:(id)arg1 ;
-(NSString *)localizedPlaceName;
-(NSString *)localizedPlaceLanguage;
-(MKWalletMerchantStylingInfo *)walletCategoryStyling;
-(NSString *)localizedWalletCategoryName;
-(NSString *)localizedWalletCategoryLanguage;
@end

