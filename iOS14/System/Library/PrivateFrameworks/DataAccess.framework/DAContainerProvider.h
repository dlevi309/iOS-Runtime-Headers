/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@interface DAContainerProvider : NSObject
+(id)providerWithContactStore:(id)arg1 ;
+(id)providerWithAddressBook:(void*)arg1 ;
-(id)allContainersForAccountWithExternalIdentifier:(id)arg1 ;
-(id)allContainers;
-(id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2 ;
-(BOOL)setLastSyncDateForContainer:(id)arg1 ;
-(id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8 ;
-(void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3 ;
-(void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(BOOL)arg2 ;
@end

