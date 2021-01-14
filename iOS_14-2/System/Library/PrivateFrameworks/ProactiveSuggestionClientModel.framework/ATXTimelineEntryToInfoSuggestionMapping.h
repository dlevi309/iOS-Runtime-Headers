/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/


@class NSString, ATXInfoTimelineEntry;

@interface ATXTimelineEntryToInfoSuggestionMapping : NSObject {

	NSString* _suggestionId;
	ATXInfoTimelineEntry* _timelineEntry;
	long long _suggestionMappingReason;

}

@property (nonatomic,readonly) NSString * suggestionId;                           //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,readonly) ATXInfoTimelineEntry * timelineEntry;              //@synthesize timelineEntry=_timelineEntry - In the implementation block
@property (nonatomic,readonly) long long suggestionMappingReason;                 //@synthesize suggestionMappingReason=_suggestionMappingReason - In the implementation block
+(id)entryMappingWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3 ;
-(id)init;
-(NSString *)suggestionId;
-(id)initWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3 ;
-(ATXInfoTimelineEntry *)timelineEntry;
-(long long)suggestionMappingReason;
@end

