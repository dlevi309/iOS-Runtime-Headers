/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityImportOperation.h>
#import <libobjc.A.dylib/NSManagedObjectContextFaultingDelegate.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, PFUbiquityTransactionLog, PFUbiquitySwitchboardEntry, NSMutableSet, PFUbiquityKnowledgeVector, NSMutableDictionary, PFUbiquityImportContext, NSError, NSString;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {

	NSManagedObjectContext* _moc;
	NSPersistentStoreCoordinator* _psc;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquitySwitchboardEntry* _entry;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	PFUbiquityKnowledgeVector* _logScore;
	NSMutableDictionary* _resolvedConflicts;
	BOOL _lockedExistingCoord;
	PFUbiquityKnowledgeVector* _initialStoreKnowledgeVector;
	PFUbiquityKnowledgeVector* _updatedStoreKnowledgeVector;
	PFUbiquityImportContext* _importContext;
	BOOL _success;
	BOOL _transactionDidRollback;
	BOOL _wroteKV;
	NSError* _operationError;
	NSMutableDictionary* _relationshipsToObjectIDsToCheck;

}

@property (assign) NSObject*<_PFUbiquityRecordImportOperationDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(NSObject*<_PFUbiquityRecordImportOperationDelegate>)delegate;
-(id)retainedDelegate;
-(void)respondToStoreTransactionStateChangeNotification:(id)arg1 ;
-(void)setDelegate:(NSObject*<_PFUbiquityRecordImportOperationDelegate>)arg1 ;
-(NSString *)description;
-(id)copy;
-(void)main;
-(void)cancel;
-(void)dealloc;
@end

