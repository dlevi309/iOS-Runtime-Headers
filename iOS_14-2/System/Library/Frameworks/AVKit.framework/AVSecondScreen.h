/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class AVObservationController, UIWindow, UIWindowScene, UIScreen, AVSecondScreenConnection, CADisplay;

@interface AVSecondScreen : NSObject {

	BOOL _TVOutScreen;
	AVObservationController* _observationController;
	UIWindow* _window;
	UIWindowScene* _windowScene;
	UIScreen* _screen;
	AVSecondScreenConnection* _secondScreenConnection;
	long long _state;
	CADisplay* _debugInfoDisplay;

}

@property (nonatomic,readonly) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                              //@synthesize window=_window - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene;                           //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,__weak,readonly) UIScreen * screen;                                     //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain) AVSecondScreenConnection * secondScreenConnection;              //@synthesize secondScreenConnection=_secondScreenConnection - In the implementation block
@property (nonatomic,readonly) long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CADisplay * debugInfoDisplay;                                   //@synthesize debugInfoDisplay=_debugInfoDisplay - In the implementation block
@property (getter=isTVOutScreen,nonatomic,readonly) BOOL TVOutScreen;                        //@synthesize TVOutScreen=_TVOutScreen - In the implementation block
@property (nonatomic,readonly) CGRect sceneBounds; 
-(UIWindowScene *)windowScene;
-(BOOL)isAvailable;
-(AVSecondScreenConnection *)secondScreenConnection;
-(void)setSecondScreenConnection:(AVSecondScreenConnection *)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(CGRect)sceneBounds;
-(void)connectWithSecondScreenConnection:(id)arg1 ;
-(void)_updatePreferredDisplayCriteria;
-(BOOL)_isWindowSceneAvailable;
-(BOOL)isTVOutScreen;
-(CADisplay *)debugInfoDisplay;
-(void)setDebugInfoDisplay:(CADisplay *)arg1 ;
-(UIWindow *)window;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(UIScreen *)screen;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

