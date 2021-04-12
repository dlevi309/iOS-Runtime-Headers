/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/


@protocol LUILogFilterViewControllerDelegate <NSObject>
@required
-(void)logFilterViewController:(id)arg1 didAddPredicates:(id)arg2;
-(void)logFilterViewController:(id)arg1 didDeletePredicate:(id)arg2;
-(id)currentPredicates:(id)arg1;
-(void)logFilterViewControllerApplyButtonTapped:(id)arg1;
-(BOOL)logFilterViewControllerShouldAllowTextEditing:(id)arg1;

@end

