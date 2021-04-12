/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNContact, CNMutableContact, NSMutableArray, CNContactStore, CNGroup, CNContainer, CNPolicy;

@interface CNUIContactSaveConfiguration : NSObject {

	BOOL _ignoresParentalRestrictions;
	BOOL _saveWasAuthorized;
	CNContact* _contact;
	CNMutableContact* _mutableContact;
	CNMutableContact* _shadowCopyOfReadonlyContact;
	NSMutableArray* _editingLinkedContacts;
	CNContactStore* _contactStore;
	CNGroup* _parentGroup;
	CNContainer* _parentContainer;
	CNPolicy* _policy;

}

@property (nonatomic,readonly) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact;                           //@synthesize mutableContact=_mutableContact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * shadowCopyOfReadonlyContact;              //@synthesize shadowCopyOfReadonlyContact=_shadowCopyOfReadonlyContact - In the implementation block
@property (nonatomic,readonly) NSMutableArray * editingLinkedContacts;                      //@synthesize editingLinkedContacts=_editingLinkedContacts - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNGroup * parentGroup;                                       //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) CNContainer * parentContainer;                               //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,readonly) CNPolicy * policy;                                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) BOOL ignoresParentalRestrictions;                            //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (nonatomic,readonly) BOOL saveWasAuthorized;                                      //@synthesize saveWasAuthorized=_saveWasAuthorized - In the implementation block
-(CNPolicy *)policy;
-(CNContact *)contact;
-(CNContactStore *)contactStore;
-(CNGroup *)parentGroup;
-(BOOL)ignoresParentalRestrictions;
-(CNMutableContact *)mutableContact;
-(NSMutableArray *)editingLinkedContacts;
-(id)initWithContact:(id)arg1 mutableContact:(id)arg2 shadowCopyOfReadonlyContact:(id)arg3 editingLinkedContacts:(id)arg4 contactStore:(id)arg5 parentGroup:(id)arg6 parentContainer:(id)arg7 policy:(id)arg8 ignoresParentalRestrictions:(BOOL)arg9 saveWasAuthorized:(BOOL)arg10 ;
-(CNMutableContact *)shadowCopyOfReadonlyContact;
-(CNContainer *)parentContainer;
-(BOOL)saveWasAuthorized;
@end

