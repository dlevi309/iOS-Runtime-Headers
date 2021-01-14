/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
@property (nonatomic,readonly) UIViewController * remoteViewController;                           //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)remoteViewController;
-(id)serviceController;
-(void)requestRemoteViewController;
-(void)synchronizeSettings;
-(MPMediaPickerController *)mediaPickerController;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(void)dealloc;
@end

