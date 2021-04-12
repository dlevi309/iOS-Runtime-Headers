/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class MPMediaPickerController, UIViewController;


@protocol MPMediaPickerRemoteViewLoader <NSObject>
@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController; 
@property (nonatomic,readonly) UIViewController * remoteViewController; 
@required
-(UIViewController *)remoteViewController;
-(void)requestRemoteViewController;
-(void)synchronizeSettings;
-(MPMediaPickerController *)mediaPickerController;
-(void)setMediaPickerController:(id)arg1;

@end

