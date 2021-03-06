/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>

@protocol GEOMapItem, GEOMapItemTransitInfo, GEOTransitAttribution, NSObject, MKTransitInfoPreload;
@class NSArray, MKMapItemIdentifier, NSDate, _MKMapItemPlaceAttribution, _MKMapItemPhotosAttribution, _MKMapItemReviewsAttribution, GEOMapItemStorageUserValues, NSString, NSNumberFormatter, NSDictionary, MKMapItemMetadata, GEOPlace, _MKPlaceReservationInfo, GEOMapItemStorage, GEOMapRegion, GEOAddress, GEOPDFlyover, GEOBusinessHours, NSData, GEOMuninViewState, NSURL, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEOMapItemDetourInfo, GEORelatedPlaceList, NSNumber, GEOModuleLayoutEntry, UIColor, MKPlacemark, NSTimeZone;

@interface MKMapItem : NSObject <NSSecureCoding, NSItemProviderReading, NSItemProviderWriting, GEOURLSerializable> {

	BOOL _isCurrentLocation;
	BOOL _isPlaceHolder;
	id<GEOMapItem> _geoMapItem;
	MKMapItemIdentifier* _identifier;
	BOOL _isTransitInfoUpdated;
	NSDate* _transitInfoUpdatedDate;
	id<GEOMapItemTransitInfo> _updatedTransitInfo;
	id<GEOMapItemTransitInfo> _defaultTransitInfo;
	id<GEOTransitAttribution> _updatedTransitAttribution;
	_MKMapItemPlaceAttribution* _attribution;
	_MKMapItemPhotosAttribution* _photosAttribution;
	_MKMapItemReviewsAttribution* _reviewsAttribution;
	GEOMapItemStorageUserValues* _userValues;
	id<NSObject> _didResolveAttributionToken;
	NSString* _shortAddress;
	NSString* _firstLocalizedCategoryName;
	NSNumberFormatter* _numberFormatterForAdamId;
	NSString* _localizedSampleSizeForUserRatingScoreString;
	NSDictionary* _cachedHoursBuilder;
	BOOL _isMapItemTypeTransit;
	MKMapItemMetadata* _metadata;
	GEOPlace* _place;
	_MKPlaceReservationInfo* _reservationInfo;
	NSString* _pointOfInterestCategory;
	id<MKTransitInfoPreload> _preloadedTransitInfo;

}

