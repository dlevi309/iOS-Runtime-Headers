/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsDeduper.h>

@class NSString;

@interface MapsSuggestionsBaseDeduper : NSObject <MapsSuggestionsDeduper>

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
-(NSString *)uniqueName;
-(BOOL)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2 ;
@end

