/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSCountedSet, NSMutableSet, CNContact, NSArray, NSDate;

@interface CNQuickActionsUsageManager : NSObject {

	BOOL _sortsWithDuet;
	NSCountedSet* _actionsUsageSet;
	NSMutableSet* _enabledActionIdentifiers;
	CNContact* _contact;
	NSArray* _cachedInteractions;
	NSDate* _cachedInteractionsDate;

}

@property (nonatomic,retain) NSCountedSet * actionsUsageSet;                       //@synthesize actionsUsageSet=_actionsUsageSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * enabledActionIdentifiers;              //@synthesize enabledActionIdentifiers=_enabledActionIdentifiers - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSArray * cachedInteractions;                         //@synthesize cachedInteractions=_cachedInteractions - In the implementation block
@property (nonatomic,retain) NSDate * cachedInteractionsDate;                      //@synthesize cachedInteractionsDate=_cachedInteractionsDate - In the implementation block
@property (assign,nonatomic) BOOL sortsWithDuet;                                   //@synthesize sortsWithDuet=_sortsWithDuet - In the implementation block
+(BOOL)sortUsingCoreDuetAvailable;
+(id)managerForContact:(id)arg1 ;
-(id)init;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(void)actionPerformed:(id)arg1 ;
-(NSCountedSet *)actionsUsageSet;
-(NSMutableSet *)enabledActionIdentifiers;
-(double)scoreForAction:(id)arg1 ;
-(void)cacheEnabledStateForAction:(id)arg1 ;
-(void)updateCachedEnabledStateForAction:(id)arg1 ;
-(void)_updateDuetInteractionsIfNeeded;
-(id)sortedActions:(id)arg1 ;
-(void)setActionsUsageSet:(NSCountedSet *)arg1 ;
-(void)setEnabledActionIdentifiers:(NSMutableSet *)arg1 ;
-(NSArray *)cachedInteractions;
-(void)setCachedInteractions:(NSArray *)arg1 ;
-(NSDate *)cachedInteractionsDate;
-(void)setCachedInteractionsDate:(NSDate *)arg1 ;
@end

