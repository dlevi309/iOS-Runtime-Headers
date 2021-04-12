/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol EMCollectionChangeObserver <NSObject>
@optional
-(void)collectionDidFinishInitialLoad:(id)arg1;
-(void)didFinishRecoveryForCollection:(id)arg1;
-(void)didFinishRemoteSearchForCollection:(id)arg1;

@required
-(void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;
-(void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;
-(void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;
-(void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;
-(void)collection:(id)arg1 changedItemIDs:(id)arg2;
-(void)collection:(id)arg1 deletedItemIDs:(id)arg2;
-(void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;

@end

