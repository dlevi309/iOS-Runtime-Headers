/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NSArray;

@interface NFLHorizontalSubBatchLayout : NFLSubBatchLayout {

	NSArray* _components;

}

@property (nonatomic,copy) NSArray * components;              //@synthesize components=_components - In the implementation block
-(void)setComponents:(NSArray *)arg1 ;
-(id)tileInfosUsed;
-(unsigned long long)rowSpan;
-(NSArray *)components;
-(BOOL)isValid;
-(double)rank;
-(id)initWithFeedSettings:(id)arg1 components:(id)arg2 ;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(id)initWithFeedSettings:(id)arg1 ;
@end

