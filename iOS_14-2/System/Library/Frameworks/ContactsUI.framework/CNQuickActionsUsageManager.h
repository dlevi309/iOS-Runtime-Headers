/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)init;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(void)actionPerformed:(id)arg1 ;
-(id)sortedActions:(id)arg1 ;
-(NSCountedSet *)actionsUsageSet;
-(double)scoreForAction:(id)arg1 ;
-(NSMutableSet *)enabledActionIdentifiers;
-(void)cacheEnabledStateForAction:(id)arg1 ;
-(void)updateCachedEnabledStateForAction:(id)arg1 ;
-(void)setActionsUsageSet:(NSCountedSet *)arg1 ;
-(void)_updateDuetInteractionsIfNeeded;
-(void)setEnabledActionIdentifiers:(NSMutableSet *)arg1 ;
-(NSArray *)cachedInteractions;
-(void)setCachedInteractions:(NSArray *)arg1 ;
-(NSDate *)cachedInteractionsDate;
-(void)setCachedInteractionsDate:(NSDate *)arg1 ;
@end

