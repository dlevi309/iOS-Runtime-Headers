/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSString;


@protocol TSTopOfFeedType
@property (retain,nonatomic) id<TSTopOfFeedTypeDelegate> delegate; 
@property (readonly,nonatomic) NSString * topOfFeedID; 
@required
-(id<TSTopOfFeedTypeDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)topOfFeedID;
-(double)topOfFeedContentHeight;
-(id)topOfFeedContentHeadlines;
-(id)topOfFeedHeadlineContextForHeadline:(id)arg1;
-(id)topOfFeedContentTitle;
-(id)topOfFeedContentTitleColor;
-(long long)topOfFeedSpecialEventsType;
-(void)topOfFeedContentDidPresentHeadline:(id)arg1;
-(void)topOfFeedContentShouldRefreshWithCompletion:(/*^block*/id)arg1;

@end

