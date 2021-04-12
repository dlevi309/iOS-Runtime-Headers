/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@protocol SBUIBackgroundStyleTransitioning <NSObject>
@property (assign,nonatomic) long long backgroundStyle; 
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle; 
@required
-(void)setBackgroundStyle:(long long)arg1;
-(long long)backgroundStyle;
-(void)beginTransitionToBackgroundStyle:(long long)arg1;
-(void)completeTransitionToBackgroundStyle:(long long)arg1;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1;
-(BOOL)isTransitioningBackgroundStyle;

@end

