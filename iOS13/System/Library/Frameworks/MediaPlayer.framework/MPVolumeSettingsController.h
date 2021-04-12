/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIWindow *)previousWindow;
-(void)setPreviousWindow:(UIWindow *)arg1 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)presentAlertControllerInWindow:(id)arg1 ;
-(void)dismissAlertController;
-(void)_keyWindowDidChange:(id)arg1 ;
-(void)_flip;
-(UIWindow *)hostingWindow;
-(void)setHostingWindow:(UIWindow *)arg1 ;
@end

