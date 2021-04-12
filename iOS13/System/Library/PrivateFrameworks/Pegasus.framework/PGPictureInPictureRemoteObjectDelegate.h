/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>
@optional
-(BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
-(BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg1;
-(BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg1;
-(void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;

@end

