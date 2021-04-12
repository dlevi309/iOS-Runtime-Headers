/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIReferenceLibraryViewController.h>

@protocol TSWPReferenceLibraryViewControllerDelegate;
@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController {

	id<TSWPReferenceLibraryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TSWPReferenceLibraryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TSWPReferenceLibraryViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
@end

