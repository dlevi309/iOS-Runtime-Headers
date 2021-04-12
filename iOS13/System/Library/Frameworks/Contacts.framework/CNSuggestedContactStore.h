/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactStore.h>

@protocol SGSuggestionsServiceContactsProtocol, CNSiriIntelligenceSettingsProtocol;
@interface CNSuggestedContactStore : CNContactStore {

	id<SGSuggestionsServiceContactsProtocol> _suggestionService;
	id<CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;

}

@property (nonatomic,retain) id<SGSuggestionsServiceContactsProtocol> suggestionService;                   //@synthesize suggestionService=_suggestionService - In the implementation block
@property (nonatomic,retain) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;              //@synthesize siriIntelligenceSettings=_siriIntelligenceSettings - In the implementation block
+(id)storeIdentifier;
+(id)storeInfoClasses;
+(BOOL)isSuggestionsSupported;
-(id)init;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id<CNSiriIntelligenceSettingsProtocol>)siriIntelligenceSettings;
-(void)setSiriIntelligenceSettings:(id<CNSiriIntelligenceSettingsProtocol>)arg1 ;
-(id)initWithSuggestionsService:(id)arg1 siriIntelligenceSettings:(id)arg2 ;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionService;
-(BOOL)_processSuggestions:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(void)setSuggestionService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
@end

