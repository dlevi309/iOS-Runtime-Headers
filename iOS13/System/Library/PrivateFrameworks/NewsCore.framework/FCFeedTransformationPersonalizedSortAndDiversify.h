/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSArray, NSString;

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <FCFeedTransforming> {

	unsigned long long _limit;
	id<FCFeedPersonalizing> _feedPersonalizer;
	long long _sortOptions;
	NSArray* _preselectedItems;

}

@property (assign,nonatomic) unsigned long long limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (assign,nonatomic) long long sortOptions;                                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (nonatomic,retain) NSArray * preselectedItems;                            //@synthesize preselectedItems=_preselectedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 ;
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 preselectedItems:(id)arg4 ;
+(id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(long long)sortOptions;
-(void)setSortOptions:(long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setPreselectedItems:(NSArray *)arg1 ;
-(NSArray *)preselectedItems;
@end

