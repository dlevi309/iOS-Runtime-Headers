/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

@class NSArray;


@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <NSObject>
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSArray * familyMemberContactItems; 
@property (nonatomic,readonly) BOOL familyMemberContainerIsEmpty; 
@required
-(void)setObserver:(id)arg1;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(long long)fetchStatus;
-(NSArray *)familyMemberContactItems;
-(void)updateWhitelistByAddingContacts:(id)arg1;
-(void)updateWhitelistByRemovingContacts:(id)arg1;
-(id)contactRepresentingItem:(id)arg1;
-(BOOL)familyMemberContainerIsEmpty;
-(void)updateWhitelistByUpdatingContacts:(id)arg1;
-(void)finishWhitelistedContactsTasks;

@end

