/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>
#import <MapsSuggestions/MapsSuggestionsFilter.h>

@class NSString;

@interface MapsSuggestionsTooFewVisitsFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(BOOL)isEnabled;
-(BOOL)shouldKeepEntry:(id)arg1 ;
@end

