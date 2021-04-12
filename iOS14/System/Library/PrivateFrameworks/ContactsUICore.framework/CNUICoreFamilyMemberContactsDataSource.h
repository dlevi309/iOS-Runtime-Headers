/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

@class NSNumber;


@protocol CNUICoreFamilyMemberContactsDataSource <NSObject>
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSNumber * countOfFamilyMemberContacts; 
@required
-(void)setObserver:(id)arg1;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(long long)fetchStatus;
-(NSNumber *)countOfFamilyMemberContacts;
-(void)updateListByAddingContacts:(id)arg1;
-(void)updateListByRemovingContacts:(id)arg1;

@end

