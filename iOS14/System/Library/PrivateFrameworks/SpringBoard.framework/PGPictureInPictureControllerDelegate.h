/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol PGPictureInPictureControllerDelegate <NSObject>
@optional
-(void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
-(BOOL)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2;
-(void)pictureInPictureController:(id)arg1 didRequestStopForPictureInPictureViewController:(id)arg2 sourceSceneSessionIdentifier:(id)arg3 animated:(BOOL)arg4;
-(void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureController:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
-(BOOL)pictureInPictureController:(id)arg1 shouldCancelPictureInPictureForApplication:(id)arg2 whenStartingPictureInPictureForApplication:(id)arg3;

@end

