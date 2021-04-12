/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTFeedTransforming.h>

@class NSDictionary, NSString;

@interface NTCostAwareLimitTransformation : NSObject <NTFeedTransforming> {

	double _costOfFeedItemsForLastTransformation;
	NSDictionary* _costByFeedItemIDsForLastTransformation;
	double _budget;
	/*^block*/id _appraiser;

}

@property (nonatomic,readonly) double budget;                                                  //@synthesize budget=_budget - In the implementation block
@property (nonatomic,copy,readonly) id appraiser;                                              //@synthesize appraiser=_appraiser - In the implementation block
@property (assign,nonatomic) double costOfFeedItemsForLastTransformation;                      //@synthesize costOfFeedItemsForLastTransformation=_costOfFeedItemsForLastTransformation - In the implementation block
@property (nonatomic,copy) NSDictionary * costByFeedItemIDsForLastTransformation;              //@synthesize costByFeedItemIDsForLastTransformation=_costByFeedItemIDsForLastTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)budget;
-(id)transformFeedItems:(id)arg1 ;
-(id)initWithBudget:(double)arg1 appraiser:(/*^block*/id)arg2 ;
-(double)costOfFeedItemsForLastTransformation;
-(NSDictionary *)costByFeedItemIDsForLastTransformation;
-(id)appraiser;
-(void)setCostOfFeedItemsForLastTransformation:(double)arg1 ;
-(void)setCostByFeedItemIDsForLastTransformation:(NSDictionary *)arg1 ;
@end

