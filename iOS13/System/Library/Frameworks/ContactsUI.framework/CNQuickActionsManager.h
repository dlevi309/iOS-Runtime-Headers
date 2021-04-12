/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNQuickContactActionDelegate.h>

@protocol CNQuickActionsManagerDelegate;
@class NSMutableDictionary, NSOrderedSet, NSMutableSet, NSArray, NSMutableArray, NSDictionary, CNQuickFaceTimeAction, CNQuickActionsUsageManager, CNContact, NSString;

@interface CNQuickActionsManager : NSObject <CNQuickContactActionDelegate> {

	NSMutableDictionary* _actionsByCategories;
	NSOrderedSet* _actions;
	NSMutableSet* _requests;
	BOOL _bypassActionValidation;
	BOOL _useDuetIfAvailable;
	NSArray* _contacts;
	id<CNQuickActionsManagerDelegate> _delegate;
	NSArray* _categories;
	unsigned long long _desiredNumberOfActions;
	NSMutableArray* _updateBlocks;
	NSDictionary* _groups;
	CNQuickFaceTimeAction* _faceTimeVideoAction;
	CNQuickFaceTimeAction* _faceTimeAudioAction;
	CNQuickActionsUsageManager* _usageManager;
	NSArray* _subManagers;

}

@property (nonatomic,retain) NSMutableArray * updateBlocks;                                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSDictionary * groups;                                          //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) CNQuickFaceTimeAction * faceTimeVideoAction;                    //@synthesize faceTimeVideoAction=_faceTimeVideoAction - In the implementation block
@property (nonatomic,retain) CNQuickFaceTimeAction * faceTimeAudioAction;                    //@synthesize faceTimeAudioAction=_faceTimeAudioAction - In the implementation block
@property (nonatomic,retain) CNQuickActionsUsageManager * usageManager;                      //@synthesize usageManager=_usageManager - In the implementation block
@property (nonatomic,retain) NSArray * subManagers;                                          //@synthesize subManagers=_subManagers - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) CNContact * contact; 
@property (assign,nonatomic,__weak) id<CNQuickActionsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                             //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned long long desiredNumberOfActions;                      //@synthesize desiredNumberOfActions=_desiredNumberOfActions - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                    //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (assign,nonatomic) BOOL sortsWithDuet; 
@property (assign,nonatomic) BOOL useDuetIfAvailable;                                        //@synthesize useDuetIfAvailable=_useDuetIfAvailable - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)actionsManagerForContacts:(id)arg1 ;
+(id)defaultCategories;
+(BOOL)hasActionsForContact:(id)arg1 ;
-(void)dealloc;
-(id<CNQuickActionsManagerDelegate>)delegate;
-(void)setDelegate:(id<CNQuickActionsManagerDelegate>)arg1 ;
-(CNContact *)contact;
-(NSArray *)contacts;
-(NSDictionary *)groups;
-(NSArray *)actions;
-(NSArray *)categories;
-(void)_openURL:(id)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSMutableArray *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableArray *)arg1 ;
-(void)setGroups:(NSDictionary *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)contactActionDidUpdate:(id)arg1 ;
-(void)contactAction:(id)arg1 presentViewController:(id)arg2 ;
-(id)initWithContacts:(id)arg1 ;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(void)_createGroupsForPropertyKeys:(id)arg1 ;
-(id)_orderedLabels;
-(id)_ignoredLabels;
-(BOOL)_shouldGroupActionsInCategory:(id)arg1 ;
-(id)_groupedActionsFromOrderedActionsByCategories:(id)arg1 ;
-(id)_hierarchicalActionsForCategory:(id)arg1 fromActions:(id)arg2 askDelegate:(BOOL)arg3 ;
-(id)_expandedActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2 ;
-(id)_hybridActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2 ;
-(void)_addAction:(id)arg1 ;
-(id)_addActionForPropertyItem:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3 ;
-(void)_updateActionsForPropertyItems:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3 ;
-(void)_updateIDSActionsForPropertyItems:(id)arg1 category:(id)arg2 serviceName:(id)arg3 propertyActionClass:(Class)arg4 ;
-(id)_propertyItemsForKey:(id)arg1 ;
-(void)updateActionsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateSingleContactActions;
-(void)_updateMultiContactActions;
-(void)refreshActionsAndForceSendUpdate:(BOOL)arg1 ;
-(void)refreshActions;
-(void)stopUpdatingActions;
-(void)_actionsUpdated;
-(void)actionPerformed:(id)arg1 ;
-(id)quickActions;
-(unsigned long long)desiredNumberOfActions;
-(void)setDesiredNumberOfActions:(unsigned long long)arg1 ;
-(BOOL)bypassActionValidation;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(BOOL)useDuetIfAvailable;
-(void)setUseDuetIfAvailable:(BOOL)arg1 ;
-(CNQuickFaceTimeAction *)faceTimeVideoAction;
-(void)setFaceTimeVideoAction:(CNQuickFaceTimeAction *)arg1 ;
-(CNQuickFaceTimeAction *)faceTimeAudioAction;
-(void)setFaceTimeAudioAction:(CNQuickFaceTimeAction *)arg1 ;
-(CNQuickActionsUsageManager *)usageManager;
-(void)setUsageManager:(CNQuickActionsUsageManager *)arg1 ;
-(NSArray *)subManagers;
-(void)setSubManagers:(NSArray *)arg1 ;
@end

