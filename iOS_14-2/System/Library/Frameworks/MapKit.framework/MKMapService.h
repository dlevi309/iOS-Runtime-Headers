/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>

@class NSString;

@interface MKMapService : NSObject <GEOLogContextDelegate> {

	int _deviceOrientation;

}

@property (assign) int deviceOrientation;                           //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15 ;
-(id)ticketForUpdatedTransitScheduleDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForPublisherViewPublisherIdentifier:(id)arg1 keywordFilter:(id)arg2 addressFilter:(id)arg3 batchSize:(unsigned)arg4 withTraits:(id)arg5 ;
-(id)ticketForFeedbackRequestParameters:(id)arg1 mapItemForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6 ;
-(id)mapItemsForPlacesInDetails:(id)arg1 ;
-(id)ticketForSearchAlongRouteWithCategory:(id)arg1 originalWaypointRouteData:(id)arg2 zilchData:(id)arg3 sessionState:(id)arg4 routeId:(id)arg5 routeAttributes:(id)arg6 maxResults:(unsigned)arg7 traits:(id)arg8 ;
-(id)ticketForChildPlace:(id)arg1 traits:(id)arg2 ;
-(id)ticketForTransitLines:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSpatialPlaceLookupWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 pointOfInterestFilter:(id)arg3 ;
-(id)feedbackTicketForWalletRAPReport:(id)arg1 ;
-(void)captureTransitPlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13 ;
-(id)ticketForSpatialPlaceLookupWithMapRegion:(id)arg1 pointOfInterestFilter:(id)arg2 ;
-(void)siriAnalyticsDonation:(int)arg1 target:(int)arg2 resultIndex:(int)arg3 mapItem:(id)arg4 searchCategory:(id)arg5 searchQueryString:(id)arg6 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 queryString:(id)arg3 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 mapRegion:(id)arg7 zoomLevel:(double)arg8 mapType:(int)arg9 ;
-(void)captureUserAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 placeActionDetails:(id)arg3 mapItem:(id)arg4 resultIndex:(int)arg5 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5 ;
-(id)ticketForWalletMerchantLookupRequest:(id)arg1 traits:(id)arg2 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 ;
-(void)setDeviceOrientation:(int)arg1 ;
-(id)defaultTraits;
-(int)deviceOrientation;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 ;
-(id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2 ;
-(void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8 ;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForIdentifiers:(id)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2 ;
-(id)stylingForWalletCategory:(id)arg1 ;
-(id)ticketForMUIDs:(id)arg1 traits:(id)arg2 ;
-(id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForFeedbackRequest:(id)arg1 traits:(id)arg2 ;
-(id)ticketForFeedbackRequestData:(id)arg1 traits:(id)arg2 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)ticketForPlaceLookupWithSearchCategory:(id)arg1 parentMuid:(unsigned long long)arg2 traits:(id)arg3 ;
-(id)defaultTraitsWithTraits:(id)arg1 ;
-(id)_ticketForReverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)defaultTraitsWithTransportType:(unsigned long long)arg1 ;
-(id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2 ;
-(id)ticketForTransitScheduleAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForTransitDeparturesAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 traits:(id)arg4 ;
-(id)_ticketForReverseGeocodeDroppedPinCoordinate:(CLLocationCoordinate2D)arg1 floorOrdinal:(id)arg2 traits:(id)arg3 ;
-(id)_ticketForReverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForTransitTripDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForReverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(CLLocationCoordinate2D*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForCategoryListWithTraits:(id)arg1 isFromNoQueryState:(BOOL)arg2 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2 ;
-(id)defaultTraitsForAnalyticsWithTraits:(id)arg1 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg1 traits:(id)arg2 ;
-(id)ticketForRelatedPlaceList:(id)arg1 traits:(id)arg2 ;
-(id)ticketForNearestTransitStation:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(CLLocationCoordinate2D)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 traits:(id)arg3 ;
-(id)ticketForCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForSearchHomeWithTraits:(id)arg1 ;
-(id)ticketForCuratedCollections:(id)arg1 isBatchLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForCuratedCollectionItems:(id)arg1 collection:(id)arg2 traits:(id)arg3 ;
-(id)ticketForAllCollectionViewWithBatchSize:(unsigned)arg1 keywordFilter:(id)arg2 addressFilter:(id)arg3 withTraits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 maxResults:(unsigned)arg4 traits:(id)arg5 ;
-(id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 filters:(id)arg4 ;
-(void)_mapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
