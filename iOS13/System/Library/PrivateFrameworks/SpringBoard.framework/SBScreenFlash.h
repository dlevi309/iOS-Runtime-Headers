/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableArray, UIScreen, UIWindow, UIView;

@interface SBScreenFlash : NSObject {

	NSMutableArray* _flashCompletionBlocks;
	UIScreen* _screen;
	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;

}
+(id)mainScreenFlasher;
-(void)_tearDown;
-(id)initWithScreen:(id)arg1 ;
-(void)flashColor:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2 ;
-(void)_orderWindowOut:(id)arg1 ;
-(void)_createUIWithColor:(id)arg1 ;
-(void)flashWhiteWithCompletion:(/*^block*/id)arg1 ;
@end

