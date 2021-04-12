/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKPlaceCardPhotosControllerDelegate <NSObject>
@optional
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 presentingViewController:(id)arg3;
-(void)placeCardPhotosControllerDidOpenFullscreenPhotos:(id)arg1;
-(void)placeCardPhotosControllerDidCloseFullscreenPhotos:(id)arg1;
-(BOOL)shouldUseSmallPhotosWithPhotosController:(id)arg1;
-(void)placeCardPhotosController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
-(id)muninContainerForPlaceCardPhotosController:(id)arg1;
-(void)cleanMuninContainerForPlaceCardPhotosController:(id)arg1;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(id)arg1;

@end

