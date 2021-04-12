/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory {

	BOOL _shouldScheduleMaintenance;

}

@property (assign,nonatomic) BOOL shouldScheduleMaintenance;              //@synthesize shouldScheduleMaintenance=_shouldScheduleMaintenance - In the implementation block
-(id)init;
-(void)_removeAllVisitedLinks;
-(void)setShouldScheduleMaintenance:(BOOL)arg1 ;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1 ;
-(BOOL)shouldScheduleMaintenance;
@end

