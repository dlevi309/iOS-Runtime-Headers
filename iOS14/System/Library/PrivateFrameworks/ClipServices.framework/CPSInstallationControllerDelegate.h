/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol CPSInstallationControllerDelegate <NSObject>
@required
-(void)installationControllerWillStartInstall:(id)arg1;
-(void)installationControllerDidInstallPlaceholder:(id)arg1;
-(void)installationController:(id)arg1 didUpdateProgress:(double)arg2;
-(void)installationController:(id)arg1 didFinishWithError:(id)arg2;

@end

