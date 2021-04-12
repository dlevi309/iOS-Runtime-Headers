/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface WBSTabDialogManager : NSObject {

	NSMutableDictionary* _webProcessIDToDialogSetMapping;
	NSMutableDictionary* _tabIDToDialogQueueMapping;
	unsigned long long _queueCapacity;

}
-(long long)_enqueueDialog:(id)arg1 ;
-(id)init;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 context:(id)arg2 ;
-(id)_dialogBlockingWebProcessID:(int)arg1 ;
-(id)_queueForTabID:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_dismissDialog:(id)arg1 withResponse:(id)arg2 ;
-(void)presentNextDialogForSlot:(SCD_Struct_WB114)arg1 ;
-(void)cancelAllDialogsBlockingSlot:(SCD_Struct_WB114)arg1 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 ;
-(id)description;
-(id)_setForWebProcessID:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)cancelAllDialogsWithContext:(id)arg1 ;
-(void)_cancelDialogsInQueue:(id)arg1 tabID:(unsigned long long)arg2 context:(id)arg3 ;
-(void)enqueueOrPresentDialog:(id)arg1 inSlot:(SCD_Struct_WB114)arg2 ;
-(void)dismissCurrentDialogForTabID:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)enqueueOrPresentDialogInSlot:(SCD_Struct_WB114)arg1 presentationBlock:(/*^block*/id)arg2 dismissalBlock:(/*^block*/id)arg3 blocksWebProcessUntilDismissed:(BOOL)arg4 ;
-(void)cancelAllDialogsBlockingWebProcessID:(int)arg1 ;
-(id)_dialogBlockingSlot:(SCD_Struct_WB114)arg1 ;
@end

