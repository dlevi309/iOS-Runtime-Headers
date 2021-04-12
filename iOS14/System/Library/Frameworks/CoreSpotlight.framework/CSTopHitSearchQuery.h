/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)foundItemCount;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(/*^block*/id)foundItemsHandler;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFoundItemsHandler:(/*^block*/id)arg1 ;
-(void)handleCompletion:(id)arg1 ;
-(void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2 ;
-(void)handleFoundItems:(id)arg1 ;
-(BOOL)isTopHitQuery;
-(/*^block*/id)completionHandler;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 hitCount:(unsigned long long)arg4 ;
-(void)_handleBatches:(id)arg1 ;
@end

