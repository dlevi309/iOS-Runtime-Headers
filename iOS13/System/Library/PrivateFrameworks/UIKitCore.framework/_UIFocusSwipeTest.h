/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest {

	unsigned long long _eventCount;
	const SCD_Struct_UI63* _events;
	UIWindow* _window;
	unsigned long long _swipeAxis;

}

@property (assign,nonatomic,__weak) UIWindow * window;                  //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) unsigned long long swipeAxis;              //@synthesize swipeAxis=_swipeAxis - In the implementation block
-(void)main;
-(id)initWithIdentifier:(id)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)swipeAxis;
-(void)setSwipeAxis:(unsigned long long)arg1 ;
@end

