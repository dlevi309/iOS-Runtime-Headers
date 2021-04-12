/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsObserver.h>
#import <libobjc.A.dylib/CNUICoreFamilyMemberWhitelistedContactsDataSource.h>

@protocol CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUICoreContactStoreFacade, CNSchedulerProvider, CNUICoreFamilyInfoFetching, CNCancelable;
@class NSArray, CNUICoreContactTypeAssessor, CNUICoreContactEditingSession, NSString;

@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject <CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource> {

	id<CNUICoreFamilyMemberContactsObserver> _observer;
	id<CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;
	id<CNUICoreContactStoreFacade> _mainContactStore;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNUICoreFamilyInfoFetching> _familyInfoRetriever;
	CNUICoreContactTypeAssessor* _contactTypeAssessor;
	CNUICoreContactEditingSession* _editingSession;
	NSArray* _familyMemberContactItemsSnapshot;
	id<CNCancelable> _endEditingNotificationToken;

}

@property (nonatomic,readonly) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> mainContactStore;                               //@synthesize mainContactStore=_mainContactStore - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                     //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyInfoFetching> familyInfoRetriever;                            //@synthesize familyInfoRetriever=_familyInfoRetriever - In the implementation block
@property (nonatomic,readonly) CNUICoreContactTypeAssessor * contactTypeAssessor;                             //@synthesize contactTypeAssessor=_contactTypeAssessor - In the implementation block
@property (nonatomic,retain) CNUICoreContactEditingSession * editingSession;                                  //@synthesize editingSession=_editingSession - In the implementation block
@property (nonatomic,retain) NSArray * familyMemberContactItemsSnapshot;                                      //@synthesize familyMemberContactItemsSnapshot=_familyMemberContactItemsSnapshot - In the implementation block
@property (nonatomic,retain) id<CNCancelable> endEditingNotificationToken;                                    //@synthesize endEditingNotificationToken=_endEditingNotificationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer;                        //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSArray * familyMemberContactItems; 
@property (nonatomic,readonly) BOOL familyMemberContainerIsEmpty; 
+(id)modelBuilderForAddedContacts:(id)arg1 withContactTypeAssessor:(id)arg2 ;
+(id)modelBuilderForContacts:(id)arg1 withContactTypeAssessor:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setObserver:(id<CNUICoreFamilyMemberContactsObserver>)arg1 ;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(id<CNUICoreFamilyMemberWhitelistedContactsDataSource>)dataSource;
-(long long)fetchStatus;
-(void)familyMemberContactItemsDidChange;
-(NSArray *)familyMemberContactItems;
-(void)updateWhitelistByAddingContacts:(id)arg1 ;
-(void)updateWhitelistByRemovingContacts:(id)arg1 ;
-(id)contactRepresentingItem:(id)arg1 ;
-(CNUICoreContactEditingSession *)editingSession;
-(void)dealloc;
-(id<CNUICoreContactStoreFacade>)mainContactStore;
-(id)initWithDataSource:(id)arg1 familyInfoRetriever:(id)arg2 schedulerProvider:(id)arg3 ;
-(id<CNCancelable>)endEditingNotificationToken;
-(id<CNUICoreFamilyInfoFetching>)familyInfoRetriever;
-(void)notifyObserverContactItemsChange;
-(void)executeBlockIfEditingSessionNotInProgress:(/*^block*/id)arg1 ;
-(void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)arg1 ;
-(NSArray *)familyMemberContactItemsSnapshot;
-(void)setFamilyMemberContactItemsSnapshot:(NSArray *)arg1 ;
-(id)familyMemberContactItemsFromDataSource;
-(void)setEditingSession:(CNUICoreContactEditingSession *)arg1 ;
-(BOOL)familyMemberContainerIsEmpty;
-(id)familyMemberContactItemsFromDataSourceAugmentedWithInMemoryEdits;
-(id)contactTypeAssesor;
-(void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)arg1 ;
-(void)startEditingSessionIfNecessary;
-(void)persistInMemoryContactsWhitelistState;
-(void)updateWhitelistByUpdatingContacts:(id)arg1 ;
-(void)finishPersistenceOfInMemoryContactsWhitelistState;
-(void)setEndEditingNotificationToken:(id<CNCancelable>)arg1 ;
-(void)flushEditingSession;
-(void)finishWhitelistedContactsTasks;
-(id)initWithDataSource:(id)arg1 schedulerProvider:(id)arg2 ;
-(CNUICoreContactTypeAssessor *)contactTypeAssessor;
@end

