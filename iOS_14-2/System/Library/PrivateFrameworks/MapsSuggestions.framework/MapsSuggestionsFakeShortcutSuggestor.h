/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {

	ReadWriteQueue _rwQueue;
	NSArray* _configuredResults;
	NSError* _configuredError;
	unsigned long long _calledPropose;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromResourceDepot:(id)arg1 ;
-(void)configureError:(id)arg1 ;
-(void)configureResults:(id)arg1 ;
-(unsigned long long)calledRequestSuggest;
-(char)suggestShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)reset;
@end

