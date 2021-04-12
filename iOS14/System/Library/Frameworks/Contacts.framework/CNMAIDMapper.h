/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNDataMapper.h>

@class CLSDataStore, NSString;

@interface CNMAIDMapper : NSObject <CNDataMapper> {

	CLSDataStore* _dataStore;

}

@property (nonatomic,readonly) CLSDataStore * dataStore;                               //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
-(CLSDataStore *)dataStore;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)init;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)contactObservableForFetchRequest:(id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)defaultContainerIdentifier;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(NSString *)description;
-(id)initWithDataStore:(id)arg1 environment:(id)arg2 ;
@end

