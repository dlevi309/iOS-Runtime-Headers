/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol UIPopoverPresentationControllerDelegate;
@class UIViewController, NSString;

@interface CACPopoverPresentingViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	id<UIPopoverPresentationControllerDelegate> _popoverPresentationDelegate;
	UIViewController* _viewControllerInPopover;
	CGRect _portraitUpSourceRect;

}

@property (assign,nonatomic,__weak) id<UIPopoverPresentationControllerDelegate> popoverPresentationDelegate;              //@synthesize popoverPresentationDelegate=_popoverPresentationDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerInPopover;                                                  //@synthesize viewControllerInPopover=_viewControllerInPopover - In the implementation block
@property (assign,nonatomic) CGRect portraitUpSourceRect;                                                                 //@synthesize portraitUpSourceRect=_portraitUpSourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(UIViewController *)viewControllerInPopover;
-(CGRect)portraitUpSourceRect;
-(id<UIPopoverPresentationControllerDelegate>)popoverPresentationDelegate;
-(void)setPopoverPresentationDelegate:(id<UIPopoverPresentationControllerDelegate>)arg1 ;
-(void)setViewControllerInPopover:(UIViewController *)arg1 ;
-(void)setPortraitUpSourceRect:(CGRect)arg1 ;
@end

