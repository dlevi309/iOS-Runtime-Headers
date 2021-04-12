/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MPVolumeDisplaying.h>
#import <libobjc.A.dylib/SFRemoteViewControllerProtocol.h>

@protocol SFBrowserRemoteViewControllerDelegate;
@class UIWindowScene, NSString;

@interface SFBrowserRemoteViewController : _UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol> {

	BOOL _isInFullScreen;
	id<SFBrowserRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFBrowserRemoteViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIWindowScene * windowSceneForVolumeDisplay; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<SFBrowserRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFBrowserRemoteViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(BOOL)isOnScreenForVolumeDisplay;
-(NSString *)volumeAudioCategory;
-(void)willDismissServiceViewController;
-(void)didLoadWebView;
-(void)didFinishInitialLoad:(BOOL)arg1 ;
-(void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 ;
-(void)executeCustomActivityProxyID:(id)arg1 ;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1 ;
-(void)willOpenURLInHostApplication:(id)arg1 ;
-(void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2 ;
-(void)initialLoadDidRedirectToURL:(id)arg1 ;
-(void)didChangeFullScreen:(BOOL)arg1 ;
-(void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2 ;
-(void)didDecideShouldShowLinkPreviews:(BOOL)arg1 ;
-(void)_sf_sceneWillEnterForeground:(id)arg1 ;
-(void)_sf_sceneDidEnterBackground:(id)arg1 ;
@end

