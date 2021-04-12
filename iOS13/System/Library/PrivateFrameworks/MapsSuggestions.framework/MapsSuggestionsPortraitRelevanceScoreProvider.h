/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@class NSDate, NSMutableArray, NSLocale, NSString;

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	NSDate* _fetchEntriesFromDate;
	NSMutableArray* _portraitStrings;
	Queue _queue;
	NSLocale* _currentLocale;
	NSString* _languageCode;
	NSString* _currentCountryCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(NSString *)uniqueName;
-(BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preLoad;
-(BOOL)_searchForName:(id)arg1 ;
-(void)_fetchStringsFromPortrait;
@end

