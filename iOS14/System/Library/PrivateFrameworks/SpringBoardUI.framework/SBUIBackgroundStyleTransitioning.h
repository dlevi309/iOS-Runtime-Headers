/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@protocol SBUIBackgroundStyleTransitioning <NSObject>
@property (assign,nonatomic) long long backgroundStyle; 
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle; 
@required
-(void)updateBackgroundStyleTransitionProgress:(double)arg1;
-(void)completeTransitionToBackgroundStyle:(long long)arg1;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1;
-(void)beginTransitionToBackgroundStyle:(long long)arg1;
-(BOOL)isTransitioningBackgroundStyle;

@end

