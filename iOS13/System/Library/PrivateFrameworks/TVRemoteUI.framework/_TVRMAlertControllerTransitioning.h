/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface _TVRMAlertControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _isPresentation;
	UIView* _contentView;
	UIView* _dimmingView;

}

@property (assign,nonatomic) BOOL isPresentation;                   //@synthesize isPresentation=_isPresentation - In the implementation block
@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(BOOL)isPresentation;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(void)setIsPresentation:(BOOL)arg1 ;
@end

