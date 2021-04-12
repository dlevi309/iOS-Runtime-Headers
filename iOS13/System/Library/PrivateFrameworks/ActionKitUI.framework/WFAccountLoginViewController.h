/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;
@interface WFAccountLoginViewController : UIViewController {

	id<WFAccountLoginViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFAccountLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<WFAccountLoginViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAccountLoginViewControllerDelegate>)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithAccountClass:(Class)arg1 ;
@end

