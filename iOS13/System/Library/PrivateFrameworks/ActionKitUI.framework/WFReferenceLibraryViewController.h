/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIReferenceLibraryViewController.h>

@protocol WFReferenceLibraryViewControllerDelegate;
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController {

	id<WFReferenceLibraryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFReferenceLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFReferenceLibraryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFReferenceLibraryViewControllerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

