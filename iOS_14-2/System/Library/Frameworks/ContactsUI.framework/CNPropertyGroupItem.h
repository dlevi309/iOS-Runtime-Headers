/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)newPropertyGroupItemForProperty:(id)arg1 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(BOOL)isFavorite;
-(CNCardPropertyGroup *)group;
-(NSString *)placeholderString;
-(id)normalizedValue;
-(NSString *)property;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(NSURL *)defaultActionURL;
-(void)setContact:(CNContact *)arg1 ;
-(id)init;
-(BOOL)supportsLabel;
-(id<CNPropertyGroupItemDelegate>)delegate;
-(void)setProperty:(NSString *)arg1 ;
-(void)setDelegate:(id<CNPropertyGroupItemDelegate>)arg1 ;
-(BOOL)modified;
-(id)description;
-(CNMutableContact *)mutableContact;
-(BOOL)isReadonly;
-(CNContactProperty *)contactProperty;
-(BOOL)canRemove;
-(id)contactViewCache;
-(BOOL)allowsTTY;
-(CNLabeledValue *)labeledValue;
-(CNUIContactsEnvironment *)environment;
-(id)bestValue:(id)arg1 ;
-(void)confirmSuggestion;
-(id)bestLabel:(id)arg1 ;
-(void)mergeItem:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isSuggested;
-(BOOL)isValidValue:(id)arg1 ;
-(NSString *)displayLabel;
-(void)updateLabeledValueWithLabel:(id)arg1 ;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(id)displayStringForValue:(id)arg1 ;
-(id)replacementForInvalidValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(BOOL)allowsPhone;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)valueForDisplayString:(id)arg1 ;
-(BOOL)allowsEmail;
-(NSString *)displayValue;
-(NSString *)editingStringValue;
-(id)initWithGroup:(id)arg1 ;
-(int)anyContactLegacyIdentifier;
-(id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(NSArray *)promotedExtendedLabels;
-(void)_removeSuggestion;
-(id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(NSArray *)extendedLabels;
-(BOOL)allowsIMessage;
-(int)labeledValueMultiValueIdentifierForChosenSourceContact;
-(NSArray *)standardLabels;
-(unsigned long long)policyFlags;
-(BOOL)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)updateWithLabel:(id)arg1 value:(id)arg2 ;
-(void)rejectSuggestion;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(void)saveChangesImmediately:(BOOL)arg1 ;
-(void)setAllowsIMessage:(BOOL)arg1 ;
-(BOOL)shouldCreateNewMeContactToSaveChangesTo;
-(void)setAllowsPhone:(BOOL)arg1 ;
-(void)setAllowsTTY:(BOOL)arg1 ;
-(void)setAllowsEmail:(BOOL)arg1 ;
-(CNLabeledValue *)originalLabeledValue;
-(void)setOriginalLabeledValue:(CNLabeledValue *)arg1 ;
-(void)setPolicyFlags:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValidIdentifier:(id)arg1 ;
@end

