/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol UIFocusedInterfaceActionPressDelegate;
@class UIInterfaceActionGroupView, UIInterfaceAction;

@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer {

	id<UIFocusedInterfaceActionPressDelegate> _pressDelegate;
	UIInterfaceActionGroupView* _actionGroupView;
	UIInterfaceAction* _interfaceActionOnPressBegan;

}

@property (assign,nonatomic,__weak) UIInterfaceAction * interfaceActionOnPressBegan;                      //@synthesize interfaceActionOnPressBegan=_interfaceActionOnPressBegan - In the implementation block
@property (assign,nonatomic,__weak) id<UIFocusedInterfaceActionPressDelegate> pressDelegate;              //@synthesize pressDelegate=_pressDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIInterfaceActionGroupView * actionGroupView;                         //@synthesize actionGroupView=_actionGroupView - In the implementation block
-(id)initWithFocusedInterfaceActionPressDelegate:(id)arg1 ;
-(void)setInterfaceActionOnPressBegan:(UIInterfaceAction *)arg1 ;
-(id<UIFocusedInterfaceActionPressDelegate>)pressDelegate;
-(UIInterfaceActionGroupView *)actionGroupView;
-(UIInterfaceAction *)interfaceActionOnPressBegan;
-(void)reset;
-(void)_gestureChanged:(id)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setPressDelegate:(id<UIFocusedInterfaceActionPressDelegate>)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setActionGroupView:(UIInterfaceActionGroupView *)arg1 ;
@end

