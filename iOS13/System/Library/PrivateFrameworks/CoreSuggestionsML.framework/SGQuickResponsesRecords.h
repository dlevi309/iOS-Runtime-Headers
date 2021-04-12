/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

