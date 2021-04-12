/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, ATXInfoTimelineEntryRelevance;

@interface ATXInfoTimelineEntry : NSObject <NSSecureCoding> {

	BOOL _isImportantRelativeToTimeline;
	NSDate* _date;
	ATXInfoTimelineEntryRelevance* _relevance;

}

@property (nonatomic,readonly) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) ATXInfoTimelineEntryRelevance * relevance;              //@synthesize relevance=_relevance - In the implementation block
@property (nonatomic,readonly) BOOL isImportantRelativeToTimeline;                     //@synthesize isImportantRelativeToTimeline=_isImportantRelativeToTimeline - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithDate:(id)arg1 relevance:(id)arg2 ;
+(id)entryWithDate:(id)arg1 importantRelativeToTimeline:(BOOL)arg2 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXInfoTimelineEntryRelevance *)relevance;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 relevance:(id)arg2 ;
-(id)initWithDate:(id)arg1 importantRelativeToTimeline:(BOOL)arg2 ;
-(BOOL)isImportantRelativeToTimeline;
@end

