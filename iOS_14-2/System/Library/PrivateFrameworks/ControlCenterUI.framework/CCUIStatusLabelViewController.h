/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol CCUIStatusLabelViewControllerDelegate;
@class CCUIStatusUpdateQueue, NSArray, NSTimer;

@interface CCUIStatusLabelViewController : UIViewController {

	CCUIStatusUpdateQueue* _updateQueue;
	NSArray* _statusLabels;
	unsigned long long _currentStatusLabelIndex;
	unsigned long long _presentationState;
	NSTimer* _presentationTimer;
	id<CCUIStatusLabelViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCUIStatusLabelViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) unsigned long long verticalAlignment; 
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)_notifyDelegateDidFinishStatusUpdates;
-(id<CCUIStatusLabelViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_resetPresentationStateAnimated:(BOOL)arg1 ;
-(void)_fadeOutStatusLabel:(id)arg1 ;
-(void)setDelegate:(id<CCUIStatusLabelViewControllerDelegate>)arg1 ;
-(void)_notifyDelegateWillBeginStatusUpdates;
-(unsigned long long)_advancePresentationStateFromFadeOut;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_advancePresentationState;
-(unsigned long long)_advancePresentationStateFromReady;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)verticalAlignment;
-(void)_fadeInStatusLabel:(id)arg1 ;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
-(unsigned long long)_advancePresentationStateFromPresenting;
-(unsigned long long)_advancePresentationStateFromFadeIn;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

