/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppTabBarController;
@class IKJSTabBar;

@interface IKAppTabBar : NSObject {

	id<IKAppTabBarController> _controller;
	IKJSTabBar* _jsTabBar;

}

@property (assign,nonatomic,__weak) IKJSTabBar * jsTabBar;                               //@synthesize jsTabBar=_jsTabBar - In the implementation block
@property (nonatomic,__weak,readonly) id<IKAppTabBarController> controller;              //@synthesize controller=_controller - In the implementation block
-(id<IKAppTabBarController>)controller;
-(IKJSTabBar *)jsTabBar;
-(void)onSelect;
-(id)initWithTabBarController:(id)arg1 ;
-(void)setJsTabBar:(IKJSTabBar *)arg1 ;
@end

