/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(MKMapItem *)mapItem;
-(id)initWithGEOMapItem:(id)arg1 ;
-(BOOL)_validHeroImageForPhoto:(id)arg1 ;
-(id)initWithMerchantLookupResult:(id)arg1 ;
-(MKWalletMerchantStylingInfo *)placeStyling;
-(NSString *)localizedPlaceName;
-(NSString *)localizedPlaceLanguage;
-(MKWalletMerchantStylingInfo *)walletCategoryStyling;
-(NSString *)localizedWalletCategoryName;
-(NSString *)localizedWalletCategoryLanguage;
-(NSString *)mapsCategoryIdentifier;
-(NSString *)walletCategoryIdentifier;
-(id)bestHeroImageForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(NSString *)heroImageProviderName;
@end

