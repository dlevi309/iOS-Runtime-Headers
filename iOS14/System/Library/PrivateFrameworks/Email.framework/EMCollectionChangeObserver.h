/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
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

