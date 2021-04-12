/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNDataMapper.h>

@class CNContactsEnvironment, CNDonationStore, NSString;

@interface CNDonationMapper : NSObject <CNDataMapper> {

	CNContactsEnvironment* _environment;
	CNDonationStore* _donationStore;

}

@property (nonatomic,readonly) CNContactsEnvironment * environment;                    //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) CNDonationStore * donationStore;                        //@synthesize donationStore=_donationStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
+(id)log;
+(id)mapperIdentifier;
-(CNContactsEnvironment *)environment;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2 ;
-(id)contactObservableForFetchRequest:(id)arg1 ;
-(id)initWithDonationStore:(id)arg1 environment:(id)arg2 ;
-(CNDonationStore *)donationStore;
@end

