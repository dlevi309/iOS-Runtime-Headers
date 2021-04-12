/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSearchControllerDelegate <NSObject>
@optional
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1;

@required
-(UIEdgeInsets*)parentMarginInsetsForSearchController:(id)arg1;
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3;
-(double)containerWidthForController:(id)arg1;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
-(void)deleteTransferGUID:(id)arg1;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
-(void)searchControllerContentsDidChange:(id)arg1;
-(void)deleteMessageItem:(id)arg1;
-(double)widthForDeterminingAvatarVisibility;
-(id)containerTraitCollectionForController:(id)arg1;

@end

