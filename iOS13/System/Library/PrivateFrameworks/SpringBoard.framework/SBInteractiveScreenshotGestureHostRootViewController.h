/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _UILayerHostView, UIScreen, NSString;

@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController <BSInvalidatable> {

	unsigned _hostingContextID;
	int _hostingPid;
	_UILayerHostView* _layerHostView;
	UIScreen* _screen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithScreen:(id)arg1 ;
-(void)_reloadLayerHostView;
-(void)setHostingContextID:(unsigned)arg1 pid:(int)arg2 ;
@end

