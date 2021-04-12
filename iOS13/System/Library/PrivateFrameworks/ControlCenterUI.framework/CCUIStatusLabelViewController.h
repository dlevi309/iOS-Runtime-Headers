/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CCUIStatusLabelViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CCUIStatusLabelViewControllerDelegate>)arg1 ;
-(unsigned long long)verticalAlignment;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_advancePresentationState;
-(void)_resetPresentationStateAnimated:(BOOL)arg1 ;
-(void)_fadeOutStatusLabel:(id)arg1 ;
-(void)_notifyDelegateDidFinishStatusUpdates;
-(unsigned long long)_advancePresentationStateFromReady;
-(unsigned long long)_advancePresentationStateFromFadeIn;
-(unsigned long long)_advancePresentationStateFromPresenting;
-(unsigned long long)_advancePresentationStateFromFadeOut;
-(void)_notifyDelegateWillBeginStatusUpdates;
-(void)_fadeInStatusLabel:(id)arg1 ;
@end

