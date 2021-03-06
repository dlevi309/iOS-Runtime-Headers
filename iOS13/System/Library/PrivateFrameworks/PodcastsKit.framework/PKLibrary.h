/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol PKLibrary
@property (readonly,nonatomic) id<PKSubscriptionController> subscriptionController; 
@required
-(id<PKSubscriptionController>)subscriptionController;
-(void)fetchMatchesFor:(id)arg1 limit:(long long)arg2 resultsHandler:(/*^block*/id)arg3;
-(void)fetchAllShowsWithResultsHandler:(/*^block*/id)arg1;

@end

