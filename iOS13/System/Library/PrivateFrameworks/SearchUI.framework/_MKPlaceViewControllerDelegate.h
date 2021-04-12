/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol _MKPlaceViewControllerDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)placeViewControllerDidSelectInlineMap:(id)arg1;
-(void)placeViewControllerDidDismiss:(id)arg1;
-(void)placeViewControllerDidUpdateHeight:(id)arg1;
-(id)placeViewController:(id)arg1 collectionViewsForPlaceItem:(id)arg2;
-(void)placeViewController:(id)arg1 selectCollectionIdentifier:(id)arg2;
-(void)placeViewController:(id)arg1 hasShortcutForPlaceItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewControllerDidOpenFullscreenPhotos:(id)arg1;
-(void)placeViewControllerDidCloseFullscreenPhotos:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectParent:(id)arg2;
-(void)placeViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;
-(id)placeViewController:(id)arg1 viewsForMapItems:(id)arg2 prefersAddressOverCategory:(BOOL)arg3;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3;
-(void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(void)placeViewControllerDidSelectShareLocation:(id)arg1;
-(id)activityViewControllerForPlaceViewController:(id)arg1;
-(long long)overriddenInterfaceStyleForPlaceViewControllerSubviews:(id)arg1;
-(id)traitsForPlaceViewController:(id)arg1;
-(double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(id)arg2;
-(int)mapTypeForPlaceViewController:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectTransitConnectionInformation:(id)arg2;
-(void)placeViewController:(id)arg1 showTransitIncidents:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectDepartureSequence:(id)arg2 mapItem:(id)arg3;
-(BOOL)placeViewController:(id)arg1 canSelectDepartureSequence:(id)arg2 mapItem:(id)arg3;
-(void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;
-(void)placeViewControllerDidSelectAddAPlace:(id)arg1;
-(void)placeViewController:(id)arg1 addPlaceItemToCollection:(id)arg2 sourceView:(id)arg3 result:(/*^block*/id)arg4;
-(void)placeViewController:(id)arg1 addShortcutForPlaceItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 removeShortcutForPlaceItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 refineLocationForPlaceItem:(id)arg2;
-(void)placeViewController:(id)arg1 changeAddressForPlaceItem:(id)arg2;
-(void)placeViewControllerDidSelectRemoveMarker:(id)arg1;
-(void)placeViewControllerDidSelectShowBrandCard:(id)arg1;
-(void)placeViewController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceViewController:(id)arg1;
-(void)placeViewControllerLinkedServicesDidTapHeaderButton:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectSearchCategory:(id)arg2;
-(BOOL)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
-(void)placeViewControllerDidSelectFlyover:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
-(void)placeViewControllerDidSelectDisplayedPhoneNumber:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedHomePage:(id)arg1;
-(void)placeViewControllerDidSelectOnePhoto:(id)arg1;
-(void)placeViewControllerDidSelectOneReview:(id)arg1;
-(void)placeViewControllerDidSelectWriteAReview:(id)arg1;
-(void)placeViewControllerDidSelectMoreInfo:(id)arg1;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;

@end

