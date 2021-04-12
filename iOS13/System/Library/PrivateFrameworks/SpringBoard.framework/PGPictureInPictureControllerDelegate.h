/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol PGPictureInPictureControllerDelegate <NSObject>
@optional
-(void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
-(void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureController:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
-(BOOL)pictureInPictureController:(id)arg1 shouldCancelPictureInPictureForApplication:(id)arg2 whenStartingPictureInPictureForApplication:(id)arg3;
-(BOOL)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2;

@end

