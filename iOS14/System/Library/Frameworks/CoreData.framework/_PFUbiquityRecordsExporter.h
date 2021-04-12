/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue;
@class NSString, NSDate, PFUbiquityLocation, NSLock, NSMutableDictionary, NSObject;

@interface _PFUbiquityRecordsExporter : NSObject {

	NSString* _localPeerID;
	NSDate* _lastTransactionDate;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _storeName;
	NSLock* _transactionLock;
	NSMutableDictionary* _pendingTransactionsToStoreNameAndTransactionNumber;
	BOOL _pendingTempLogMove;
	BOOL _allowTempLogStorage;
	BOOL _useLocalStorage;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _throwOptimisticLockingException;

}
-(id)init;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(id)description;
-(void)dealloc;
@end