@property (nonatomic,readonly) NSString * formattedNumberOfReviews; 
@property (nonatomic,readonly) NSString * formattedNumberOfReviewsIncludingProvider; 
@property (getter=_transitInfoUpdatedDate,nonatomic,readonly) NSDate * transitInfoUpdatedDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (getter=_isEmptyContactMapItem,readonly) BOOL isEmptyContactMapItem; 
@property (assign,nonatomic) BOOL isCurrentLocation;                                                                                                    //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (nonatomic,readonly) GEOMapItemStorageUserValues * userValues; 
@property (nonatomic,readonly) MKMapItemMetadata * metadata;                                                                                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) GEOPlace * place;                                                                                                        //@synthesize place=_place - In the implementation block
@property (getter=_geoMapItem,nonatomic,readonly) id<GEOMapItemPrivate> geoMapItem; 
@property (getter=_geoMapItemStorageForPersistence,nonatomic,readonly) GEOMapItemStorage * geoMapItemStorageForPersistence; 
@property (getter=_geoMapItemStorageForDragAndDrop,nonatomic,readonly) GEOMapItemStorage * geoMapItemStorageForDragAndDrop; 
@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,readonly) BOOL isPlaceHolder;                                                                                                      //@synthesize isPlaceHolder=_isPlaceHolder - In the implementation block
@property (getter=_coordinate,nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (getter=_displayMapRegion,nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (getter=_hasDisplayMinZoom,nonatomic,readonly) BOOL hasDisplayMinZoom; 
@property (getter=_displayMinZoom,nonatomic,readonly) float displayMinZoom; 
@property (getter=_hasDisplayMaxZoom,nonatomic,readonly) BOOL hasDisplayMaxZoom; 
@property (getter=_displayMaxZoom,nonatomic,readonly) float displayMaxZoom; 
@property (getter=_geoFenceMapRegion,nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_hasTransitDisplayName,nonatomic,readonly) BOOL hasTransitDisplayName; 
@property (getter=_transitDisplayName,nonatomic,readonly) NSString * transitDisplayName; 
@property (getter=_hasTransitLabels,nonatomic,readonly) BOOL hasTransitLabels; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_preloadedTransitInfo,nonatomic,readonly) id<MKTransitInfoPreload> preloadedTransitInfo;                                              //@synthesize preloadedTransitInfo=_preloadedTransitInfo - In the implementation block
@property (getter=_geoAddress,nonatomic,readonly) GEOAddress * geoAddress; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_identifier,nonatomic,readonly) MKMapItemIdentifier * identifier; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_phoneNumberOptsOutOfAds,nonatomic,readonly) BOOL phoneNumberOptsOutOfAds; 
@property (getter=_firstLocalizedCategoryName,nonatomic,readonly) NSString * firstLocalizedCategoryName; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_localizedSampleSizeForUserRatingScoreString,nonatomic,readonly) NSString * localizedSampleSizeForUserRatingScoreString; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceDescription,nonatomic,readonly) BOOL hasPriceDescription; 
@property (getter=_priceDescription,nonatomic,readonly) NSString * priceDescription; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRangeString,nonatomic,readonly) NSString * priceRangeString; 
@property (getter=_shortAddress,nonatomic,readonly) NSString * shortAddress; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_amenities,nonatomic,readonly) NSArray * amenities; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_responseStatusIsIncomplete,nonatomic,readonly) BOOL responseStatusIncomplete; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasLocalizedOperatingHours,nonatomic,readonly) BOOL hasLocalizedOperatingHours; 
@property (getter=_parsecSectionType,nonatomic,readonly) int parsecSectionType; 
@property (getter=_isStandAloneBrand,nonatomic,readonly) BOOL isStandAloneBrand; 
@property (getter=_hasBrandMUID,nonatomic,readonly) BOOL hasBrandMUID; 
@property (getter=_brandMUID,nonatomic,readonly) unsigned long long brand; 
@property (getter=_isMapItemTypeUnknown,nonatomic,readonly) BOOL isMapItemTypeUnknown; 
@property (getter=_isMapItemTypeBusiness,nonatomic,readonly) BOOL isMapItemTypeBusiness; 
@property (getter=_isMapItemTypeSettlement,nonatomic,readonly) BOOL isMapItemTypeSettlement; 
@property (getter=_isMapItemTypeAddress,nonatomic,readonly) BOOL isMapItemTypeAddress; 
@property (assign,getter=_isMapItemTypeTransit,nonatomic) BOOL isMapItemTypeTransit;                                                                    //@synthesize isMapItemTypeTransit=_isMapItemTypeTransit - In the implementation block
@property (getter=_isMapItemTypeBrand,nonatomic,readonly) BOOL isMapItemTypeBrand; 
@property (getter=_localizedResponseTime,nonatomic,readonly) NSString * localizedResponseTime; 
@property (getter=_messageBusinessHours,nonatomic,readonly) GEOBusinessHours * messageBusinessHours; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasChargerNumberString,nonatomic,readonly) BOOL hasChargerNumberString; 
@property (getter=_chargerNumberString,nonatomic,readonly) NSString * chargerNumberString; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_hasCorrectedHomeWorkCoordinate,nonatomic,readonly) BOOL hasCorrectedHomeWorkCoordinate; 
@property (getter=_hasCorrectedHomeWorkAddress,nonatomic,readonly) BOOL hasCorrectedHomeWorkAddress; 
@property (getter=_hasVenueFeatureType,nonatomic,readonly) BOOL hasVenueFeatureType; 
@property (getter=_venueFeatureType,nonatomic,readonly) long long venueFeatureType; 
@property (getter=_venueInfo,nonatomic,readonly) id<GEOMapItemVenueInfo> venueInfo; 
@property (getter=_browseCategories,nonatomic,readonly) NSArray * browseCategories; 
@property (getter=_placeDisplayStyle,nonatomic,readonly) int placeDisplayStyle; 
@property (getter=_annotatedItemList,nonatomic,readonly) id<GEOAnnotatedItemList> annotatedItemList; 
@property (getter=_hasMuninViewState,nonatomic,readonly) BOOL hasMuninViewState; 
@property (getter=_muninViewState,nonatomic,readonly) GEOMuninViewState * muninViewState; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_reviewsDisplayName,nonatomic,readonly) NSString * reviewsDisplayName; 
@property (getter=_attribution,nonatomic,readonly) _MKMapItemPlaceAttribution * attribution;                                                            //@synthesize attribution=_attribution - In the implementation block
@property (getter=_photosAttribution,nonatomic,readonly) _MKMapItemPhotosAttribution * photosAttribution;                                               //@synthesize photosAttribution=_photosAttribution - In the implementation block
@property (getter=_reviewsAttribution,nonatomic,readonly) _MKMapItemReviewsAttribution * reviewsAttribution;                                            //@synthesize reviewsAttribution=_reviewsAttribution - In the implementation block
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (nonatomic,readonly) NSString * reviewsProviderDisplayName; 
@property (getter=_handle,nonatomic,readonly) NSData * handle; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,retain) _MKPlaceReservationInfo * reservationInfo;                                                                                 //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (getter=_detourInfo,nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (getter=_externalTransitStationCode,nonatomic,readonly) NSData * externalTransitStationCode; 
@property (getter=_messageID,nonatomic,readonly) NSString * messageID; 
@property (getter=_messageURLString,nonatomic,readonly) NSString * messageURLString; 
@property (getter=_isMessageIDVerified,nonatomic,readonly) BOOL isMessageIDVerified; 
@property (getter=_quickLinks,nonatomic,readonly) NSArray * quickLinks; 
@property (getter=_secondaryQuickLinks,nonatomic,readonly) NSArray * secondaryQuickLinks; 
@property (getter=_placeCollections,nonatomic,readonly) NSArray * placeCollections; 
@property (getter=_placeCollectionIds,nonatomic,readonly) NSArray * collectionIds; 
@property (getter=_relatedPlaceList,nonatomic,readonly) GEORelatedPlaceList * relatedPlaceList; 
@property (getter=_preferedAppAdamID,nonatomic,readonly) NSNumber * preferedAppAdamID; 
@property (getter=_alternativeAppAdamIds,nonatomic,readonly) NSArray * alternativeAppAdamIds; 
@property (getter=_placecardLayout,nonatomic,readonly) GEOModuleLayoutEntry * placecardLayout; 
@property (getter=_navTintBrandColor,nonatomic,readonly) UIColor * navTintBrandColor; 
@property (getter=_navBackgroundbrandColor,nonatomic,readonly) UIColor * navBackgroundbrandColor; 
@property (getter=_secondaryName,nonatomic,readonly) NSString * secondaryName; 
@property (getter=_secondarySpokenName,nonatomic,readonly) NSString * secondarySpokenName; 
@property (getter=_hasBusinessHours,nonatomic,readonly) BOOL hasBusinessHours; 
@property (getter=_businessHours,nonatomic,readonly) NSArray * businessHours; 
@property (getter=_hasLinkedServices,nonatomic,readonly) BOOL hasLinkedServices; 
@property (getter=_linkedServices,nonatomic,readonly) NSArray * linkedServices; 
@property (getter=_hasMuninStorefront,nonatomic,readonly) BOOL hasMuninStorefront; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,copy) NSString * pointOfInterestCategory;                                                                                          //@synthesize pointOfInterestCategory=_pointOfInterestCategory - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2 ;
+(id)mapItemForCurrentLocation;
+(void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)contactsAddressKeysForGeoAddressKeys;
+(id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1 ;
+(id)urlForMapItem:(id)arg1 options:(id)arg2 ;
+(id)ticketForMapsDataString:(id)arg1 name:(id)arg2 ;
+(id)_mapItemFromVCardRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)mapItemsFromURL:(id)arg1 options:(id*)arg2 ;
+(void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_itemWithGeoMapItem:(id)arg1 ;
+(id)urlForMapItems:(id)arg1 options:(id)arg2 ;
+(id)_localizedNextOpeningHoursFormatter;
+(id)_localizedNextOpeningDayOftheWeekFormatter;
+(id)_urlForMapItemHandles:(id)arg1 options:(id)arg2 ;
+(id)sanitizeDictionary:(id)arg1 ;
+(id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id*)arg2 ;
+(id)_launchOptionsFromResourceOptionsDictionary:(id)arg1 ;
+(void)_mapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_launchOptionsWithOptions:(id)arg1 ;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg1 ;
+(BOOL)valueIsValid:(id)arg1 forKey:(id)arg2 ;
+(id)sanitizeArray:(id)arg1 forKey:(id)arg2 ;
+(id)sanitizeObject:(id)arg1 forKey:(id)arg2 ;
+(id)_mapItemBackedByURL:(id)arg1 ;
+(id)mapItemWithDictionary:(id)arg1 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg1 ;
+(BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 ;
+(id)_sourceAppIdFromLaunchURL:(id)arg1 ;
+(void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 fromScene:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 ;
+(void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_sharedSessionURLForPunchoutURL:(id)arg1 ;
+(id)_sourceAppIdFromLaunchUserInfo:(id)arg1 ;
+(id)launchOptionsFromURL:(id)arg1 ;
+(id)_urlForLocation:(id)arg1 address:(id)arg2 label:(id)arg3 options:(id)arg4 ;
+(id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1 ;
+(id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(BOOL)arg3 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 ;
+(void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
-(id)_transitAttribution;
-(float)_normalizedUserRatingScore;
-(BOOL)_hasUserRatingScore;
-(id)dictionaryRepresentation;
-(id)_flyover;
-(id)_businessClaim;
-(NSTimeZone *)timeZone;
-(BOOL)_hasAnyAmenities;
-(BOOL)_hasMUID;
-(BOOL)_hasOperatingHours;
-(GEOPlace *)place;
-(id)_reviews;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasBusinessHours;
-(id)_photosAttribution;
-(void)_getFirstAvailableAppClipLinkFromQuickLinks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)_encyclopedicInfo;
-(id)_attribution;
-(id)_placecardLayout;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)_flyoverAnnouncementMessage;
-(id)_transitInfo;
-(id)_secondaryQuickLinks;
-(unsigned long long)_muid;
-(BOOL)_browseCategory_isVenueItem;
-(BOOL)_hasPriceRange;
-(id)_geoAddress;
-(id)_vendorID;
-(id)initWithPlace:(id)arg1 ;
-(BOOL)_hasEncyclopedicInfo;
-(id)_styleAttributes;
-(unsigned)_sampleSizeForUserRatingScore;
-(BOOL)_needsAttribution;
-(id)_tips;
-(long long)_venueFeatureType;
-(NSString *)yelpID;
-(BOOL)hasAmenityType:(int)arg1 ;
-(id)_quickLinks;
-(CLLocationCoordinate2D)_coordinate;
-(id)_reviewsAttribution;
-(_MKPlaceReservationInfo *)reservationInfo;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
-(BOOL)_browseCategory_canDisplayBrowseCategoriesForVenue;
-(unsigned long long)_customIconID;
-(id)_activityURLUsingWebPlaceCard:(BOOL)arg1 ;
-(id)_preferedAppAdamID;
-(id)_amenities;
-(BOOL)_hasTransit;
-(BOOL)_hasResolvablePartialInformation;
-(id)_shortAddress;
-(id)_cnPostalAddress;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_placeDataAsData;
-(id)_placeCollectionIds;
-(id)_poiSurveyURLString;
-(id)_priceDescription;
-(id)thumbnailWithSize:(CGSize)arg1 annotationView:(id)arg2 ;
-(BOOL)_hasFlyover;
-(id)_placeCollections;
-(int)_resultProviderID;
-(id)_relatedPlaceList;
-(unsigned long long)_openingHoursOptions;
-(id)urlRepresentation;
-(id)_handle;
-(BOOL)_hasBusinessClaim;
-(void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_restaurantLink_hasFeatureType:(unsigned long long)arg1 ;
-(id)_restaurantLink_firstProviderDisplayName;
-(BOOL)_hasResultProviderID;
-(BOOL)_isStandAloneBrand;
-(void)_launchActivityForBrandItem;
-(NSString *)phoneNumber;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(void)_getFirstAvailableAppClipLinkWithCompletion:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_getFirstAvailableSecondaryAppClipLinkWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasRestaurantExtensionInfo;
-(unsigned long long)_restaurantExtensionModeForFirstProvider;
-(int)_parsecSectionType;
-(id)_webURL;
-(id)_poiPinpointURLString;
-(BOOL)_responseStatusIsIncomplete;
-(id)_providerURL;
-(id)_bestNavbarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_secondaryName;
-(id)_secondarySpokenName;
-(void)_getHasAvailableAppClipWithCompletion:(/*^block*/id)arg1 ;
-(void)_getHasAvailableSecondaryAppClipWithCompletion:(/*^block*/id)arg1 ;
-(id)_restaurantLink_firstProviderIdentifier;
-(BOOL)_isMapItemTypeBrand;
-(id)_bestBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_localizedResponseTime;
-(id)_businessHours;
-(BOOL)_hasBrandMUID;
-(id)initWithPlacemark:(id)arg1 ;
-(BOOL)_browseCategory_canDisplayBrowseCategoriesForPlace;
-(NSURL *)url;
-(id)_restaurantLink_firstVendorID;
-(id)_restaurantLink_overridenBundleIDsForVendorIDs;
-(id)_restaurantLink_firstProviderPlaceIdentifier;
-(id)_annotatedItemList;
-(NSString *)name;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)_initWithLabelMarker:(id)arg1 ;
-(id)_htmlRepresentation;
-(id)_navTintBrandColor;
-(id)_navBackgroundbrandColor;
-(NSString *)description;
-(id)_venueInfo;
-(BOOL)_hasLinkedServices;
-(id)_vCardFilename;
-(id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4 ;
-(id)_vCardRepresentation;
-(id)_firstLocalizedCategoryName;
-(BOOL)_isMessageIDVerified;
-(int)_browseCategory_placeCardType;
-(id)_identifier;
-(id)_placeCardContact;
-(BOOL)isCurrentLocation;
-(id)initWithContact:(id)arg1 ;
-(id)_linkedServices;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)_displayMapRegion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_browseCategories;
-(MKPlacemark *)placemark;
-(int)_placeDisplayStyle;
-(id)_detourInfo;
-(id)_addressFormattedAsSinglelineAddress;
-(id)_externalTransitStationCode;
-(void)setName:(NSString *)arg1 ;
-(GEOMapItemStorageUserValues *)userValues;
-(id)_geoMapItem;
-(id)initWithCLLocation:(id)arg1 ;
-(id)sharingURL;
-(id)_messageID;
-(void)_refreshAttribution;
-(id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(id)initWithCLLocation:(id)arg1 placeType:(int)arg2 ;
-(BOOL)_hasTransitDisplayName;
-(id)_transitDisplayName;
-(id)_addressFormattedAsShortenedAddress;
-(id)_getBusiness;
-(id)_chargerNumberString;
-(NSString *)pointOfInterestCategory;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)_geoMapItemStorageForPersistence;
-(BOOL)isPlaceHolder;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(MKMapItemMetadata *)metadata;
-(BOOL)_hasPriceDescription;
-(id)_priceRangeString;
-(id)venueLabelWithContext:(unsigned long long)arg1 ;
-(BOOL)_hasTransitLabels;
-(id)_addressFormattedAsMultilineAddress;
-(id)_addressFormattedAsWeatherDisplayName;
-(id)_urlExtraStorage;
-(id)_addressFormattedAsWeatherLocationName;
-(BOOL)_isMapItemTypeTransit;
-(id)_addressOrNil:(id)arg1 ;
-(id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1 ;
-(id)_addressFormattedAsName;
-(id)_formatterForAdamId;
-(id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(BOOL)arg4 ;
-(BOOL)_hasDisplayMinZoom;
-(BOOL)_hasVenueFeatureType;
-(id)initWithGeoMapItemAsCurrentLocation:(id)arg1 ;
-(id)_geoMapItemStorageForDragAndDrop;
-(BOOL)_phoneNumberOptsOutOfAds;
-(float)_displayMinZoom;
-(BOOL)_hasDisplayMaxZoom;
-(float)_displayMaxZoom;
-(id)_geoFenceMapRegion;
-(void)preloadTransitInfoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasMuninViewState;
-(id)_localizedSampleSizeForUserRatingScoreString;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasLocalizedOperatingHours;
-(id)_localizedNextOpeningStringShort:(BOOL)arg1 ;
-(id)hoursBuilderForSearchResultCellForOptions:(unsigned long long)arg1 ;
-(BOOL)_hasChargerNumberString;
-(void)openInMapsWithLaunchOptions:(id)arg1 fromScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_fullAddressWithMultiline:(BOOL)arg1 ;
-(id)_weatherDisplayName;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)_weatherLocationName;
-(id)_addressFormattedAsCity;
-(id)_addressFormattedAsStreetOnly;
-(id)_addressFormattedAsTitlesForMapRect:(SCD_Struct_MK6)arg1 ;
-(id)_alternativeAppAdamIds;
-(id)_reviewsDisplayName;
-(BOOL)_isMapItemTypeUnknown;
-(BOOL)_isMapItemTypeBusiness;
-(BOOL)_isMapItemTypeSettlement;
-(NSString *)reviewsProviderDisplayName;
-(BOOL)_hasCorrectedHomeWorkCoordinate;
-(BOOL)_hasCorrectedHomeWorkAddress;
-(void)setIsMapItemTypeTransit:(BOOL)arg1 ;
-(void)setPointOfInterestCategory:(NSString *)arg1 ;
-(id)_preloadedTransitInfo;
-(id)_transitInfoUpdatedDate;
-(id)_activityURLUsingWebPlaceCard:(BOOL)arg1 muninViewState:(id)arg2 ;
-(BOOL)_hasMuninStorefront;
-(unsigned long long)_brandMUID;
-(BOOL)_isMapItemTypeAddress;
-(id)_messageBusinessHours;
-(id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg1 formatter:(id)arg2 ;
-(NSString *)formattedNumberOfReviews;
-(NSString *)formattedNumberOfReviewsIncludingProvider;
-(id)_reviewForIdentifier:(id)arg1 ;
-(void)_markTransitInfoUpdated;
-(void)_updateTransitInfoWithMapItem:(id)arg1 ;
-(BOOL)openInMapsWithLaunchOptions:(id)arg1 ;
-(id)_messageURLString;
-(BOOL)_isEmptyContactMapItem;
-(id)_activityURL;
-(id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(id)_muninViewState;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_mapsDataString;
-(BOOL)_canGetDirections;
@end

