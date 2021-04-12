/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFAccountsProvider;
@class EDPersistenceHookRegistry, EDPersistenceDatabase, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer;

@interface MFLibraryMessageReconciler : NSObject {

	EDPersistenceHookRegistry* _hookRegistry;
	EDPersistenceDatabase* _database;
	MFMailMessageLibrary* _library;
	id<MFAccountsProvider> _accountsProvider;
	MFMailMessageLibraryQueryTransformer* _transformer;

}

@property (nonatomic,readonly) unsigned long long numberOfUnreconciledMessages; 
-(id)initWithLibrary:(id)arg1 accountsProvider:(id)arg2 ;
-(unsigned long long)numberOfUnreconciledMessages;
-(void)reconcileAllObjectsWithWindow:(id)arg1 ;
-(id)reconcileWithMessageReconciliationQueries:(id)arg1 window:(id)arg2 ;
-(id)reconcileWithThreadReconciliationQueries:(id)arg1 window:(id)arg2 ;
-(id)reconcileInboxMessagesWithWindow:(id)arg1 ;
@end

