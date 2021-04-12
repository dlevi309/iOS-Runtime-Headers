/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

@class NSArray;


@protocol NFLFeedComponentLayout <NSObject,NSCopying>
@property (nonatomic,readonly) double rank; 
@property (nonatomic,copy,readonly) NSArray * tileInfosUsed; 
@property (nonatomic,readonly) unsigned long long rowSpan; 
@property (nonatomic,readonly) unsigned long long columnSpan; 
@required
-(double)rank;
-(unsigned long long)columnSpan;
-(unsigned long long)rowSpan;
-(NSArray *)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;

@end

