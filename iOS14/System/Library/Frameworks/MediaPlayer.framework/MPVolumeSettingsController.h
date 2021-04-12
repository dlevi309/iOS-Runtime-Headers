/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIAlertController, UIWindow;

@interface MPVolumeSettingsController : UIViewController {

	NSString* _audioCategory;
	UIAlertController* _alertController;
	UIWindow* _hostingWindow;
	UIWindow* _previousWindow;

}

@property (assign,nonatomic,__weak) UIWindow * hostingWindow;               //@synthesize hostingWindow=_hostingWindow - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * previousWindow;              //@synthesize previousWindow=_previousWindow - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_flip;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)presentAlertControllerInWindow:(id)arg1 ;
-(void)dismissAlertController;
-(void)_keyWindowDidChange:(id)arg1 ;
-(UIWindow *)hostingWindow;
-(void)setHostingWindow:(UIWindow *)arg1 ;
-(void)setPreviousWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousWindow;
-(void)dealloc;
@end

