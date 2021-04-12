/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleID;
-(NSMutableArray *)pendingBlocks;
-(id<CNScheduler>)workScheduler;
-(id<SGSuggestionsServiceContactsProtocol>)sgService;
-(void)sendData;
-(void)recordUserSelectedAutocompleteResult:(id)arg1 ;
-(id)initWithSuggestionsService:(id)arg1 schedulerProvider:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)recordSGServiceMessage:(/*^block*/id)arg1 ;
-(void)recordUserSawResultsConsideredSuggestion;
@end

