/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class CNContactStore, CNContact, CNFavorites, NSDate, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject {

	CNContactStore* _contactStoreLazy;
	CNContact* _meContactLazy;
	BOOL _meContactChecked;
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
-(id)dictContactForCNContact:(id)arg1 ;
-(id)dictForEvent:(id)arg1 ;
-(id)_dictContactForParticipant:(id)arg1 ;
-(void)updateMeContact;
-(id)_dictForAttachment:(id)arg1 ;
-(id)wrap:(id)arg1 ;
-(void)setNow:(NSDate *)arg1 ;
-(id)_unwrap:(id)arg1 ;
-(CNFavorites *)favoriteContacts;
-(id)_contactKeysToFetch;
-(id)_dictContactForIdentifier:(id)arg1 ;
-(id)contactsForPredicate:(id)arg1 ;
-(id)_wrap:(id)arg1 ;
-(id)_contactForPredicate:(id)arg1 ;
@end

