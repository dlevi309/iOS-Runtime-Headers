/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSArray;

@interface SGQuickResponsesRecords : NSObject {

	NSArray* _replyRecords;
	double _totalOpportunities;
	double _totalDisplayed;
	double _totalSelected;
	double _totalMatched;
	double _totalUnmatched;

}

@property (nonatomic,readonly) NSArray * replyRecords;                 //@synthesize replyRecords=_replyRecords - In the implementation block
@property (nonatomic,readonly) double totalOpportunities;              //@synthesize totalOpportunities=_totalOpportunities - In the implementation block
@property (nonatomic,readonly) double totalDisplayed;                  //@synthesize totalDisplayed=_totalDisplayed - In the implementation block
@property (nonatomic,readonly) double totalSelected;                   //@synthesize totalSelected=_totalSelected - In the implementation block
@property (nonatomic,readonly) double totalMatched;                    //@synthesize totalMatched=_totalMatched - In the implementation block
@property (nonatomic,readonly) double totalUnmatched;                  //@synthesize totalUnmatched=_totalUnmatched - In the implementation block
-(id)initWithReplyRecords:(id)arg1 totalOpportunities:(double)arg2 totalDisplayed:(double)arg3 totalSelected:(double)arg4 totalMatched:(double)arg5 totalUnmatched:(double)arg6 ;
-(NSArray *)replyRecords;
-(double)totalOpportunities;
-(double)totalDisplayed;
-(double)totalSelected;
-(double)totalMatched;
-(double)totalUnmatched;
@end

