/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(void)dismissMediaControlsVolumeViewController:(id)arg1 ;
@end

