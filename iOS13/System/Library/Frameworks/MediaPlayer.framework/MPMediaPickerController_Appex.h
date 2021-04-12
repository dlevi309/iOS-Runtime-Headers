/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMediaPickerRemoteViewLoader.h>

@class MPMediaPickerController, UIViewController, _UIResilientRemoteViewContainerViewController, MPMusicMediaPickerRemoteViewController, NSString;

@interface MPMediaPickerController_Appex : NSObject <MPMediaPickerRemoteViewLoader> {

	_UIResilientRemoteViewContainerViewController* _remoteViewContainerViewController;
	MPMusicMediaPickerRemoteViewController* _musicRemoteViewController;
	MPMediaPickerController* _mediaPickerController;
	UIViewController* _remoteViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
@property (nonatomic,readonly) UIViewController * remoteViewController;                           //@synthesize remoteViewController=_remoteViewController - In the implementation block
-(void)dealloc;
-(UIViewController *)remoteViewController;
-(void)requestRemoteViewController;
-(void)synchronizeSettings;
-(MPMediaPickerController *)mediaPickerController;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(id)serviceController;
@end

