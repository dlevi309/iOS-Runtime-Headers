/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <GLKit/GLKViewDelegate.h>

@protocol GLKViewControllerDelegate;
@class UIScreen, CADisplayLink, GLKDisplayLinkMessenger, NSString;

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate> {

	BOOL _displayLinkPaused;
	BOOL _viewIsVisible;
	BOOL _firstResumeOccurred;
	BOOL _lastResumeOccurred;
	BOOL _lastUpdateOccurred;
	BOOL _lastDrawOccurred;
	BOOL _pauseOnWillResignActive;
	BOOL _resumeOnDidBecomeActive;
	UIScreen* _screen;
	CADisplayLink* _displayLink;
	GLKDisplayLinkMessenger* _displayLinkMessenger;
	double _timeSinceFirstResumeStartTime;
	double _timeSinceLastResumeStartTime;
	double _timeSinceLastUpdatePreviousTime;
	double _timeSinceLastDrawPreviousTime;
	/*function pointer*/void* _updateIMP;
	id<GLKViewControllerDelegate> _delegate;
	long long _screenFramesPerSecond;
	long long _preferredFramesPerSecond;
	long long _framesPerSecond;
	long long _framesDisplayed;
	double _timeSinceFirstResume;
	double _timeSinceLastResume;
	double _timeSinceLastUpdate;
	double _timeSinceLastDraw;

}

@property (nonatomic,retain) UIScreen * screen;                                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL displayLinkPaused;                                      //@synthesize displayLinkPaused=_displayLinkPaused - In the implementation block
@property (nonatomic,retain) GLKDisplayLinkMessenger * displayLinkMessenger;              //@synthesize displayLinkMessenger=_displayLinkMessenger - In the implementation block
@property (assign,nonatomic) BOOL viewIsVisible;                                          //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL firstResumeOccurred;                                    //@synthesize firstResumeOccurred=_firstResumeOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceFirstResumeStartTime;                        //@synthesize timeSinceFirstResumeStartTime=_timeSinceFirstResumeStartTime - In the implementation block
@property (assign,nonatomic) BOOL lastResumeOccurred;                                     //@synthesize lastResumeOccurred=_lastResumeOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceLastResumeStartTime;                         //@synthesize timeSinceLastResumeStartTime=_timeSinceLastResumeStartTime - In the implementation block
@property (assign,nonatomic) BOOL lastUpdateOccurred;                                     //@synthesize lastUpdateOccurred=_lastUpdateOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceLastUpdatePreviousTime;                      //@synthesize timeSinceLastUpdatePreviousTime=_timeSinceLastUpdatePreviousTime - In the implementation block
@property (assign,nonatomic) BOOL lastDrawOccurred;                                       //@synthesize lastDrawOccurred=_lastDrawOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceLastDrawPreviousTime;                        //@synthesize timeSinceLastDrawPreviousTime=_timeSinceLastDrawPreviousTime - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* updateIMP;                         //@synthesize updateIMP=_updateIMP - In the implementation block
@property (assign,nonatomic) long long screenFramesPerSecond;                             //@synthesize screenFramesPerSecond=_screenFramesPerSecond - In the implementation block
@property (assign,nonatomic) id<GLKViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                          //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (nonatomic,readonly) long long framesPerSecond;                                 //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) long long framesDisplayed;                                 //@synthesize framesDisplayed=_framesDisplayed - In the implementation block
@property (nonatomic,readonly) double timeSinceFirstResume;                               //@synthesize timeSinceFirstResume=_timeSinceFirstResume - In the implementation block
@property (nonatomic,readonly) double timeSinceLastResume;                                //@synthesize timeSinceLastResume=_timeSinceLastResume - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate;                                //@synthesize timeSinceLastUpdate=_timeSinceLastUpdate - In the implementation block
@property (nonatomic,readonly) double timeSinceLastDraw;                                  //@synthesize timeSinceLastDraw=_timeSinceLastDraw - In the implementation block
@property (assign,nonatomic) BOOL pauseOnWillResignActive;                                //@synthesize pauseOnWillResignActive=_pauseOnWillResignActive - In the implementation block
@property (assign,nonatomic) BOOL resumeOnDidBecomeActive;                                //@synthesize resumeOnDidBecomeActive=_resumeOnDidBecomeActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_initCommon;
-(id)init;
-(BOOL)viewIsVisible;
-(id<GLKViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setView:(id)arg1 ;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)viewDidUnload;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(void)setDelegate:(id<GLKViewControllerDelegate>)arg1 ;
-(long long)framesPerSecond;
-(long long)preferredFramesPerSecond;
-(void)viewDidLoad;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(UIScreen *)screen;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)loadView;
-(double)timeSinceLastUpdate;
-(BOOL)isPaused;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateAndDraw;
-(void)_updateScreenIfChanged;
-(long long)_calculateScreenFramesPerSecond:(id)arg1 ;
-(void)setDisplayLinkMessenger:(GLKDisplayLinkMessenger *)arg1 ;
-(void)_configureNotifications;
-(void)_pauseByNotification;
-(void)_resumeByNotification;
-(double)timeSinceFirstResume;
-(double)timeSinceLastResume;
-(void)setPauseOnWillResignActive:(BOOL)arg1 ;
-(BOOL)pauseOnWillResignActive;
-(void)setResumeOnDidBecomeActive:(BOOL)arg1 ;
-(BOOL)resumeOnDidBecomeActive;
-(BOOL)displayLinkPaused;
-(void)setDisplayLinkPaused:(BOOL)arg1 ;
-(GLKDisplayLinkMessenger *)displayLinkMessenger;
-(BOOL)firstResumeOccurred;
-(void)setFirstResumeOccurred:(BOOL)arg1 ;
-(double)timeSinceFirstResumeStartTime;
-(void)setTimeSinceFirstResumeStartTime:(double)arg1 ;
-(BOOL)lastResumeOccurred;
-(void)setLastResumeOccurred:(BOOL)arg1 ;
-(double)timeSinceLastResumeStartTime;
-(void)setTimeSinceLastResumeStartTime:(double)arg1 ;
-(BOOL)lastUpdateOccurred;
-(void)setLastUpdateOccurred:(BOOL)arg1 ;
-(double)timeSinceLastUpdatePreviousTime;
-(void)setTimeSinceLastUpdatePreviousTime:(double)arg1 ;
-(BOOL)lastDrawOccurred;
-(void)setLastDrawOccurred:(BOOL)arg1 ;
-(double)timeSinceLastDrawPreviousTime;
-(void)setTimeSinceLastDrawPreviousTime:(double)arg1 ;
-(/*function pointer*/void*)updateIMP;
-(void)setUpdateIMP:(/*function pointer*/void*)arg1 ;
-(long long)screenFramesPerSecond;
-(void)setScreenFramesPerSecond:(long long)arg1 ;
-(long long)framesDisplayed;
-(double)timeSinceLastDraw;
@end

