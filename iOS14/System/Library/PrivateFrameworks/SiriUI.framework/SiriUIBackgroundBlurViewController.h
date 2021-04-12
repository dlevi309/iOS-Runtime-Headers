/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUIBackgroundBlurViewControllerDelegate;
@class SiriUIBackgroundBlurView;

@interface SiriUIBackgroundBlurViewController : UIViewController {

	BOOL _backgroundBlurIsVisible;
	SiriUIBackgroundBlurView* _backgroundBlurView;
	long long _backgroundBlurVisibleReason;
	id<SiriUIBackgroundBlurViewControllerDelegate> _backgroundBlurViewControllerDelegate;

}

@property (nonatomic,retain) SiriUIBackgroundBlurView * backgroundBlurView;                                                           //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
@property (assign,nonatomic) BOOL backgroundBlurIsVisible;                                                                            //@synthesize backgroundBlurIsVisible=_backgroundBlurIsVisible - In the implementation block
@property (assign,nonatomic) long long backgroundBlurVisibleReason;                                                                   //@synthesize backgroundBlurVisibleReason=_backgroundBlurVisibleReason - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate;              //@synthesize backgroundBlurViewControllerDelegate=_backgroundBlurViewControllerDelegate - In the implementation block
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(SiriUIBackgroundBlurView *)backgroundBlurView;
-(void)viewDidLoad;
-(void)setBackgroundBlurView:(SiriUIBackgroundBlurView *)arg1 ;
-(void)setBackgroundBlurViewControllerDelegate:(id<SiriUIBackgroundBlurViewControllerDelegate>)arg1 ;
-(void)setBackgroundBlurIsVisible:(BOOL)arg1 ;
-(void)setBackgroundBlurVisibleReason:(long long)arg1 ;
-(BOOL)backgroundBlurIsVisible;
-(long long)backgroundBlurVisibleReason;
-(id<SiriUIBackgroundBlurViewControllerDelegate>)backgroundBlurViewControllerDelegate;
-(void)requestBackgroundBlurVisible:(BOOL)arg1 forReason:(long long)arg2 ;
@end

