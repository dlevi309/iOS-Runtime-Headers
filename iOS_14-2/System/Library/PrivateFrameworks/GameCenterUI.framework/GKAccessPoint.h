/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/GKGameCenterControllerDelegate.h>

@class UIWindow, GKGameCenterViewController, NSObject, UIGestureRecognizer;

@interface GKAccessPoint : NSObject <GKGameCenterControllerDelegate> {

	BOOL _active;
	BOOL _visible;
	BOOL _showHighlights;
	BOOL _focused;
	BOOL _isPresentingGameCenter;
	long long _location;
	UIWindow* _parentWindow;
	id _viewController;
	UIWindow* _window;
	long long _hideCount;
	GKGameCenterViewController* _gameCenterViewController;
	NSObject* _privateImplementation;
	double _delay;
	double _timeLastShown;
	UIGestureRecognizer* _tapGestureRecognizer;
	CGRect _frameInScreenCoordinates;

}

@property (nonatomic,retain) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                      //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) long long hideCount;                                                //@synthesize hideCount=_hideCount - In the implementation block
@property (assign,nonatomic) BOOL isPresentingGameCenter;                                        //@synthesize isPresentingGameCenter=_isPresentingGameCenter - In the implementation block
@property (assign,nonatomic) CGRect frameInScreenCoordinates;                                    //@synthesize frameInScreenCoordinates=_frameInScreenCoordinates - In the implementation block
@property (nonatomic,retain) id viewController;                                                  //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) GKGameCenterViewController * gameCenterViewController;              //@synthesize gameCenterViewController=_gameCenterViewController - In the implementation block
@property (nonatomic,retain) NSObject * privateImplementation;                                   //@synthesize privateImplementation=_privateImplementation - In the implementation block
@property (assign,nonatomic) double delay;                                                       //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double timeLastShown;                                               //@synthesize timeLastShown=_timeLastShown - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapGestureRecognizer;                         //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (assign,getter=isFocused,nonatomic) BOOL focused;                                      //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) BOOL showHighlights;                                                //@synthesize showHighlights=_showHighlights - In the implementation block
@property (assign,nonatomic) long long location;                                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * parentWindow;                                     //@synthesize parentWindow=_parentWindow - In the implementation block
+(id)shared;
-(void)setViewController:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(long long)location;
-(void)setDelay:(double)arg1 ;
-(long long)hideCount;
-(void)setTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1 ;
-(void)hideAccessPoint;
-(void)showAccessPoint;
-(void)setLocation:(long long)arg1 ;
-(void)resetUI;
-(BOOL)isFocused;
-(void)showWindow;
-(void)removeWindow;
-(void)updateUI;
-(double)delay;
-(id)viewController;
-(BOOL)isVisible;
-(void)loadModels;
-(UIWindow *)window;
-(UIGestureRecognizer *)tapGestureRecognizer;
-(void)setFocused:(BOOL)arg1 ;
-(void)setShowHighlights:(BOOL)arg1 ;
-(void)configureIfNeeded;
-(void)setTimeLastShown:(double)arg1 ;
-(void)setHideCount:(long long)arg1 ;
-(GKGameCenterViewController *)gameCenterViewController;
-(void)gameCenterViewControllerDidFinish:(id)arg1 ;
-(void)showDashboardWithState:(long long)arg1 dismiss:(/*^block*/id)arg2 ;
-(void)dismissGameCenter;
-(void)triggerAccessPointWithHandler:(/*^block*/id)arg1 ;
-(void)triggerAccessPointWithState:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)showHighlights;
-(UIWindow *)parentWindow;
-(void)setParentWindow:(UIWindow *)arg1 ;
-(CGRect)frameInScreenCoordinates;
-(void)setFrameInScreenCoordinates:(CGRect)arg1 ;
-(BOOL)isPresentingGameCenter;
-(void)setIsPresentingGameCenter:(BOOL)arg1 ;
-(void)setGameCenterViewController:(GKGameCenterViewController *)arg1 ;
-(NSObject *)privateImplementation;
-(void)setPrivateImplementation:(NSObject *)arg1 ;
-(double)timeLastShown;
@end

