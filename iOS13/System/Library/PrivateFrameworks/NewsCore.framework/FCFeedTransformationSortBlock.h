/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort {

	/*^block*/id _sortBlock;

}

@property (nonatomic,copy) id sortBlock;              //@synthesize sortBlock=_sortBlock - In the implementation block
+(id)transformationWithSortBlock:(/*^block*/id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setSortBlock:(id)arg1 ;
-(id)sortBlock;
@end

