/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)reset;
-(BOOL)suggestShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)configureError:(id)arg1 ;
-(void)configureResults:(id)arg1 ;
-(unsigned long long)calledRequestSuggest;
@end

