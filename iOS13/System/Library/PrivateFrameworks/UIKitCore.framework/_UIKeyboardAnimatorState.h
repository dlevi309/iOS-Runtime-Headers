/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol _UIKeyboardAnimatorState <NSObject>
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden; 
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
@required
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1;
-(UIView *)animatingView;
-(BOOL)inputViewsHidden;

@end

