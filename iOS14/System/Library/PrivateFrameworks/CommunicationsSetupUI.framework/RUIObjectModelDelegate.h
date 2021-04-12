/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@protocol RUIObjectModelDelegate <NSObject>
@optional
-(id)viewControllerForAlertPresentation;
-(void)objectModel:(id)arg1 elementDidChange:(id)arg2;
-(void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(BOOL)arg3;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;
-(BOOL)objectModel:(id)arg1 shouldDisplayNamedElement:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
-(void)objectModelPressedBack:(id)arg1;
-(BOOL)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withName:(id)arg5;
-(BOOL)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withURL:(id)arg5 httpMethod:(id)arg6;
-(id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;
-(id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
-(Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;
-(Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;
-(Class)objectModel:(id)arg1 customTableCellClassForTableViewRow:(id)arg2;
-(void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
-(void)objectModelDidChange:(id)arg1;

@required
-(id)parentViewControllerForObjectModel:(id)arg1;

@end

