/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/MediaControlsAudioModule.bundle/MediaControlsAudioModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>
#import <MediaControlsAudioModule/MediaControlsVolumeViewControllerDelegate.h>

@class MediaControlsVolumeController, MediaControlsVolumeViewController, MediaControlsVolumeBackgroundViewController, CCUIContentModuleContext, NSString;

@interface MediaControlsAudioModule : NSObject <CCUIContentModule, MediaControlsVolumeViewControllerDelegate> {

	MediaControlsVolumeController* _volumeController;
	MediaControlsVolumeViewController* _moduleViewController;
	MediaControlsVolumeBackgroundViewController* _backgroundViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(void)dismissMediaControlsVolumeViewController:(id)arg1 ;
@end

