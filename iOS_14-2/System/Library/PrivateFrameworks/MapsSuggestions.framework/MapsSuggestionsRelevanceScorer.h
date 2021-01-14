/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {

	NSMutableArray* _scorers;
	NSDate* _scorersUpdatedAt;

}
-(id)init;
-(void)preLoadAllScorers;
-(void)addScorer:(id)arg1 ;
-(id)confidenceForContacts:(id)arg1 addresses:(id)arg2 ;
-(id)confidenceForMapItems:(id)arg1 ;
@end

