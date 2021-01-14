/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol UIViewControllerKeyboardContextTransitioning <NSObject>
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
@required
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(id<UIViewControllerContextTransitioning>)mainContext;
-(CGRect)toKeyboardFrame;

@end

