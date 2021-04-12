/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsTitleFormatter.h>

@class NSString;

@interface MapsSuggestionsBaseTitleFormatter : NSObject <MapsSuggestionsTitleFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(BOOL)updateChangedTitlesForEntry:(id)arg1 title:(id)arg2 subtitle:(id)arg3 includeLockedVersions:(BOOL)arg4 ;
-(BOOL)resetTitlesForEntry:(id)arg1 ;
-(BOOL)formatTitlesForEntry:(id)arg1 eta:(id)arg2 ;
-(BOOL)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3 ;
@end

