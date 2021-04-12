/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;
@interface WFAccountLoginViewController : UIViewController {

	id<WFAccountLoginViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFAccountLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFAccountLoginViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAccountLoginViewControllerDelegate>)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithAccountClass:(Class)arg1 ;
@end

