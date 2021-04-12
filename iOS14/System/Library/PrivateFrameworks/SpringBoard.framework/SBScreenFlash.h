/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithScreen:(id)arg1 ;
-(void)_tearDown;
-(void)flashColor:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2 ;
-(void)_orderWindowOut:(id)arg1 ;
-(void)_createUIWithColor:(id)arg1 ;
-(void)flashWhiteWithCompletion:(/*^block*/id)arg1 ;
@end

