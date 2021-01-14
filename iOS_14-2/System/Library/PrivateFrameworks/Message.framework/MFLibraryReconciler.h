/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EDProtectedDataReconciliationHookResponder.h>
#import <libobjc.A.dylib/EDDatabaseChangeHookResponder.h>

@protocol EFScheduler, EDReconciliationQueryProvider, MFAccountsProvider;
@class EDPersistenceHookRegistry, MFLibraryMessageReconciler, MFLibraryThreadReconciler, NSString;

@interface MFLibraryReconciler : NSObject <EDProtectedDataReconciliationHookResponder, EDDatabaseChangeHookResponder> {

	EDPersistenceHookRegistry* _hookRegistry;
	id<EFScheduler> _reconciliationCleanupScheduler;
	id<EDReconciliationQueryProvider> _queryProvider;
	id<MFAccountsProvider> _accountsProvider;
	MFLibraryMessageReconciler* _messageReconciler;
	MFLibraryThreadReconciler* _threadReconciler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)persistenceDidReconcileProtectedData;
-(id)initWithLibrary:(id)arg1 queryProvider:(id)arg2 accountsProvider:(id)arg3 ;
@end

