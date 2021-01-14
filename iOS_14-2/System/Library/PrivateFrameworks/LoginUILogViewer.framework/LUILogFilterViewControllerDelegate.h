/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

