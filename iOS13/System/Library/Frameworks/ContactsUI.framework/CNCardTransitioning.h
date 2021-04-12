/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class UIView, UIImage;


@protocol CNCardTransitioning <NSObject>
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
@optional
-(UIView *)transitioningContentView;

@required
-(UIView *)transitioningView;
-(CGRect)transitioningFrame;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1;

@end

