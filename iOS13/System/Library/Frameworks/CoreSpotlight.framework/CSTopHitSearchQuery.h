/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSUserQuery.h>

@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {

	NSMutableArray* _batches;
	unsigned long long _foundItemCount;
	/*^block*/id foundItemsHandler;
	/*^block*/id completionHandler;

}
-(/*^block*/id)completionHandler;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFoundItemsHandler:(/*^block*/id)arg1 ;
-(unsigned long long)foundItemCount;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 hitCount:(unsigned long long)arg4 ;
-(id)filterQueries;
-(void)setFilterQueries:(id)arg1 ;
-(/*^block*/id)foundItemsHandler;
-(void)_handleBatches:(id)arg1 ;
-(void)handleCompletion:(id)arg1 ;
-(void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2 ;
-(void)handleFoundItems:(id)arg1 ;
-(BOOL)isTopHitQuery;
@end

