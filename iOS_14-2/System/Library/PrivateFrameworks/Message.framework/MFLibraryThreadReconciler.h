/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class EDPersistenceHookRegistry, EDPersistence, EDPersistenceDatabase, EDThreadPersistence;

@interface MFLibraryThreadReconciler : NSObject {

	EDPersistenceHookRegistry* _hookRegistry;
	EDPersistence* _persistence;
	EDPersistenceDatabase* _database;
	EDThreadPersistence* _threadPersistence;

}
-(void)reconcileAllObjectsWithWindow:(id)arg1 ;
-(id)initWithHookRegistry:(id)arg1 persistence:(id)arg2 ;
-(void)reconcileWithThreadsWithConversationIDs:(id)arg1 window:(id)arg2 ;
@end

