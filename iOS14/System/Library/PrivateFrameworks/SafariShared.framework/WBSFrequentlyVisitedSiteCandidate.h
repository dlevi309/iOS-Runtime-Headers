/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {

	float _score;
	WBSHistoryItem* _historyItem;

}

@property (nonatomic,readonly) WBSHistoryItem * historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,readonly) float score;                               //@synthesize score=_score - In the implementation block
+(id)titleForHistoryItem:(id)arg1 ;
-(float)score;
-(WBSHistoryItem *)historyItem;
-(id)initWithHistoryItem:(id)arg1 score:(float)arg2 ;
@end

