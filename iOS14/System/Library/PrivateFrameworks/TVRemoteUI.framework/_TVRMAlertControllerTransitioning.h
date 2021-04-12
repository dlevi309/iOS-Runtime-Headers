/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(BOOL)isPresentation;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(UIView *)contentView;
-(void)setIsPresentation:(BOOL)arg1 ;
@end

