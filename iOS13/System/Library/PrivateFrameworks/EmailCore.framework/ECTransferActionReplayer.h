/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer
-(id)replayAction;
-(id)failActionWithError:(id)arg1 ;
-(id)_downLoadSourceMessagesInAction:(id)arg1 ;
-(id)_appendMessagesInAction:(id)arg1 ;
-(id)_transferItemsInAction:(id)arg1 isMove:(BOOL)arg2 ;
-(id)_deleteItemsInAction:(id)arg1 ;
-(id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id*)arg2 ;
@end

