/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIReferenceLibraryViewController.h>

@protocol WFReferenceLibraryViewControllerDelegate;
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController {

	id<WFReferenceLibraryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFReferenceLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFReferenceLibraryViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<WFReferenceLibraryViewControllerDelegate>)arg1 ;
@end

