/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class CNContactStore, CNContact, CNFavorites, NSDate, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject {

	CNContactStore* _contactStoreLazy;
	CNContact* _meContactLazy;
	CNFavorites* _favoriteContactsLazy;
	NSDate* _now;
	NSMutableDictionary* _wrappedObjects;

}

@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) CNFavorites * favoriteContacts; 
@property (nonatomic,readonly) NSDate * now; 
+(id)sharedEventStore;
+(id)sharedCalendarVisibilityManager;
-(NSDate *)now;
-(CNContactStore *)contactStore;
-(id)meContact;
-(id)_unwrap:(id)arg1 ;
-(void)setNow:(NSDate *)arg1 ;
-(id)_contactKeysToFetch;
-(id)_wrap:(id)arg1 ;
-(CNFavorites *)favoriteContacts;
-(id)contactsForPredicate:(id)arg1 ;
-(id)_contactForPredicate:(id)arg1 ;
-(id)dictContactForCNContact:(id)arg1 ;
-(id)_dictContactForIdentifier:(id)arg1 ;
-(id)_dictContactForParticipant:(id)arg1 ;
-(id)_dictForAttachment:(id)arg1 ;
-(id)dictForEvent:(id)arg1 ;
-(id)wrap:(id)arg1 ;
@end

