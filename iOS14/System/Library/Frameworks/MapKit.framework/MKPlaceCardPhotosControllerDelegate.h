/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKPlaceCardPhotosControllerDelegate <NSObject>
@optional
-(void)placeCardPhotosController:(id)arg1 requestsSceneActivationForPhotoGalleryViewController:(id)arg2;
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 presentingViewController:(id)arg3;
-(void)placeCardPhotosControllerDidOpenFullscreenPhotos:(id)arg1;
-(BOOL)shouldUseSmallPhotosWithPhotosController:(id)arg1;
-(void)placeCardPhotosControllerDidCloseFullscreenPhotos:(id)arg1;
-(void)placeCardPhotosController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
-(id)muninContainerForPlaceCardPhotosController:(id)arg1;
-(void)cleanMuninContainerForPlaceCardPhotosController:(id)arg1;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(id)arg1;
-(void)placeCardPhotosController:(id)arg1 photoGalleryDidScroll:(id)arg2;
-(void)placeCardPhotosController:(id)arg1 didSelectPhotoToReport:(id)arg2 withPhotoGalleryViewController:(id)arg3;

@end

