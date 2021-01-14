/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol SYSessionDelegate <NSObject>
@optional
-(void)resetDataStoreForSyncSession:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2;
-(BOOL)syncSession:(id)arg1 restartChanges:(id*)arg2;
-(void)syncSession:(id)arg1 successfullySynced:(id)arg2;

@required
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end

