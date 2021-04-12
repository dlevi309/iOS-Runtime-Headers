/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAContainerProvider.h>

@interface _DAABLegacyContainerProvider : DAContainerProvider {

	void* _addressBook;

}

@property (nonatomic,readonly) void* addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(void)dealloc;
-(id)allContainers;
-(id)initWithAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(id)allContainersForAccountWithExternalIdentifier:(id)arg1 ;
-(id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2 ;
-(id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8 ;
-(void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3 ;
-(void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(BOOL)arg2 ;
-(BOOL)setLastSyncDateForContainer:(id)arg1 ;
@end

