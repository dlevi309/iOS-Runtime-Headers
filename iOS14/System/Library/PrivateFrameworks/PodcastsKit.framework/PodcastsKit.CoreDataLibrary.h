/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/PKLibrary.h>

@interface PodcastsKit.CoreDataLibrary : NSObject <PKLibrary> {

	 subscriptionController;

}

@property (retain,nonatomic) id<PKSubscriptionController> subscriptionController; 
-(void)setSubscriptionController:(id<PKSubscriptionController>)arg1 ;
-(id)init;
-(id<PKSubscriptionController>)subscriptionController;
-(void)fetchMatchesFor:(id)arg1 limit:(long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)fetchAllShowsWithResultsHandler:(/*^block*/id)arg1 ;
@end

