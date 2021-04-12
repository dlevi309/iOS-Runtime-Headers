/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

