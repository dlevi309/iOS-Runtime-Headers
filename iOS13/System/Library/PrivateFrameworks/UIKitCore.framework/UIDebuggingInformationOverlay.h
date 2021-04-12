/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSMutableArray, UIWindow, UIEvent, UIDebuggingInformationOverlayViewController, UIDebuggingInformationRootTableViewController;

@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate> {

	BOOL _isFullscreen;
	BOOL _checkingTouches;
	BOOL _touchCaptureEnabled;
	NSMutableArray* _touchObservers;
	UIWindow* _inspectedWindow;
	UIEvent* _lastTouch;
	CGPoint _drawingOrigin;

}

@property (nonatomic,retain) UIEvent * lastTouch;                                                                  //@synthesize lastTouch=_lastTouch - In the implementation block
@property (assign,nonatomic) CGPoint drawingOrigin;                                                                //@synthesize drawingOrigin=_drawingOrigin - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen;                                                                    //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (nonatomic,readonly) UIDebuggingInformationOverlayViewController * overlayViewController; 
@property (nonatomic,retain) UIDebuggingInformationRootTableViewController * rootTableViewController; 
@property (assign,nonatomic) BOOL checkingTouches;                                                                 //@synthesize checkingTouches=_checkingTouches - In the implementation block
@property (assign,nonatomic) BOOL touchCaptureEnabled;                                                             //@synthesize touchCaptureEnabled=_touchCaptureEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchObservers;                                                      //@synthesize touchObservers=_touchObservers - In the implementation block
@property (nonatomic,retain) UIWindow * inspectedWindow;                                                           //@synthesize inspectedWindow=_inspectedWindow - In the implementation block
+(id)overlay;
+(void)prepareDebuggingOverlay;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setHidden:(BOOL)arg1 ;
-(UIEvent *)lastTouch;
-(BOOL)isFullscreen;
-(UIWindow *)inspectedWindow;
-(void)toggleFullscreen;
-(void)toggleVisibility;
-(UIDebuggingInformationOverlayViewController *)overlayViewController;
-(void)setInspectedWindow:(UIWindow *)arg1 ;
-(BOOL)checkingTouches;
-(NSMutableArray *)touchObservers;
-(void)setCheckingTouches:(BOOL)arg1 ;
-(void)setLastTouch:(UIEvent *)arg1 ;
-(BOOL)touchCaptureEnabled;
-(UIDebuggingInformationRootTableViewController *)rootTableViewController;
-(void)setRootTableViewController:(UIDebuggingInformationRootTableViewController *)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)setTouchCaptureEnabled:(BOOL)arg1 ;
-(void)setTouchObservers:(NSMutableArray *)arg1 ;
-(CGPoint)drawingOrigin;
-(void)setDrawingOrigin:(CGPoint)arg1 ;
@end

