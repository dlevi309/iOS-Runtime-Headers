/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKPlaceCardActionControllerDelegate <NSObject>
@optional
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1 presentingViewController:(id)arg2;
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg1 fromView:(id)arg2;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg1;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg1 presentingViewController:(id)arg2 progressObserver:(id)arg3 sourceView:(id)arg4;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg1;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg1;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1 fromView:(id)arg2;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg1;
-(void)placeCardActionControllerDidRequestCopy:(id)arg1;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg1;
-(void)placeCardActionControllerDidSelectRequestInformedConsentForAddingContributions:(id)arg1;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg1;

@required
-(void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;

@end

