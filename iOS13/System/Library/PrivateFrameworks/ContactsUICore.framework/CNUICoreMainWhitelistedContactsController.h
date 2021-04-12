/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberWhitelistedContactsDataSource.h>

@protocol CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsModelFetching, CNUICoreContactStoreFacade, CNSchedulerProvider, CNCancelable;
@class NSArray, CNFuture, NSString;

@interface CNUICoreMainWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource> {

	NSArray* _familyMemberContactItems;
	id<CNUICoreFamilyMemberContactsObserver> _observer;
	id<CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
	id<CNUICoreContactStoreFacade> _mainContactStoreFacade;
	id<CNSchedulerProvider> _schedulerProvider;
	CNFuture* _familyMemberContactItemsFuture;
	CNFuture* _addContactsToWhitelistFuture;
	CNFuture* _updateContactsInWhitelistFuture;
	CNFuture* _deleteContactsFromWhitelistFuture;
	id<CNCancelable> _contactStoreDidChangeToken;

}

@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;              //@synthesize modelFetcher=_modelFetcher - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> mainContactStoreFacade;                   //@synthesize mainContactStoreFacade=_mainContactStoreFacade - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                               //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundOrImmediateScheduler; 
@property (nonatomic,retain) NSArray * familyMemberContactItems;                                        //@synthesize familyMemberContactItems=_familyMemberContactItems - In the implementation block
@property (nonatomic,retain) CNFuture * familyMemberContactItemsFuture;                                 //@synthesize familyMemberContactItemsFuture=_familyMemberContactItemsFuture - In the implementation block
@property (nonatomic,retain) CNFuture * addContactsToWhitelistFuture;                                   //@synthesize addContactsToWhitelistFuture=_addContactsToWhitelistFuture - In the implementation block
@property (nonatomic,retain) CNFuture * updateContactsInWhitelistFuture;                                //@synthesize updateContactsInWhitelistFuture=_updateContactsInWhitelistFuture - In the implementation block
@property (nonatomic,retain) CNFuture * deleteContactsFromWhitelistFuture;                              //@synthesize deleteContactsFromWhitelistFuture=_deleteContactsFromWhitelistFuture - In the implementation block
@property (nonatomic,readonly) id<CNCancelable> contactStoreDidChangeToken;                             //@synthesize contactStoreDidChangeToken=_contactStoreDidChangeToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer;                  //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) BOOL familyMemberContainerIsEmpty; 
+(id)controllerWithOptions:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(void)setObserver:(id<CNUICoreFamilyMemberContactsObserver>)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(long long)fetchStatus;
-(NSArray *)familyMemberContactItems;
-(void)updateWhitelistByAddingContacts:(id)arg1 ;
-(void)updateWhitelistByRemovingContacts:(id)arg1 ;
-(id)contactRepresentingItem:(id)arg1 ;
-(BOOL)familyMemberContainerIsEmpty;
-(void)updateWhitelistByUpdatingContacts:(id)arg1 ;
-(void)finishWhitelistedContactsTasks;
-(id<CNScheduler>)backgroundOrImmediateScheduler;
-(void)setupChangeNotificationResponse;
-(void)triggerContactItemsFetch;
-(void)cancelContactItemsFetch;
-(CNFuture *)familyMemberContactItemsFuture;
-(id<CNUICoreFamilyMemberContactsModelFetching>)modelFetcher;
-(id)contactItemFutureFromFetcher;
-(void)setFamilyMemberContactItemsFuture:(CNFuture *)arg1 ;
-(void)setFamilyMemberContactItems:(NSArray *)arg1 ;
-(CNFuture *)addContactsToWhitelistFuture;
-(void)setAddContactsToWhitelistFuture:(CNFuture *)arg1 ;
-(CNFuture *)updateContactsInWhitelistFuture;
-(void)setUpdateContactsInWhitelistFuture:(CNFuture *)arg1 ;
-(CNFuture *)deleteContactsFromWhitelistFuture;
-(void)setDeleteContactsFromWhitelistFuture:(CNFuture *)arg1 ;
-(id<CNUICoreContactStoreFacade>)mainContactStoreFacade;
-(id<CNCancelable>)contactStoreDidChangeToken;
-(id)initWiththOptions:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithModelFetcher:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3 ;
@end

