/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@protocol TSTopOfFeedContainerType
@property (retain,nonatomic) id<TSTopOfFeedContainerTypeDelegate> delegate; 
@required
-(id<TSTopOfFeedContainerTypeDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(double)topOfFeedContentHeight;
-(id)topOfFeedContentHeadlines;
-(id)topOfFeedHeadlineContextForHeadline:(id)arg1;
-(id)topOfFeedContentTitle;
-(id)topOfFeedContentTitleColor;
-(long long)topOfFeedSpecialEventsType;
-(void)topOfFeedContentDidPresentHeadline:(id)arg1;
-(void)topOfFeedContentShouldRefreshWithCompletion:(/*^block*/id)arg1;
-(id)topOfFeedAnimatableView;

@end

