/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKEditItemViewControllerProtocol
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
@optional
-(void)saveAndDismissWithExtremePrejudice;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id)arg1;
-(BOOL)presentModally;
-(void)setPresentModally:(BOOL)arg1;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(void)setEditItemShouldBeAskedForInjectableViewController:(BOOL)arg1;
-(BOOL)useCustomBackButton;
-(void)setUseCustomBackButton:(BOOL)arg1;

@end

