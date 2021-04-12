/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class WFWidgetConfigurationContainerView, WFWidgetConfigurationRemoteViewController, NSString;

@interface WFWidgetConfigurationView : UIView <UIGestureRecognizerDelegate> {

	CGSize _preferredConfigurationCardViewSize;
	WFWidgetConfigurationContainerView* _containerView;
	WFWidgetConfigurationRemoteViewController* _remoteViewController;
	CGRect _overridingCardViewFrame;

}

@property (nonatomic,retain) WFWidgetConfigurationContainerView * containerView;                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) WFWidgetConfigurationRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic) CGRect overridingCardViewFrame;                                                //@synthesize overridingCardViewFrame=_overridingCardViewFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContainerView:(WFWidgetConfigurationContainerView *)arg1 ;
-(WFWidgetConfigurationRemoteViewController *)remoteViewController;
-(void)setOverridingCardViewFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRemoteViewController:(WFWidgetConfigurationRemoteViewController *)arg1 ;
-(WFWidgetConfigurationContainerView *)containerView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)requestDismissal;
-(id)initWithFrame:(CGRect)arg1 preferredCardSize:(CGSize)arg2 ;
-(CGRect)overridingCardViewFrame;
@end

