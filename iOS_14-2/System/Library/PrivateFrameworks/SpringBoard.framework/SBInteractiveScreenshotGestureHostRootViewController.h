/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)invalidate;
-(void)_reloadLayerHostView;
-(void)setHostingContextID:(unsigned)arg1 pid:(int)arg2 ;
@end

