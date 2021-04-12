/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
*/

#import <UIKitCore/UIViewController.h>

@class NSURL, STWebRemoteViewController, NSString;

@interface STWebpageController : UIViewController {

	long long _currentUsageState;
	BOOL _suppressUsageRecording;
	BOOL _URLIsPlayingVideo;
	BOOL _URLIsPictureInPicture;
	BOOL _URLIsBlocked;
	BOOL _URLIsVisibleInForeground;
	NSURL* _URL;
	STWebRemoteViewController* _remoteViewController;
	NSString* _bundleIdentifier;

}

@property (retain) STWebRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (readonly) id<STWebService> serviceProxy; 
@property (assign,nonatomic) long long currentUsageState; 
@property (readonly) long long defaultUsageState; 
@property (assign) BOOL URLIsVisibleInForeground;                                 //@synthesize URLIsVisibleInForeground=_URLIsVisibleInForeground - In the implementation block
@property (readonly) BOOL URLIsPlayingVideoPictureInPicture; 
@property (assign) BOOL URLIsBlocked;                                             //@synthesize URLIsBlocked=_URLIsBlocked - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL suppressUsageRecording;                         //@synthesize suppressUsageRecording=_suppressUsageRecording - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) BOOL URLIsPlayingVideo;                              //@synthesize URLIsPlayingVideo=_URLIsPlayingVideo - In the implementation block
@property (assign,nonatomic) BOOL URLIsPictureInPicture;                          //@synthesize URLIsPictureInPicture=_URLIsPictureInPicture - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STWebRemoteViewController *)remoteViewController;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setRemoteViewController:(STWebRemoteViewController *)arg1 ;
-(void)viewDidLoad;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(id<STWebService>)serviceProxy;
-(void)loadView;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
-(void)_startReportingWebUsage;
-(void)_willStartPictureInPicture:(id)arg1 ;
-(void)_didStopPictureInPicture:(id)arg1 ;
-(void)_didChangePlaybackState:(id)arg1 ;
-(void)setCurrentUsageState:(long long)arg1 ;
-(void)setURLIsVisibleInForeground:(BOOL)arg1 ;
-(BOOL)URLIsPlayingVideoPictureInPicture;
-(long long)currentUsageState;
-(void)_setURL:(id)arg1 bundleIdentifier:(id)arg2 usageState:(long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(BOOL)URLIsPictureInPicture;
-(long long)defaultUsageState;
-(BOOL)URLIsPlayingVideo;
-(BOOL)suppressUsageRecording;
-(void)_URLIsBlockedDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_delayedSetURLIsBlocked:(id)arg1 ;
-(void)setURLIsBlocked:(BOOL)arg1 ;
-(void)_changeUsageState:(long long)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)URLIsVisibleInForeground;
-(void)setURLIsPictureInPicture:(BOOL)arg1 ;
-(void)setURLIsPlayingVideo:(BOOL)arg1 ;
-(void)setSuppressUsageRecording:(BOOL)arg1 ;
-(BOOL)setBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)URLIsBlocked;
@end

