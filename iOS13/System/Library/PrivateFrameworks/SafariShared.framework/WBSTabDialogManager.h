/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface WBSTabDialogManager : NSObject {

	NSMutableDictionary* _webProcessIDToDialogSetMapping;
	NSMutableDictionary* _tabIDToDialogQueueMapping;
	unsigned long long _queueCapacity;

}
-(id)init;
-(id)description;
-(void)presentNextDialogForSlot:(SCD_Struct_WB73)arg1 ;
-(void)enqueueOrPresentDialog:(id)arg1 inSlot:(SCD_Struct_WB73)arg2 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 context:(id)arg2 ;
-(void)cancelAllDialogsBlockingSlot:(SCD_Struct_WB73)arg1 ;
-(void)cancelAllDialogsWithContext:(id)arg1 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 ;
-(void)dismissCurrentDialogForTabID:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(long long)_enqueueDialog:(id)arg1 ;
-(id)_queueForTabID:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_dismissDialog:(id)arg1 withResponse:(id)arg2 ;
-(id)_dialogBlockingSlot:(SCD_Struct_WB73)arg1 ;
-(id)_dialogBlockingWebProcessID:(int)arg1 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_cancelDialogsInQueue:(id)arg1 tabID:(unsigned long long)arg2 context:(id)arg3 ;
-(id)_setForWebProcessID:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)enqueueOrPresentDialogInSlot:(SCD_Struct_WB73)arg1 presentationBlock:(/*^block*/id)arg2 dismissalBlock:(/*^block*/id)arg3 blocksWebProcessUntilDismissed:(BOOL)arg4 ;
-(void)cancelAllDialogsBlockingWebProcessID:(int)arg1 ;
@end

