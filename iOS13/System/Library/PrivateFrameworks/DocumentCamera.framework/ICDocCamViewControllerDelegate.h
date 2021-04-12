/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@protocol ICDocCamViewControllerDelegate <NSObject>
@optional
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5;
-(void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4;
-(id)documentCameraControllerImageCache;
-(void)documentCameraControllerDidRetake:(id)arg1 pageCount:(unsigned long long)arg2;

@required
-(BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
-(void)documentCameraControllerDidCancel:(id)arg1;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)scanDataDelegateWithIdentifier:(id)arg1;

@end

