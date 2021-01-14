/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol WFVariableProvider, WFVariableUIDelegate;
@class UILocalizedIndexedCollation, INObjectCollection, NSSet, WFParameter;

@interface WFParameterValuePickerDataSource : UITableViewDiffableDataSource {

	UILocalizedIndexedCollation* _localizedCollation;
	INObjectCollection* _collection;
	SEL _collationStringSelector;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	WFParameter* _parameter;

}

@property (nonatomic,retain) INObjectCollection * collection;                                 //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) UILocalizedIndexedCollation * localizedCollation;              //@synthesize localizedCollation=_localizedCollation - In the implementation block
@property (assign,nonatomic) SEL collationStringSelector;                                     //@synthesize collationStringSelector=_collationStringSelector - In the implementation block
@property (nonatomic,readonly) unsigned long long itemsCount; 
@property (nonatomic,retain) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,retain) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (nonatomic,readonly) WFParameter * parameter;                                       //@synthesize parameter=_parameter - In the implementation block
+(id)variableSectionIdentifier;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(INObjectCollection *)collection;
-(void)setCollection:(INObjectCollection *)arg1 ;
-(WFParameter *)parameter;
-(unsigned long long)itemsCount;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(UILocalizedIndexedCollation *)localizedCollation;
-(id)displayVariables;
-(id)displayVariablesWithTitle:(id)arg1 ;
-(id)initWithParameter:(id)arg1 tableView:(id)arg2 cellProvider:(/*^block*/id)arg3 ;
-(id)parameterStateAtIndexPath:(id)arg1 ;
-(id)snapshotForCollection:(id)arg1 filterVariableTitle:(id)arg2 ;
-(void)applyCollection:(id)arg1 animatingDifferences:(BOOL)arg2 filterVariableTitle:(id)arg3 ;
-(void)applyCollection:(id)arg1 animatingDifferences:(BOOL)arg2 filterVariableTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyEmptyCollectionAnimatingDifferences:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(SEL)collationStringSelector;
-(void)setCollationStringSelector:(SEL)arg1 ;
@end

