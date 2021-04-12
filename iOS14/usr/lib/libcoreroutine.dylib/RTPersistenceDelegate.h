/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceDelegate <NSObject>
@optional
-(void)persistenceStore:(id)arg1 encounteredCriticalError:(id)arg2;
-(void)persistenceStore:(id)arg1 failedWithError:(id)arg2;
-(void)persistenceMigrator:(id)arg1 didStartMigratingStore:(id)arg2 withModelProvider:(id)arg3;
-(void)persistenceMigrator:(id)arg1 didFinishMigratingStore:(id)arg2 withModelProvider:(id)arg3;
-(BOOL)backupPersistenceStore:(id)arg1 error:(id*)arg2;
-(BOOL)importSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 managedObjectModel:(id)arg5 configuration:(id)arg6 error:(id*)arg7;
-(void)persistenceManager:(id)arg1 didFinishSetup:(BOOL)arg2;

@required
-(BOOL)persistenceMirroringManagerDidFinishZonePurge:(id)arg1 store:(id)arg2 context:(id)arg3 error:(id*)arg4;
-(id)mirroringOptionsForStoreWithType:(unsigned long long)arg1;
-(BOOL)store:(id)arg1 validateAppleIDs:(id)arg2;
-(BOOL)prepareStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
-(id)appleIDsForStore:(id)arg1;
-(void)persistenceManagerWillStartResetSync:(id)arg1 userInfo:(id)arg2 context:(id)arg3;
-(void)persistenceManagerDidFinishResetSync:(id)arg1 userInfo:(id)arg2;
-(id)optionsForStoreWithType:(unsigned long long)arg1 error:(id*)arg2;
-(id)remoteServerOptionsForStoreWithType:(unsigned long long)arg1;

@end

