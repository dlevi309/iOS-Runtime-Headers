/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

