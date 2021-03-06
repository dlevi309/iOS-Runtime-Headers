/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@protocol SBKSyncTransactionProcessing <NSObject>
@optional
-(id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToUpdate:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToDelete:(id)arg2;
-(long long)transaction:(id)arg1 conflictDetectionTypeForTransactionDetectionType:(long long)arg2;
-(id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;

@required
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;

@end

