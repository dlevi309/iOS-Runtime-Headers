/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

@class NSNumber;


@protocol CNUICoreFamilyMemberContactsDataSource <NSObject>
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSNumber * countOfFamilyMemberContacts; 
@required
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(void)setObserver:(id)arg1;
-(long long)fetchStatus;
-(NSNumber *)countOfFamilyMemberContacts;
-(void)updateListByAddingContacts:(id)arg1;
-(void)updateListByRemovingContacts:(id)arg1;

@end

