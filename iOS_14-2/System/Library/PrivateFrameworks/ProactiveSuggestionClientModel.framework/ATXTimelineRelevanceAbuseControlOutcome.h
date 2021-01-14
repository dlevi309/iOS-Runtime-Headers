/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/


@class ATXInfoSuggestion, NSString;

@interface ATXTimelineRelevanceAbuseControlOutcome : NSObject {

	ATXInfoSuggestion* _suggestion;
	NSString* _suggestionId;
	double _timestamp;
	long long _abuseControlOutcome;

}

@property (nonatomic,readonly) ATXInfoSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) NSString * suggestionId;                     //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,readonly) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long abuseControlOutcome;               //@synthesize abuseControlOutcome=_abuseControlOutcome - In the implementation block
+(id)outcomeWithSuggestion:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3 ;
+(id)outcomeWithSuggestionId:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3 ;
+(id)descriptionForOutcome:(long long)arg1 ;
-(id)init;
-(double)timestamp;
-(ATXInfoSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 suggestionId:(id)arg2 timestamp:(double)arg3 abuseControlOutcome:(long long)arg4 ;
-(NSString *)suggestionId;
-(id)initWithSuggestion:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3 ;
-(long long)abuseControlOutcome;
@end

