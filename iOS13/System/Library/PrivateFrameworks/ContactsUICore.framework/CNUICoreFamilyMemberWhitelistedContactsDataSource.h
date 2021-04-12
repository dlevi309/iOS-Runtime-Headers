/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

@class NSArray;


@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <NSObject>
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSArray * familyMemberContactItems; 
@property (nonatomic,readonly) BOOL familyMemberContainerIsEmpty; 
@required
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(void)setObserver:(id)arg1;
-(long long)fetchStatus;
-(NSArray *)familyMemberContactItems;
-(void)updateWhitelistByAddingContacts:(id)arg1;
-(void)updateWhitelistByRemovingContacts:(id)arg1;
-(id)contactRepresentingItem:(id)arg1;
-(BOOL)familyMemberContainerIsEmpty;
-(void)updateWhitelistByUpdatingContacts:(id)arg1;
-(void)finishWhitelistedContactsTasks;

@end

