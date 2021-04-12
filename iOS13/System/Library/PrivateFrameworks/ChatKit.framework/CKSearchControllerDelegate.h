/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSearchControllerDelegate <NSObject>
@optional
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1;

@required
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
-(void)searchControllerContentsDidChange:(id)arg1;
-(void)deleteMessageItem:(id)arg1;
-(UIEdgeInsets*)parentMarginInsetsForSearchController:(id)arg1;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
-(void)deleteTransferGUID:(id)arg1;
-(id)containerTraitCollectionForController:(id)arg1;
-(double)containerWidthForController:(id)arg1;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3;
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3;

@end

