/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NSArray;

@interface NFLHorizontalSubBatchLayout : NFLSubBatchLayout {

	NSArray* _components;

}

@property (nonatomic,copy) NSArray * components;              //@synthesize components=_components - In the implementation block
-(BOOL)isValid;
-(NSArray *)components;
-(double)rank;
-(unsigned long long)rowSpan;
-(void)setComponents:(NSArray *)arg1 ;
-(id)initWithFeedSettings:(id)arg1 components:(id)arg2 ;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(id)initWithFeedSettings:(id)arg1 ;
@end

