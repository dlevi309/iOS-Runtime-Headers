/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isSuggestionsSupported;
+(id)storeInfoClasses;
+(id)storeIdentifier;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithSuggestionsService:(id)arg1 siriIntelligenceSettings:(id)arg2 ;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionService;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(void)setSiriIntelligenceSettings:(id<CNSiriIntelligenceSettingsProtocol>)arg1 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setSuggestionService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
-(id<CNSiriIntelligenceSettingsProtocol>)siriIntelligenceSettings;
-(BOOL)_processSuggestions:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
@end

