/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol OS_dispatch_queue;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, CNContactStore, HKHealthStore, _PSContactResolver, NSObject;

@interface _PSFamilyRecommender : NSObject {

	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	HKHealthStore* _healthStore;
	_PSContactResolver* _contactResolver;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) _PSContactResolver * contactResolver;                //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                         //@synthesize healthStore=_healthStore - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(HKHealthStore *)healthStore;
-(CNContactStore *)contactStore;
-(_CDInteractionStore *)interactionStore;
-(id)init;
-(id)currentFamily;
-(id)currentFamilyExcludingMe:(id)arg1 ;
-(id)contactIdsFromContactRelationsAndNamesUsingMe:(id)arg1 ;
-(id)contactIdsFromEmergencyContacts;
-(void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)arg1 ;
-(id)nonFamilyRelations;
-(id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg1 lookBackDays:(long long)arg2 ;
-(id)familyRecipientsForShareSheet;
-(id)fetchAllContactIdsFromContactStore:(id)arg1 ;
-(id)familyRecommendations;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(_PSContactResolver *)contactResolver;
-(id)contactKeysToFetch;
-(id)familyRecommendationSuggestionsForShareSheet;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)relationshipRegularExpressionForRelationship;
-(BOOL)regexMatchForRegex:(id)arg1 string:(id)arg2 ;
-(unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)setContactResolver:(_PSContactResolver *)arg1 ;
@end

