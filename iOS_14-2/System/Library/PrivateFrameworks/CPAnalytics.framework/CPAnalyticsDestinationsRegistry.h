/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {

	NSMutableArray* _destinations;

}

@property (nonatomic,readonly) NSMutableArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(id)init;
-(NSMutableArray *)destinations;
-(void)sendToAllDestinations:(id)arg1 ;
-(id)_readConfiguration:(id)arg1 ;
-(void)addDestination:(id)arg1 ;
-(void)updateWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)removeDestination:(id)arg1 ;
-(void)removePhotoLibraryFromDestinations;
@end

