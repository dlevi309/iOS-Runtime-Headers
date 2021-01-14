/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKEditItemViewControllerProtocol
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
@optional
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id)arg1;
-(BOOL)useCustomBackButton;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(BOOL)presentModally;
-(void)saveAndDismissWithExtremePrejudice;
-(void)setPresentModally:(BOOL)arg1;
-(void)setEditItemShouldBeAskedForInjectableViewController:(BOOL)arg1;
-(void)setUseCustomBackButton:(BOOL)arg1;

@end

