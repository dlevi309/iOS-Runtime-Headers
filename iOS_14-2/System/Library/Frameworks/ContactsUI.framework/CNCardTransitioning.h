/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransitioningImageVisible:(BOOL)arg1;
-(CGRect)transitioningContentFrame;
-(CGRect)transitioningFrame;
-(CGRect)transitioningImageFrame;
-(UIImage *)transitioningImage;
-(UIView *)transitioningView;
-(BOOL)transitioningImageVisible;

@end

