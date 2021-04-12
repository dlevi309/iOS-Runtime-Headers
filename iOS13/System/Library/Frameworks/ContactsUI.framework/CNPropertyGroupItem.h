/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroupItem.h>

@protocol CNPropertyGroupItemDelegate;
@class CNLabeledValue, CNCardPropertyGroup, NSString, CNContact, CNContactStore, CNUIContactsEnvironment, CNMutableContact, CNContactProperty, NSArray, NSURL;

@interface CNPropertyGroupItem : CNCardGroupItem {

	BOOL _allowsIMessage;
	BOOL _allowsPhone;
	BOOL _allowsTTY;
	BOOL _allowsEmail;
	CNLabeledValue* _labeledValue;
	CNCardPropertyGroup* _group;
	NSString* _property;
	CNContact* _contact;
	CNContactStore* _contactStore;
	id<CNPropertyGroupItemDelegate> _delegate;
	CNLabeledValue* _originalLabeledValue;
	CNUIContactsEnvironment* _environment;
	unsigned long long _policyFlags;

}

@property (nonatomic,retain) NSString * property;                                          //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;                                //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,retain) CNLabeledValue * originalLabeledValue;                        //@synthesize originalLabeledValue=_originalLabeledValue - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                      //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) unsigned long long policyFlags;                               //@synthesize policyFlags=_policyFlags - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (nonatomic,__weak,readonly) CNCardPropertyGroup * group;                         //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                              //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyGroupItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsIMessage;                                          //@synthesize allowsIMessage=_allowsIMessage - In the implementation block
@property (assign,nonatomic) BOOL allowsPhone;                                             //@synthesize allowsPhone=_allowsPhone - In the implementation block
@property (assign,nonatomic) BOOL allowsTTY;                                               //@synthesize allowsTTY=_allowsTTY - In the implementation block
@property (assign,nonatomic) BOOL allowsEmail;                                             //@synthesize allowsEmail=_allowsEmail - In the implementation block
@property (nonatomic,readonly) id normalizedValue; 
@property (nonatomic,readonly) NSString * displayValue; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSString * editingStringValue; 
@property (nonatomic,readonly) NSString * placeholderString; 
@property (nonatomic,__weak,readonly) NSArray * standardLabels; 
@property (nonatomic,__weak,readonly) NSArray * extendedLabels; 
@property (nonatomic,__weak,readonly) NSArray * promotedExtendedLabels; 
@property (nonatomic,readonly) NSURL * defaultActionURL; 
@property (nonatomic,readonly) BOOL modified; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly; 
@property (nonatomic,readonly) BOOL supportsLabel; 
@property (nonatomic,readonly) BOOL canRemove; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
+(Class)classForProperty:(id)arg1 ;
+(id)initialValueForLabel:(id)arg1 group:(id)arg2 ;
+(id)emptyValueForLabel:(id)arg1 ;
+(void)deleteCoreRecentsEntriesMatchingProperty:(id)arg1 recentsManager:(id)arg2 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
+(id)newPropertyGroupItemForProperty:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(id<CNPropertyGroupItemDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyGroupItemDelegate>)arg1 ;
-(CNUIContactsEnvironment *)environment;
-(BOOL)isReadonly;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNCardPropertyGroup *)group;
-(CNContactProperty *)contactProperty;
-(CNContactStore *)contactStore;
-(id)initWithGroup:(id)arg1 ;
-(NSString *)displayValue;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(BOOL)isFavorite;
-(NSArray *)standardLabels;
-(NSArray *)extendedLabels;
-(BOOL)isSuggested;
-(CNLabeledValue *)labeledValue;
-(NSURL *)defaultActionURL;
-(BOOL)supportsLabel;
-(BOOL)modified;
-(CNMutableContact *)mutableContact;
-(id)contactViewCache;
-(NSString *)displayLabel;
-(void)updateLabeledValueWithLabel:(id)arg1 ;
-(void)confirmSuggestion;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 ;
-(id)replacementForInvalidValue:(id)arg1 ;
-(BOOL)canRemove;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)normalizedValue;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(id)valueForDisplayString:(id)arg1 ;
-(NSString *)editingStringValue;
-(id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(int)anyContactLegacyIdentifier;
-(int)labeledValueMultiValueIdentifierForChosenSourceContact;
-(NSString *)placeholderString;
-(NSArray *)promotedExtendedLabels;
-(BOOL)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)bestLabel:(id)arg1 ;
-(void)mergeItem:(id)arg1 ;
-(id)updateWithLabel:(id)arg1 value:(id)arg2 ;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(BOOL)isValidIdentifier:(id)arg1 ;
-(void)_removeSuggestion;
-(void)rejectSuggestion;
-(void)saveChangesImmediately:(BOOL)arg1 ;
-(BOOL)shouldCreateNewMeContactToSaveChangesTo;
-(BOOL)allowsIMessage;
-(void)setAllowsIMessage:(BOOL)arg1 ;
-(BOOL)allowsPhone;
-(void)setAllowsPhone:(BOOL)arg1 ;
-(BOOL)allowsTTY;
-(void)setAllowsTTY:(BOOL)arg1 ;
-(BOOL)allowsEmail;
-(void)setAllowsEmail:(BOOL)arg1 ;
-(CNLabeledValue *)originalLabeledValue;
-(void)setOriginalLabeledValue:(CNLabeledValue *)arg1 ;
-(unsigned long long)policyFlags;
-(void)setPolicyFlags:(unsigned long long)arg1 ;
@end

