/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {

	NSMutableArray* _destinations;

}

@property (nonatomic,retain) NSMutableArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(id)init;
-(NSMutableArray *)destinations;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(void)addDestination:(id)arg1 ;
-(void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)sendToAllDestinations:(id)arg1 ;
-(id)readConfiguration:(id)arg1 ;
-(void)parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
@end

