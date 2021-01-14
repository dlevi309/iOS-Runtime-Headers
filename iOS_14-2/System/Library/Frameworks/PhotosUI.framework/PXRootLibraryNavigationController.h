/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXRootLibraryNavigationController <NSObject,PLCloudFeedNavigating>
@required
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1 refetchSectionsIfNeeded:(BOOL)arg2;
-(void)navigateToPeopleAlbumAnimated:(BOOL)arg1 revealPersonWithLocalIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToOneYearAgoSearch;
-(BOOL)contentModeIsAvailableForNavigation:(int)arg1;
-(void)navigateToInvitationCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
-(BOOL)cloudFeedIsAvailableForNavigation;
-(BOOL)albumIsAvailableForNavigation:(id)arg1;
-(void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToSearchWithHashtag:(id)arg1;
-(void)navigateToAlbum:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToRevealAlbum:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(void)navigateToMemoryWithLocalIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToRevealCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToRevealAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToCloudFeedWithCompletion:(/*^block*/id)arg1;
-(void)navigateToCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1;
-(BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
-(void)navigateToSuggestedCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1;
-(BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(id)arg2;
-(void)navigateToPhotosContentBottomAnimated:(BOOL)arg1;
-(void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToMomentShareWithURL:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToAsset:(id)arg1 openOneUp:(BOOL)arg2 animated:(BOOL)arg3;
-(void)navigateToPlacesAlbumAnimated:(BOOL)arg1;

@end

