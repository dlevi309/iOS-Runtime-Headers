/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory {

	BOOL _shouldScheduleMaintenance;

}

@property (assign,nonatomic) BOOL shouldScheduleMaintenance;              //@synthesize shouldScheduleMaintenance=_shouldScheduleMaintenance - In the implementation block
-(id)init;
-(void)setShouldScheduleMaintenance:(BOOL)arg1 ;
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1 ;
-(BOOL)shouldScheduleMaintenance;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(Class)_historyItemClass;
-(void)_removeAllVisitedLinks;
-(id)_createHistoryStore;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
@end

