/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary, NSHashTable, IMBusinessNameManager;

@interface IMHandleRegistrar : NSObject {

	NSMutableDictionary* _siblingsMap;
	NSHashTable* _allIMHandles;
	NSMutableDictionary* _IDToHandlesMap;
	NSMutableDictionary* _CNIDToHandlesMap;
	IMBusinessNameManager* _businessNameManager;

}
+(id)sharedInstance;
-(id)IDToHandlesMap;
-(void)_removeIMHandleToIDToHandlesMap:(id)arg1 ;
-(void)_handleUpdateContactChangeHistoryEvent:(id)arg1 ;
-(void)clearCNIDToHandlesMap;
-(id)init;
-(void)_handleDropEverythingChangeHistoryEvent;
-(void)_buildSiblingsForIMHandle:(id)arg1 ;
-(void)removeHandleFromCNIDMap:(id)arg1 withCNID:(id)arg2 ;
-(void)_addIMHandleToIDToHandlesMap:(id)arg1 ;
-(void)addHandleToCNIDMap:(id)arg1 CNContact:(id)arg2 ;
-(id)getIDsForAllIMHandles;
-(id)_existingAccountSiblingsForHandle:(id)arg1 ;
-(void)_handleDeleteContactChangeHistoryEvent:(id)arg1 ;
-(id)getIDsForFinalBatch;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg1 ;
-(void)_postContactChangeHistoryEventClientNotifications;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg1 ;
-(id)handlesForCNIdentifier:(id)arg1 ;
-(void)_addressBookChanged;
-(id)allIMHandles;
-(id)getIDsForInitialBatch;
-(void)processContactChangeHistoryEventWithHandleIDs:(id)arg1 andCNContact:(id)arg2 ;
-(void)registerIMHandle:(id)arg1 ;
-(id)CNIDToHandlesMap;
-(void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2 ;
-(void)unregisterIMHandle:(id)arg1 ;
-(void)_handleAddContactChangeHistoryEvent:(id)arg1 ;
-(id)_existingChatSiblingsForHandle:(id)arg1 ;
-(void)_dumpOutAllIMHandles;
-(id)getIMHandlesForID:(id)arg1 ;
-(id)siblingsForIMHandle:(id)arg1 ;
-(void)clearSiblingCacheForIMHandle:(id)arg1 ;
-(id)_chatSiblingsForHandle:(id)arg1 ;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)_accountSiblingsForHandle:(id)arg1 ;
@end

