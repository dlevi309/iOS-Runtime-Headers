/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest {

	unsigned long long _eventCount;
	const SCD_Struct_UI74* _events;
	UIWindow* _window;
	unsigned long long _swipeAxis;

}

@property (assign,nonatomic,__weak) UIWindow * window;                  //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) unsigned long long swipeAxis;              //@synthesize swipeAxis=_swipeAxis - In the implementation block
-(void)setWindow:(UIWindow *)arg1 ;
-(unsigned long long)swipeAxis;
-(void)setSwipeAxis:(unsigned long long)arg1 ;
-(void)main;
-(UIWindow *)window;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

