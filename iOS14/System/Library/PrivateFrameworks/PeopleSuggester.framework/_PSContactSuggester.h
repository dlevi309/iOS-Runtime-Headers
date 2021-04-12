/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _PSContactResolver, NSXPCConnection, _CDInteractionStore, CNContactStore;

@interface _PSContactSuggester : NSObject {

	_PSContactResolver* contactResolver;
	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(_CDInteractionStore *)interactionStore;
-(id)init;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 lookBackDays:(long long)arg3 interactions:(id)arg4 modeAvocado:(BOOL)arg5 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 referenceDate:(id)arg4 appleUsersOnly:(BOOL)arg5 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 ;
-(id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 appleUsersOnly:(BOOL)arg4 ;
-(id)contactKeysToFetch;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)dealloc;
@end

