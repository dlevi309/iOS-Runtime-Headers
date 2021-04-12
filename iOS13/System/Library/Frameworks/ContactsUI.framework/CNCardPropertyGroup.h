/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroup.h>

@class NSArray, NSString, CNPolicy, NSDictionary, CNContactStore;

@interface CNCardPropertyGroup : CNCardGroup {

	NSArray* _propertyItems;
	NSArray* _displayItems;
	NSArray* _editingItems;
	NSArray* _originalEditingItems;
	BOOL _showActionsWhenEmpty;
	BOOL _allowsDisplayModePickerActions;
	BOOL _isAdded;
	NSString* _property;
	CNPolicy* _policy;
	NSDictionary* _linkedPolicies;
	CNContactStore* _contactStore;
	NSArray* _deletedItems;

}

@property (nonatomic,retain) NSArray * editingItems; 
@property (nonatomic,retain) NSArray * deletedItems;                             //@synthesize deletedItems=_deletedItems - In the implementation block
@property (nonatomic,readonly) NSString * property;                              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSArray * propertyItems;                          //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,readonly) CNPolicy * policy;                                //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDictionary * linkedPolicies;                    //@synthesize linkedPolicies=_linkedPolicies - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL showActionsWhenEmpty;                          //@synthesize showActionsWhenEmpty=_showActionsWhenEmpty - In the implementation block
@property (assign,nonatomic) BOOL allowsDisplayModePickerActions;                //@synthesize allowsDisplayModePickerActions=_allowsDisplayModePickerActions - In the implementation block
@property (getter=isMultiValue,nonatomic,readonly) BOOL multiValue; 
@property (getter=isFixedValue,nonatomic,readonly) BOOL fixedValue; 
@property (getter=isMultiLine,nonatomic,readonly) BOOL multiLine; 
@property (nonatomic,readonly) BOOL allowsAdding; 
@property (nonatomic,readonly) BOOL modified; 
@property (assign,nonatomic) BOOL isAdded;                                       //@synthesize isAdded=_isAdded - In the implementation block
+(id)groupForProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5 ;
-(id)description;
-(CNPolicy *)policy;
-(CNContactStore *)contactStore;
-(id)displayItems;
-(NSString *)property;
-(BOOL)isMultiValue;
-(void)saveChanges;
-(Class)propertyGroupItemClass;
-(NSArray *)editingItems;
-(id)initWithProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5 ;
-(BOOL)allowsAdding;
-(BOOL)isFixedValue;
-(BOOL)isMultiLine;
-(BOOL)modified;
-(id)nextAvailableLabel;
-(BOOL)addEditingItem;
-(void)removeEditingItem:(id)arg1 ;
-(id)lastEditingItem;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(void)setEditingItems:(NSArray *)arg1 ;
-(id)_loadPropertyItems;
-(id)_mergeItems:(id)arg1 forEditing:(BOOL)arg2 ;
-(id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3 ;
-(BOOL)_shouldShowGroupWhenEditing:(BOOL)arg1 ;
-(BOOL)isRequired;
-(BOOL)labelsAreUnique;
-(BOOL)canAddEditingItem;
-(BOOL)_arrayContainsMaxAllowedItems:(id)arg1 ;
-(void)_updateNameValuesForItems:(id)arg1 ;
-(id)policyForItem:(id)arg1 ;
-(void)saveChangesForItems:(id)arg1 ;
-(id)labelsForItem:(id)arg1 options:(unsigned long long)arg2 ;
-(id)labelsInUseByGroup;
-(id)itemsUsingLabel:(id)arg1 ;
-(id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long*)arg4 ;
-(id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2 ;
-(id)_nextAvailableLabel;
-(id)_nextAvailableInstantMessageService;
-(id)_nextAvailableSocialService;
-(NSArray *)propertyItems;
-(NSDictionary *)linkedPolicies;
-(BOOL)showActionsWhenEmpty;
-(void)setShowActionsWhenEmpty:(BOOL)arg1 ;
-(BOOL)allowsDisplayModePickerActions;
-(void)setAllowsDisplayModePickerActions:(BOOL)arg1 ;
-(BOOL)isAdded;
-(void)setIsAdded:(BOOL)arg1 ;
-(NSArray *)deletedItems;
-(void)setDeletedItems:(NSArray *)arg1 ;
@end

