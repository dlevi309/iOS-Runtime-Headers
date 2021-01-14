/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@protocol PLPhotoTileViewControllerDelegate <NSObject>
@optional
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
-(BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1;
-(BOOL)photoTileViewControllerCanShowCenterOverlay:(id)arg1;
-(id)photoTileViewControllerCustomCenterOverlay:(id)arg1;
-(id)photoTileViewControllerTopLayoutGuide:(id)arg1;

@required
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1;
-(void)photoTileViewControllerSingleTap:(id)arg1;
-(void)photoTileViewControllerDoubleTap:(id)arg1;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1;
-(void)photoTileViewControllerDidEndGesture:(id)arg1;

@end

