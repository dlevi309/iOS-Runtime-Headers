/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@class NSDate, NSArray, NSLocale, NSString, MapsSuggestionsPortrait;

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	NSDate* _fetchEntriesFromDate;
	NSArray* _portraitStrings;
	Queue _queue;
	NSLocale* _currentLocale;
	NSString* _languageCode;
	NSString* _currentCountryCode;
	MapsSuggestionsPortrait* _portrait;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initWithPortrait:(id)arg1 ;
-(char)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preLoad;
@end

