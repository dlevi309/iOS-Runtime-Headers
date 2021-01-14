/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSuggestionsProbe.h>

@protocol CNAutocompleteSuggestionsProbe <CNAutocompleteProbe>
@required
-(void)recordUserSelectedAutocompleteResult:(id)arg1;
-(void)recordUserSawResultsConsideredSuggestion;

@end


@protocol SGSuggestionsServiceContactsProtocol, CNScheduler;
@class NSString, NSMutableArray;

@interface CNAutocompleteSuggestionsProbe : NSObject <CNAutocompleteSuggestionsProbe> {

	id<SGSuggestionsServiceContactsProtocol> _sgService;
	id<CNScheduler> _workScheduler;
	NSString* _bundleID;
	NSMutableArray* _pendingBlocks;

}

@property (nonatomic,readonly) id<SGSuggestionsServiceContactsProtocol> sgService;              //@synthesize sgService=_sgService - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workScheduler;                                   //@synthesize workScheduler=_workScheduler - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingBlocks;                                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)suggestionSourcesForAutocompleteResult:(id)arg1 ;
+(id)suggestionIdentifierForAutocompleteResult:(id)arg1 ;
+(id)contactIdentifierForAutocompleteResult:(id)arg1 ;
-(id)init;
-(NSMutableArray *)pendingBlocks;
-(id<CNScheduler>)workScheduler;
-(NSString *)bundleID;
-(id<SGSuggestionsServiceContactsProtocol>)sgService;
-(void)sendData;
-(void)recordUserSelectedAutocompleteResult:(id)arg1 ;
-(id)initWithSuggestionsService:(id)arg1 schedulerProvider:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)recordSGServiceMessage:(/*^block*/id)arg1 ;
-(void)recordUserSawResultsConsideredSuggestion;
@end

