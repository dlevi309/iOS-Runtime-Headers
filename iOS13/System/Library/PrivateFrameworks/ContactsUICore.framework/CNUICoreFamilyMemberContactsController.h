/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsDataSource.h>

@protocol CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsUpdating, CNSchedulerProvider, CNCancelable;
@class NSNumber, FAFamilyMember, CNFuture, NSString;

@interface CNUICoreFamilyMemberContactsController : NSObject <CNUICoreFamilyMemberContactsDataSource> {

	NSNumber* _countOfFamilyMemberContacts;
	id<CNUICoreFamilyMemberContactsObserver> _observer;
	FAFamilyMember* _familyMember;
	id<CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
	id<CNUICoreFamilyMemberContactsUpdating> _familyMemberContactsUpdator;
	id<CNSchedulerProvider> _schedulerProvider;
	CNFuture* _countOfFamilyMemberContactsFuture;
	CNFuture* _updateContactListByAddingContactsFuture;
	CNFuture* _updateContactListByRemovingContactsFuture;
	id<CNCancelable> _contactStoreDidChangeToken;

}

@property (nonatomic,readonly) FAFamilyMember * familyMember;                                                     //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;                        //@synthesize modelFetcher=_modelFetcher - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator;              //@synthesize familyMemberContactsUpdator=_familyMemberContactsUpdator - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                         //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) NSNumber * countOfFamilyMemberContacts;                                              //@synthesize countOfFamilyMemberContacts=_countOfFamilyMemberContacts - In the implementation block
@property (nonatomic,retain) CNFuture * countOfFamilyMemberContactsFuture;                                        //@synthesize countOfFamilyMemberContactsFuture=_countOfFamilyMemberContactsFuture - In the implementation block
@property (nonatomic,retain) CNFuture * updateContactListByAddingContactsFuture;                                  //@synthesize updateContactListByAddingContactsFuture=_updateContactListByAddingContactsFuture - In the implementation block
@property (nonatomic,retain) CNFuture * updateContactListByRemovingContactsFuture;                                //@synthesize updateContactListByRemovingContactsFuture=_updateContactListByRemovingContactsFuture - In the implementation block
@property (nonatomic,retain) id<CNCancelable> contactStoreDidChangeToken;                                         //@synthesize contactStoreDidChangeToken=_contactStoreDidChangeToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer;                            //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long fetchStatus; 
+(id)contactByRemovingSensitiveDataFromContact:(id)arg1 ;
+(id)propertyKeysContainingSenstiveData;
-(id)init;
-(void)dealloc;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(void)setObserver:(id<CNUICoreFamilyMemberContactsObserver>)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(FAFamilyMember *)familyMember;
-(long long)fetchStatus;
-(NSNumber *)countOfFamilyMemberContacts;
-(void)updateListByAddingContacts:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)setupChangeNotificationResponse;
-(id<CNUICoreFamilyMemberContactsModelFetching>)modelFetcher;
-(id<CNUICoreFamilyMemberContactsUpdating>)familyMemberContactsUpdator;
-(id<CNCancelable>)contactStoreDidChangeToken;
-(id)initWithFamilyMember:(id)arg1 modelFetcher:(id)arg2 familyMemberContactsUpdator:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)triggerCountOfFamilyMemberContactsFetch;
-(void)cancelCountOfFamilyMemberContactsFetch;
-(CNFuture *)countOfFamilyMemberContactsFuture;
-(id)countOfFamilyMemberContactsFutureFromFetcher;
-(void)setCountOfFamilyMemberContactsFuture:(CNFuture *)arg1 ;
-(void)setCountOfFamilyMemberContacts:(NSNumber *)arg1 ;
-(CNFuture *)updateContactListByAddingContactsFuture;
-(void)setUpdateContactListByAddingContactsFuture:(CNFuture *)arg1 ;
-(CNFuture *)updateContactListByRemovingContactsFuture;
-(void)setUpdateContactListByRemovingContactsFuture:(CNFuture *)arg1 ;
-(void)updateListByRemovingContacts:(id)arg1 ;
-(void)setContactStoreDidChangeToken:(id<CNCancelable>)arg1 ;
@end

